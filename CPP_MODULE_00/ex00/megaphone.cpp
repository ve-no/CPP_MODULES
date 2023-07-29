
/** * * * * * * * * * * * * * * * * * * * * *
  *    _    __ ______       _   __ ____     *
  *   | |  / // ____/      / | / // __ \    *
  *   | | / // __/ ______ /  |/ // / / /    *
  *   | |/ // /___/_____// /|  // /_/ /     *
  *   |___//_____/      /_/ |_/ \____/      *
  * * * * * * * * * * * * * * * * * * * * * *
  * Created Date: July 20th 2023, 11:54 am  *
  * Author: Allal El Bakouri (ael-bako)     *
  * Github: ve-no                           *
  * * * * * * * * * * * * * * * * * * * * * **/

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
