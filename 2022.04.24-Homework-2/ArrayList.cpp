#include "ArrayList.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
	int val = data[posi];
	data[posi] = data[posj];
	data[posj] = val;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

int ArrayList::size()
{
	return count;
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
	insert(element, 0);
}

void ArrayList::insert(int element, int position)
{
	if (count == capacity)
	{
		expand(capacity);
	}
	count++;

	for (int i = position; i + 1 < count; ++i)
	{
		data[i + 1] = data[i];
	}
	data[position] = element;
}

int ArrayList::extractbegin()
{
	return extract(count);
}

int ArrayList::extract(int position)
{
	int val = data[position];

	for (int i = position + 1; i < count; ++i)
	{
		data[i - 1] = data[i];
	}
	count--;

	return val;
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

ArrayList merge(ArrayList listA, ArrayList listB)
{
	if (listA.size() == 0)
	{
		return listB;
	}

	if (listB.size() == 0)
	{
		return listA;
	}

	int iA = 0;
	int iB = 0;
	ArrayList result(listA.size() + listB.size());

	while (listA.size() != iA || listB.size() != iB)
	{
		if (listB.size() == iB)
		{
			result.pushend(listA[iA]);
			iA++;
			continue;
		}

		if (listA.size() == iA)
		{
			result.pushend(listB[iB]);
			iB++;
			continue;
		}

		if (listA[iA] < listB[iB])
		{
			result.pushend(listA[iA]);
			iA++;
		}
		else
		{
			result.pushend(listB[iB]);
			iB++;
		}
	}

	return result;
}

ArrayList quicksort(ArrayList list)
{
	if (list.size() < 2)
	{
		return list;
	}

	int mid = list.size() / 2;

	ArrayList left(mid);
	ArrayList right(list.size() - mid);

	for (int i = 0; i < mid; ++i)
	{
		left.pushend(list[i]);
	}

	for (int i = mid; i < list.size(); ++i)
	{
		right.pushend(list[i]);
	}

	return merge(quicksort(left), quicksort(right));
}

void ArrayList::sort()
{
	ArrayList sorted = quicksort(*this);

	for (int i = 0; i < count; ++i)
	{
		data[i] = sorted.data[i];
	}
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}