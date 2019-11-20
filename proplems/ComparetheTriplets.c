/*
 * ComparetheTriplets.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

int* compareTriplets(int a_count, int *a, int b_count, int *b,int *result_count) {
	static int result_arr[2] = { };
	*result_count = 2 ;

	for (int i = 0; i < a_count; i++) {
		if (a[i] > b[i]) {
			result_arr[0]++;
		} else if (b[i] > a[i]) {
			result_arr[1]++;
		} else {
			/*no action required */
		}

	}

	return result_arr;

}
