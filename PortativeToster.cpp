#include "PortativeToster.hpp"

void PortativeToster::Charging()
{
	if (charge_ < 100)
	{
		std::cout << "�������...\n";
		charge_ = 100;
	}
}

void PortativeToster::Tosting()
{
	int charge_level;
	std::cout << "�������� ������� �������� �����:\n1 - ������\n2 - �������\n3 - �������\n";
	std::cin >> charge_level;
	if ((charge_level >= 1 && charge_level <= 3) && charge_ - (10 * charge_level) >= 0)
	{
		std::cout << "��� ���� �����!\n";
		charge_ -= 10 * charge_level;
	}
}
