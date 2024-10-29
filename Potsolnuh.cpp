#include "PortativeToster.hpp"
#include <iostream>
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    PortativeToster toster;
    std::cout << "Уровень заряда:" << toster.GetCharge() << "%\n";
    toster.Tosting();
    std::cout << "Уровень заряда:" << toster.GetCharge() << "%\n";
    toster.Charging();
    std::cout << "Уровень заряда:" << toster.GetCharge() << "%\n";

}

