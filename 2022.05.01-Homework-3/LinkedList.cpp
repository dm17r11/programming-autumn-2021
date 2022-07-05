#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	/*
	Node* newhead = new Node();
	newhead->data = element;
	newhead->next = this->head;
	head = newhead;
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;*/
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}

bool LinkedList::isIndexValid(int index)
{
	return index >= 0 && index < count;
}

Node* LinkedList::nodeByIndex(int index)
{
	if (!isIndexValid(index))
	{
		return nullptr;
	}

	Node* result = head;
	for (int i = 0; i < index; ++i)
	{
		result = result->next;
	}
	return result;
}

void LinkedList::insert(int element, int index)
{
	if (index < 0 || index > count)
		return;

	if (index == 0)
	{
		pushHead(element);
		return;
	}

	if (index == count)
	{
		pushTail(element);
		return;
	}

	Node* prev = nodeByIndex(index - 1);
	prev->next = new Node(element, prev->next);

	count++;
}

int LinkedList::extract(int index)
{
	if (!isIndexValid(index))
		return 0;

	if (index == 0)
	{
		return popHead();
	}

	if (index == count - 1)
	{
		return popTail();
	}

	Node* prev = nodeByIndex(index - 1);
	int result = prev->next->data;
	prev->next = prev->next->next;
	count--;
	return result;
}

void LinkedList::swap(int index1, int index2)
{
	if (!isIndexValid(index1) || !isIndexValid(index2))
	{
		return;
	}

	Node* node1 = nodeByIndex(index1);
	Node* node2 = nodeByIndex(index2);

	int val = node1->data;

	node1->data = node2->data;
	node2->data = val;
}
