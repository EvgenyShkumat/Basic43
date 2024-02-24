#include <iostream>
using namespace std;

string output(int* array, int size);
void random_init(int* array, int size, int start);

int amount_of_even_elements(int* vector, int size);

int main() {
	srand(time(NULL));

	int size = 8;
	int* vector = new int[size];

	random_init(vector, size, 1);
	cout << output(vector, size);

	cout << "\nAmount of even numbers is " << amount_of_even_elements(vector, size);

	return 0;
}