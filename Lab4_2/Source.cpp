#include <iostream>

int main()
{
	//Создаём переменные
	double y[10];
	double y_max{ 0 };
	double mult{ 1 };
	bool isBetween{ false };

	//Зпрашиваем значения массива, находим максимальный элемент
	std::cout << "Enter y:\n";
	for (int i = 0; i < 10; i++)
	{
		int num{};
		std::cin >> num;
		y[i] = num;
		if (i == 0)
		{
			y_max = num;
		}
		if (num > y_max)
		{
			y_max = num;
		}
	}

	//Считаем произведение элементов масива после наибольшего элемента
	for (int i = 0; i < 10; i++)
	{
		if (isBetween)
		{
			mult *= y[i];
		}
		if (y[i] == y_max && !isBetween)
		{
			isBetween = true;
		}
	}

	//Выводем произведение
	std::cout << "Mult: " << mult;

	return 0;
}