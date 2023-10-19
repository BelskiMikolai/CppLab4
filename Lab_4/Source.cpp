#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	//Создаём переменные
	double y[10];
	double sum{ 0 };
	int idlLast{ -1 };
	bool isBetween{ false };
	bool isRandom{ false };
	std::cout << "Random? (0/1)\n";
	std::cin >> isRandom;

	//Зпрашиваем значения массива, либо генерируем, используя функцию rand(). 
	//Находим индекс последнего нулевого элемента
	if (!isRandom) {
		std::cout << "Enter y\n";
	}
	srand(time(NULL)); 
	for (int i = 0; i < 10; i++)
	{
		int num{};
		if (isRandom)
		{
			num = rand() % 10;
			std::cout << num << "\n";
		}
		else
		{
			std::cin >> num;
		}
		y[i] = num;
		if (num == 0)
		{
			idlLast = i;
		}
	}

	// Находим сумму от первого нулевого до последнего, используя его индекс
	for (int i = 0; i < 10; i++)
	{
		if (isBetween && i < idlLast)
		{
			sum += y[i];
		}
		if (y[i] == 0 && !isBetween)
		{
			isBetween = true;
		}
	}

	//Выводим сумму
	std::cout << "Sum: " << sum<<"\n";

	return 0;
}