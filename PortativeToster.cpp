#include "PortativeToster.hpp"

void PortativeToster::Charging()
{
	if (charge_ < max_charge_)
	{
		std::cout << "�������...\n";
		charge_ = max_charge_;
	}
	else
	{
		std::cout << "������ ��� ����\n";
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
