int amount_of_even_elements(int* vector, int size) {
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(vector + i) % 2 == 0) {
			count++;
		}
	}

	return count;
}