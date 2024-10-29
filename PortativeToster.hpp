#ifndef _PortativeToster_HPP_
#define _PortativeToster_HPP_
#include <iostream>
class PortativeToster
{
public:
	int GetCharge()const
	{
		return charge_;
	}
	void Charging();
	void Tosting();
private:
	int charge_ = 100;
};


#endif
