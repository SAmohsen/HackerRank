/*
 * SansaandXOR.c
 *
 *  Created on: Dec 2, 2019
 *      Author: sayed
 */

static int XORContigousSubsets(int *arr, int arr_length, int start_index) {
	int res;
	int totalres = 0;
	for (int j = start_index; j < arr_length; j++) {
		res = 0;
		for (int k = start_index; k <= j; k++) {
			res = res ^ arr[k];
		}
		totalres = totalres ^ res;
	}
	return totalres;
}
int sansaXorv1(int arr_count, int *arr) {
	int res = 0;
	for (int i = 0; i < arr_count; i++) {
		res ^= XORContigousSubsets(arr, arr_count, i);
	}
	return res;
}
int sansaXor(int arr_count, int *arr) {
	int res;
	if (arr_count % 2 == 0) {
		res = 0;
	} else {
		res = arr[0];
		for (int i = 2; i < arr_count; i=i+2) {
			res ^= arr[i];
		}
	}

	return res;
}
