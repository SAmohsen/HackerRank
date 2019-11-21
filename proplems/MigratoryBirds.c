/*
 * MigratoryBirds.c
 *
 *  Created on: Nov 21, 2019
 *      Author: sayed
 */
#include <stdio.h>
static void makeSwap(int *a, int *b) {

	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
static void inserationsort(int *arr, int size) {
	int i, j = 1, key;
	while (j <= size) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && key < arr[i]) {
			arr[i + 1] = arr[i];
			i = i - 1;

		}
		arr[i + 1] = key;
		j++;

	}

}
int migratoryBirds(int arr_count, int *arr) {
	inserationsort(arr, arr_count);
	int id = arr[0];
	int counter = 0;
	int maxapp = -1;
	for (int i = 0; i < arr_count; i++) {
		counter = 0;
		while (arr[i + 1] == arr[i]) {
			counter++;
			i++;
		}
		if (counter == maxapp) {
			maxapp = counter;
			if (arr[i] < id) {
				id = arr[i];
			}
		} else if (counter > maxapp) {
			maxapp = counter;
			id = arr[i];
		} else {

		}
	}

	return id;
}

