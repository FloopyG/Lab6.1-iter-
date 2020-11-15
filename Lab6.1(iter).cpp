#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* c, const int size, int min, int max) {
	for (int i = 0; i < size; i++) {
		c[i] = min + rand() % (max - min + 1);
	}
}

void arrPrint(int* c, const int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << c[i];
	}
		cout << endl;
}

// c[i] % 2 == 0 || i % 8 == 0

int arrSum(int* c, const int size, int S) {
	for (int i = 0; i < size; i++) {
		if (c[i] % 2 == 0 || (i + 1) % 8 != 0) {
			S += c[i];
			c[i] = 0;
		}
	}
	return S;
}

int arrCount(int* c, const int size, int z) {
	for (int i = 0; i < size; i++) {
		if (c[i] == 0) {
			z++;
		}
	}
	return z;
}


int main()
{
	srand((unsigned)time(NULL));

	const int a = 25;

	int c[a];

	int Low = 5;
	int High = 90;

	Create(c, a, Low, High);
	arrPrint(c, a);
	cout << "S = " << arrSum(c, a, 0) << endl;
	cout << "c[i] = 0 count: " << arrCount(c, a, 0) << endl;
	arrPrint(c, a);



	system("pause");
	cin.get();
	return 0;
}
