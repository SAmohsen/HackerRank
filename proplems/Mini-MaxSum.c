/*
 * Mini-MaxSum.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

#include <stdio.h>
void miniMaxSum(int arr_count, int *arr) {
	long minisum=0;
	long maxsum=0;
	long sum = 0 ;
	int subarrLength = 4;
	int n ;
	int j ;
	/* initial values */
	for (int i = 0; i < arr_count - 1; i++) {
		minisum += arr[i];
		maxsum += arr[i];
	}

	for (int i = 0; i < arr_count; i++) {
		j = i;
		n = 0 ;
		sum = 0 ;
		while (n < subarrLength) {
			sum = sum + arr[j];
			j = (j + 1) % arr_count;
			n++;
		}

		if (sum > maxsum) {
			maxsum = sum;
		} else if (sum < minisum) {
			minisum = sum;
		} else {

		}

	}
	printf("%ld %ld"  ,minisum, maxsum);
}
