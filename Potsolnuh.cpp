#include "PortativeToster.hpp"
#include "DekoratorModelWithMoreCharge.hpp"
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

    //демонстрация функционала нашей улучшенной модели
    PortativeToster toster2;
    DekoratorModelWithMoreCharge dekor(&toster2);
    std::cout << "Уровень заряда:" << dekor.GetCharge() << "%\n";
    dekor.Tosting();
    std::cout << "Уровень заряда:" << dekor.GetCharge() << "%\n";
    dekor.Charging();
    std::cout << "Уровень заряда:" << dekor.GetCharge() << "%\n";
}

