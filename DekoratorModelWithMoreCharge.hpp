#ifndef DEKORATORMODELWITHMORECHARGE_HPP
#define DEKORATORMODELWITHMORECHARGE_HPP
#include "Decorator.hpp"
#include "PortativeToster.hpp"
class DekoratorModelWithMoreCharge : public Decorator
{
public:
	//создаём условную продвинутую модель тостера с увеличенным обЪёмом батареи
	DekoratorModelWithMoreCharge(PortativeToster* portativeToster) : Decorator(portativeToster)
	{
		max_charge_ = max_charge_ + 10; //ну что-то вроде того
		charge_ = max_charge_;
	}
	void Charging() override
	{
		PortativeToster::Charging();
	}
	void Tosting() override
	{
		PortativeToster::Tosting();
	}
	int GetCharge()const override
	{
		return PortativeToster::GetCharge();
	}

protected:

};

#endif