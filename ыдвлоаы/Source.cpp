#include <iostream>
#include <cstddef>



int main()
{
	setlocale(LC_ALL, "ru");
	int num{ 0 };
	int num2{ 0 };
	int num3{ 0 };
	int num4{ 0 };
	std::cin >> num;
	std::cin >> num2;
	std::cin >> num3;
	std::cin >> num4;

	switch (num)
	{
	case 1:
		std::cout << "���� ������ ";
		break;
	case 2:
		std::cout << "��� ������ ";
		break;
	case 3:
		std::cout << "��� ������ ";
		break;
	case 4:
		std::cout << "������ ������ ";
		break;
	case 5:
		std::cout << "���� ����� ";
		break;
	case 6:
		std::cout << "����� ����� ";
		break;
	case 7: 
		std::cout << "���� ����� ";
		break;
	case 8:
		std::cout << "������ ����� ";
		break;
	case 9:
		std::cout << "������ ����� ";
		break;
	default:
		break;
	}

	switch (num2)
	{
	case 0:
		std::cout << "";
		break;
	case 1:
		std::cout << "��� ";
		break;
	case 2:
		std::cout << "������ ";
		break;
	case 3:
		std::cout << "������ ";
		break;
	case 4:
		std::cout << "��������� ";
		break;
	case 5:
		std::cout << "������� ";
		break;
	case 6:
		std::cout << "�������� ";
		break;
	case 7:
		std::cout << "������� ";
		break;
	case 8:
		std::cout << "��������� ";
		break;
	case 9:
		std::cout << "��������� ";
		break;

	default:
		break;
	}

	if (num3 == 1 && num4 != 0)
	{
		switch (num3)
		{
		case 1:
			std::cout << "���������� ";
			break;
		case 2:
			std::cout << "���������� ";
			break;
		case 3:
			std::cout << "���������� ";
			break;
		case 4:
			std::cout << "������������ ";
			break;
		case 5:
			std::cout << "���������� ";
			break;
		case 6:
			std::cout << "���������� ";
			break;
		case 7:
			std::cout << "���������� ";
			break;
		case 8:
			std::cout << "������������ ";
		case 9:
			std::cout << "������������ ";
			break;
		default:
			break;
		}
	}
	else
	{
		switch (num3)
		{
		case 0:
			std::cout << "";
			break;
		case 1:
			std::cout << "������ ";
			break;
		case 2:
			std::cout << "�������� ";
			break;
		case 3:
			std::cout << "�������� ";
			break;
		case 4:
			std::cout << "����� ";
			break;
		case 5:
			std::cout << "��������� ";
			break;
		case 6:
			std::cout << "���������� ";
			break;
		case 7:
			std::cout << "��������� ";
			break;
		case 8:
			std::cout << "����������� ";
		case 9:
			std::cout << "��������� ";
			break;
		default:
			break;
		}

		switch (num4)
		{
		case 0:
			std::cout << " ";
			break;
		case 1:
			std::cout << "����";
			break;
		case 2:
			std::cout << "���";
			break;
		case 3:
			std::cout << "���";
			break;
		case 4:
			std::cout << "������";
			break;
		case 5:
			std::cout << "����";
			break;
		case 6:
			std::cout << "�����";
			break;
		case 7:
			std::cout << "����";
			break;
		case 8:
			std::cout << "������";
			break;
		case 9:
			std::cout << "������";
			break;
		default:
			break;
		}
	}

	return 0;
}