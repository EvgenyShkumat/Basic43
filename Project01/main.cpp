#include <iostream>
using namespace std;

string output(int* array, int size);
void random_init(int* array, int size, int start);

int main() {
	srand(time(NULL));

	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 0);
	cout << output(vector, size);

	

	return 0;
}