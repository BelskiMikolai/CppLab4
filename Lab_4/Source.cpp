#include <iostream>

int main()
{
	//Создаём переменные
	double y[10];
	double sum{ 0 };
	int idlLast{ -1 };
	bool isBetween{ false };

	//Зпрашиваем значения массива, находим индекс последнего нулевого элемента
	std::cout << "Enter y:\n";
	for (int i = 0; i < 10; i++)
	{
		int num{};
		std::cin >> num;
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
	std::cout << "Sum: " << sum;

	return 0;
}