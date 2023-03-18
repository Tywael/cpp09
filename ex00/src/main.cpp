#include <cstdlib>
#include <map>
#include "../inc/btc.hpp"
#include "../inc/utils.hpp"

void readInput(std::string fileName, std::map<std::string, Btc> &btcs) {
	std::string line;
	std::ifstream file;

	file.open(fileName.c_str());
	if (!file.is_open() || file.bad())
		throw std::bad_exception();
	while (std::getline(file, line))
		ret.push_back(line);
	file.close();
	return (ret);
}

std::list<std::string> split(std::string str, std::string delimiter)
{
	std::list<std::string> result;
	size_t pos = 0;
	std::string token;

	while ((pos = str.find(delimiter)) != std::string::npos)
	{
		token = str.substr(0, pos);
		result.push_back(token);
		str.erase(0, pos + delimiter.length());
	}

	result.push_back(str);
	return (result);
}

std::list<Btc>::iterator checkDate(std::string str, std::list<Btc> list) {
	std::list<Btc>::iterator it;
	for (it = list.begin(); it != list.end() ; it++) {
		if (*it == str)
			return it;
	}
	return list.end();
}

int main ( int argc, char **argv ) {
	if (argc != 2) {
		std::cerr << "error: not enough parameter ( executable filename )" << std::endl;
		return 1;
	}
	std::map<std::string, Btc> btcs;

	return 0;
}
