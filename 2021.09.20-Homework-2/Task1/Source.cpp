#include<iostream>

using namespace std;

int main(int argc, char* argv) 
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> n;

	if (n < 0) {
		cout << "����� ";
		n *= -1;
	}

	if (n == 0) {
		cout << "0 �������";
		return EXIT_SUCCESS;
	}

	a = n % 10;
	b = n / 10 % 10;
	c = n / 100 % 10;

	switch (c)
	{
	case 1:
	{
		cout << "��� ";
		break;
	}
	case 2:
	{
		cout << "������ ";
		break;
	}
	case 3:
	{
		cout << "������ ";
		break;
	}
	case 4:
	{
		cout << "��������� ";
		break;
	}
	case 5:
	{
		cout << "������� ";
		break;
	}
	case 6:
	{
		cout << "�������� ";
		break;
	}
	case 7:
	{
		cout << "������� ";
		break;
	}
	case 8:
	{
		cout << "��������� ";
		break;
	}
	case 9:
	{
		cout << "��������� ";
		break;
	}
	default:
	{
		break;
	}
	}

	if (b == 1)
	{
		switch (a)
		{
		case 0:
		{
			cout << "������ �������";
			break;
		}
		case 1:
		{
			cout << "���������� �������";
			break;
		}
		case 2:
		{
			cout << "���������� �������";
			break;
		}
		case 3:
		{
			cout << "���������� �������";
			break;
		}
		case 4:
		{
			cout << "������������ �������";
			break;
		}
		case 5:
		{
			cout << "���������� �������";
			break;
		}
		case 6:
		{
			cout << "����������� �������";
			break;
		}
		case 7:
		{
			cout << "���������� �������";
			break;
		}
		case 8:
		{
			cout << "������������ �������";
			break;
		}
		case 9:
		{
			cout << "������������ �������";
			break;
		}
		}
	}
	else
	{
		switch (b)
		{
		case 2:
		{
			cout << "�������� ";
			break;
		}
		case 3:
		{
			cout << "�������� ";
			break;
		}
		case 4:
		{
			cout << "����� ";
			break;
		}
		case 5:
		{
			cout << "��������� ";
			break;
		}
		case 6:
		{
			cout << "���������� ";
			break;
		}
		case 7:
		{
			cout << "��������� ";
			break;
		}
		case 8:
		{
			cout << "����������� ";
			break;
		}
		case 9:
		{
			cout << "��������� ";
			break;
		}
		}

		switch (a)
		{
		case 0:
		{
			cout << "�������";
			break;
		}
		case 1:
		{
			cout << "���� �����";
			break;
		}
		case 2:
		{
			cout << "��� ������";
			break;
		}
		case 3:
		{
			cout << "��� ������";
			break;
		}
		case 4:
		{
			cout << "������ ������";
			break;
		}
		case 5:
		{
			cout << "���� �������";
			break;
		}
		case 6:
		{
			cout << "����� �������";
			break;
		}
		case 7:
		{
			cout << "���� �������";
			break;
		}
		case 8:
		{
			cout << "������ �������";
			break;
		}
		case 9:
		{
			cout << "������ �������";
			break;
		}
		}
	}

	return EXIT_SUCCESS;
}