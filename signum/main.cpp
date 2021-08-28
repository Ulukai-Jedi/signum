//7. A program valósítsa meg a szignumfüggvényt.
//a Szignumfüggvény: egy számra, ha pozitív, akkor 1 - et ad eredményül, ha negatív, akkor - 1 - et, 0 esetén pedig 0 - t.
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