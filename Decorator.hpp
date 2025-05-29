#ifndef _DECPRATOR_HPP_
#define _DECPRATOR_HPP_
#include "PortativeToster.hpp"
class Decorator : public PortativeToster
{
public:
	//создаём декоратр с виртуальными методами для добавления в дальнейшем модификаций
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

