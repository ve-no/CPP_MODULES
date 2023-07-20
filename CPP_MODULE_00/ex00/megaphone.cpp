/*
 * Filename: /Users/ael-bako/1337_cursus/CPP_MODULES/CPP_Module_00/ex00/megaphone.cpp
 * Path: /Users/ael-bako/1337_cursus/CPP_MODULES/CPP_Module_00/ex00
 * Created Date: Thursday, July 20th 2023, 11:54:34 am
 * Author: Allal El Bakouri
 */

#include <iostream>

int main(int ac, char **av)
{
	int j = 0;
	char ch;
	if (ac > 1) {
		for (int i = 1; i < ac; i++) {
			j = -1;
			while (av[i][++j]) {
				ch = toupper(av[i][j]);
				std::cout << ch;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return 0;
}
