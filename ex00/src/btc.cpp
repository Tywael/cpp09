//
// Created by tywael on 3/14/23.
//
#include "../inc/btc.hpp"

Btc::Btc(void) {}

Btc &Btc::operator=(const Btc &right) {
	if (&right != this)
	{
		_mount = right.getMount();
		_value = right.getValue();
	}
	return (*this);
}

Btc::Btc(const Btc &copy) {
	(*this) = copy;
}

Btc::~Btc(void) {}

double Btc::getDateValue(void) const {
	return _value * _mount;
}
void Btc::setValue(double val) {
	_value = val;
}

double Btc::getMount(void) const {
	return _mount;
}

double Btc::getValue(void) const {
	return _value;
}


void Btc::addMount(double mount) {
	if (mount < 1.0 || mount > 1000.0) {
		std::cerr << "error: mount of Btc isn't correct (0 < BTC <= 1000)" << std::endl;
		return ;
	}
	_mount += mount;
}

std::ostream &operator<<(std::ostream &os, const Btc &btc) {
	os << " => " << btc.getMount() << " = " << btc.getDateValue();
	return os;
}
