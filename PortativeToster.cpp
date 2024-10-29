#include "PortativeToster.hpp"

void PortativeToster::Charging()
{
	if (charge_ < 100)
	{
		std::cout << "Зарядка...\n";
		charge_ = 100;
	}
}

void PortativeToster::Tosting()
{
	int charge_level;
	std::cout << "Выберите уровень прожарки тоста:\n1 - Слабая\n2 - Средняя\n3 - Сильная\n";
	std::cin >> charge_level;
	if ((charge_level >= 1 && charge_level <= 3) && charge_ - (10 * charge_level) >= 0)
	{
		std::cout << "Ваш тост готов!\n";
		charge_ -= 10 * charge_level;
	}
}
