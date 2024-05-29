#include "func-arr.h"

int main() {
	const int SIZE = 10;
	int arr[SIZE];
	arr_init(arr, SIZE);
	arr_print(arr, SIZE);

	return 0;
}