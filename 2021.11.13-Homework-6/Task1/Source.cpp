#include <iostream>

using namespace std;

void increase_size(int** arr, int* size, int* capacity)
{
	if (*size + 1 > *capacity)
	{
		int* temp = new int[*capacity * 2];
		for (int i = 0; i < *size; ++i)
		{
			temp[i] = (*arr)[i];
		}
		*arr = temp;
		*capacity = *capacity * 2;
	}
	++(*size);
}

void move_arr(int* arr, int arr_size, int delta)
{
	if (delta > 0)
	{ 
		for (int i = arr_size - 1; i >= 0; --i)
		{
			if (i + delta < arr_size)
			{
				arr[i + delta] = arr[i];
			}
		}
	}
	else
	{
		for (int i = 0; i < arr_size; ++i)
		{
			if (i + delta >= 0)
			{
				arr[i + delta] = arr[i];
			}
		}
	}
}

int main(int argc, char** argv)
{
	int size = 0;
	int capacity = 1;
	int* arr = new int[1];

	while (true)
	{
		cout << "=== Options ===\n";
		cout << "q - Exit\n";
		cout << "p - Print array\n";
		cout << "e - Append element to the end\n";
		cout << "b - Append element to the beginning\n";
		cout << "l - Remove last element\n";
		cout << "f - Remove first element\n";
		cout << "r - Reverse array\n";
		cout << "===============\n";

		char command = '\x00';
		cin >> command;

		switch (command)
		{
		case 'q':
		{
			return EXIT_SUCCESS;
		}
		case 'p':
		{
			for (int i = 0; i < size; ++i)
			{
				cout << arr[i] << " ";
			}
			cout << "\n";
			break;
		}
		case 'e':
		{
			increase_size(&arr, &size, &capacity);
			cout << "Enter new element: ";
			cin >> arr[size - 1];
			break;
		}
		case 'b':
		{
			increase_size(&arr, &size, &capacity);
			move_arr(arr, size, 1);
			cout << "Enter new element: ";
			cin >> arr[0];
			break;
		}
		case 'l':
		{
			if (size > 0)
			{
				--size;
			}
			break;
		}
		case 'f':
		{
			if (size > 0)
			{
				move_arr(arr, size, -1);
				--size;
			}
			break;
		}
		case 'r':
		{
			for (int i = 0; i < size / 2; ++i)
			{
				int t = arr[i];
				arr[i] = arr[size - 1 - i];
				arr[size - 1 - i] = t;
			}
			break;
		}
		default:
			break;
		}
	}
}