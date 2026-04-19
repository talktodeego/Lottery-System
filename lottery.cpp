#include <iostream>
#include <ctime>

int main() {
	srand(time(0));
	int arrSort[6], size{0}, numSort{0};

	size = sizeof(arrSort) / sizeof(arrSort[0]);

	for (int i = 0; i < size; i++) {
		numSort = (rand() % 60) + 1;
		bool sameNum = false; //flag de validação

		for (int j = 0; j < i; j++) {
			//se o arrSort[j] for igual o numSort a flag muda para true
			if (arrSort[j] == numSort) {
				sameNum = true;
				break;
			}
		}

		//se a flag for true, reinicia o for
		if (sameNum) {
			i--;
		}else {
			arrSort[i] = numSort;
			std::cout << arrSort[i] << " ";
		}
	}

	return 0;
}