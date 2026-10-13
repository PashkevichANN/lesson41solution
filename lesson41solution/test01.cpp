#include <iostream>
#include <ctime>
#include <stdlib.h> // int rand(void)

// char: -128 ... 127, 0 ...255;
// short : -32768 ... 32767
using namespace std;

int get_random_number(int total) {

	return rand() % (total +1) ;
}


int main() {

	srand(time(NULL));
	cout << time(NULL) << endl;
	/*int total = 10;
	int count = total * 2;
	for (int i = 0; i < 33; i++) {
		cout << get_random_number() << " ";
	}*/
	

	return 0;
}