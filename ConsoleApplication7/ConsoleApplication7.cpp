#include <iostream>
using namespace std;
int* delete_chet(int* mas, int& size) {
	int col_chet = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] % 2 == 0) {
			col_chet++;
		}
	}
	int new_size = size - col_chet;
	int* new_mas = new int[new_size];
	int t = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] % 2 != 0) {
			new_mas[t] = mas[i];
			t++;
		}
	}
	size = new_size;
	return new_mas;
}

int main()
{
	int size = 5;
	int* mas = new int[size];
	for (int i = 0; i < 5; i++)
	{
		mas[i] = i;
	}
	int* new_mas = delete_chet(mas, size);
	for (int i = 0; i < size; i++)
	{
		cout << new_mas[i] << " ";
	}
}