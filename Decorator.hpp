#ifndef _DECPRATOR_HPP_
#define _DECPRATOR_HPP_
#include "PortativeToster.hpp"
class Decorator : public PortativeToster
{
public:
	//������ �������� � ������������ �������� ��� ���������� � ���������� �����������
	Decorator(PortativeToster* portativeToster) : portativeToster_() { }
	void Charging() override
	{
		portativeToster_.Charging();
	}
	void Tosting() override
	{
		portativeToster_.Tosting();
	}

protected:
	PortativeToster portativeToster_;
	
};

#endif

