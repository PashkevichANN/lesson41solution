#include <iostream>
#include <stdlib.h> // int rand(void)

// char: -128 ... 127, 0 ...255;
// short : -32768 ... 32767
using namespace std;

int main() {

	int min = 2'000'000'000;
	int max = -1;
	for (int i = 0; i < 100'000; i++) {

		int n = rand();

		if (n > max) {
			max = n;
		}
		if (n < min) {
			min = n;
		}
	}
	cout << "Max random value: " << max << endl;
	cout << "Min random value: " << min;

	return 0;
}