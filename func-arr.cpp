#include "func-arr.h"

void arr_init(int arr[], const int SIZE) 
{
	cout << "Init array:";
	for (size_t i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
}

void arr_print(int arr[], const int SIZE) 
{
	for (size_t i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return;
}