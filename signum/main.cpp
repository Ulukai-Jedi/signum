//7. A program val�s�tsa meg a szignumf�ggv�nyt.
//a Szignumf�ggv�ny: egy sz�mra, ha pozit�v, akkor 1 - et ad eredm�ny�l, ha negat�v, akkor - 1 - et, 0 eset�n pedig 0 - t.
#include <iostream>

int main() {
	int szam = 0;
	std::cout << "Kerek egy szamot: " << std::endl;
	std::cin >> szam;

	if (szam > 0) {
		std::cout << 1;
	}
	else if (szam < 0){
		std::cout << -1;
	}
	else {
		std::cout << 0;
	}
}