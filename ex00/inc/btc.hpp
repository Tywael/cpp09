//
// Created by tywael on 3/14/23.
//

#ifndef CPP09_BTC_HPP
#define CPP09_BTC_HPP

#include <iostream>
#include <string>
#include <list>
#include <fstream>

class Btc {
public:
	Btc(void);
	Btc(const Btc &copy);
	~Btc(void);
	Btc &operator=(const Btc &right);

	double getMount(void) const;
	double getValue(void) const;
	double getDateValue(void) const;

	void setValue(double val);
	void addMount(double mount);

private:
	double _mount;
	double _value;
};

std::ostream &operator<<(std::ostream &os, const Btc &btc);


#endif //CPP09_BTC_HPP
