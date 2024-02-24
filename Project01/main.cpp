#include <iostream>
using namespace std;

string output(int* array, int size);
void random_init(int* array, int size, int start);

int amount_of_even_elements(int* vector, int size);
int sum_elements_below_avg(int* vector, int size, double avg);
double find_avg_arithmetical(int* vector, int size);

int main() {
	srand(time(NULL));

	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 0);
	cout << output(vector, size);

	double avg = find_avg_arithmetical(vector, size);

	cout << "\nThe sum of elements which are less than avg arithmetic by their absolute value is: "
		<< sum_elements_below_avg(vector, size, avg);

	return 0;
}