#ifndef _PortativeToster_HPP_
#define _PortativeToster_HPP_
#include <iostream>
class PortativeToster
{
	//наш основной класс
	//представим этот класс основной моделью, которую будем совершенствовать декоратором
public:
	PortativeToster()
	{
		charge_ = 100;
		max_charge_ = 100;
	}
	virtual int GetCharge()const
	{
		return charge_;
	}
	virtual void Charging();
	virtual void Tosting();
protected:
	int charge_;
	int max_charge_;
};


#endif
