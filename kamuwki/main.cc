#include <iostream>
#include <iomanip>
#include <sstream>
#include <random>
#include <ctime>

int main() {


	int minimum = 10;
	int maximum = 20;
	int val, a = 1, b, c = 3;
	std::minstd_rand gen(time(nullptr));
	val = minimum + gen() % (maximum - minimum + 1);
	std::cout << "Kamney imeetca: " << val << std::endl;

	while (val != 0) {
		if (val >= 3) {
			for (int i=1; i<=3; i++)
			if (((val-1)-i)%4==0) {a=i; }
			if (val==3) {a=2; }
		} else {
			if (val==2) {a=1; }
		}
		std::cout << "Protivnik vzal: " << a << std::endl;
		val = val - a;
		if (val <= 0) {
			goto ex;
		}
		std::cout << "Ostalos: " << val << std::endl;
		std::cin >> b;
		if (b >= 4 || b <= 0) {
			std::cout << "3 - maksimum!" << std::endl;
			while (b >= 4 || b <= 0) {
				std::cin >> b;
			}
			val -= b;
		} else {
			val = val - b;
			if (val <= 0) {
				c = 0;
				goto ex;
			}
		}

	}
	ex:

	if (c == 0)
		std::cout << "Vi proigrali" << std::endl;
	else

		std::cout << "Pobeda" << std::endl;

	return 0;
}



