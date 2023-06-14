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
		std::cout << "ќдна тыс€ча ";
		break;
	case 2:
		std::cout << "ƒве тыс€чи ";
		break;
	case 3:
		std::cout << "“ри тыс€чи ";
		break;
	case 4:
		std::cout << "„етыре тыс€чи ";
		break;
	case 5:
		std::cout << "ѕ€ть тыс€ч ";
		break;
	case 6:
		std::cout << "Ўесть тыс€ч ";
		break;
	case 7: 
		std::cout << "—емь тыс€ч ";
		break;
	case 8:
		std::cout << "¬осемь тыс€ч ";
		break;
	case 9:
		std::cout << "ƒев€ть тыс€ч ";
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
		std::cout << "сто ";
		break;
	case 2:
		std::cout << "двести ";
		break;
	case 3:
		std::cout << "триста ";
		break;
	case 4:
		std::cout << "четыреста ";
		break;
	case 5:
		std::cout << "п€тьсот ";
		break;
	case 6:
		std::cout << "шестьсот ";
		break;
	case 7:
		std::cout << "семьсот ";
		break;
	case 8:
		std::cout << "восемьсот ";
		break;
	case 9:
		std::cout << "дев€тьсот ";
		break;

	default:
		break;
	}

	if (num3 == 1 && num4 != 0)
	{
		switch (num3)
		{
		case 1:
			std::cout << "одинадцать ";
			break;
		case 2:
			std::cout << "двенадцать ";
			break;
		case 3:
			std::cout << "тринадцать ";
			break;
		case 4:
			std::cout << "четырнадцать ";
			break;
		case 5:
			std::cout << "п€тнадцать ";
			break;
		case 6:
			std::cout << "шестнадцат ";
			break;
		case 7:
			std::cout << "семнадцать ";
			break;
		case 8:
			std::cout << "восемнадцать ";
		case 9:
			std::cout << "дев€тнадцать ";
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
			std::cout << "дес€ть ";
			break;
		case 2:
			std::cout << "двадцать ";
			break;
		case 3:
			std::cout << "тридцать ";
			break;
		case 4:
			std::cout << "сорок ";
			break;
		case 5:
			std::cout << "п€тьдес€т ";
			break;
		case 6:
			std::cout << "шестьдес€т ";
			break;
		case 7:
			std::cout << "семьдес€т ";
			break;
		case 8:
			std::cout << "восемьдес€т ";
		case 9:
			std::cout << "дев€носто ";
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
			std::cout << "один";
			break;
		case 2:
			std::cout << "два";
			break;
		case 3:
			std::cout << "три";
			break;
		case 4:
			std::cout << "четыре";
			break;
		case 5:
			std::cout << "п€ть";
			break;
		case 6:
			std::cout << "шесть";
			break;
		case 7:
			std::cout << "семь";
			break;
		case 8:
			std::cout << "восемь";
			break;
		case 9:
			std::cout << "дев€ть";
			break;
		default:
			break;
		}
	}

	return 0;
}