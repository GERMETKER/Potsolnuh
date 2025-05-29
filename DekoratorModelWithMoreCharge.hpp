#ifndef DEKORATORMODELWITHMORECHARGE_HPP
#define DEKORATORMODELWITHMORECHARGE_HPP
#include "Decorator.hpp"
#include "PortativeToster.hpp"
class DekoratorModelWithMoreCharge : public Decorator
{
public:
	//������ �������� ����������� ������ ������� � ����������� ��ڸ��� �������
	DekoratorModelWithMoreCharge(PortativeToster* portativeToster) : Decorator(portativeToster)
	{
		max_charge_ = max_charge_ + 10;
		charge_ = max_charge_;
	}
	void Charging() override
	{
		Decorator::Charging();
	}
	void Tosting() override
	{
		Decorator::Tosting();
	}

protected:

};

#endif