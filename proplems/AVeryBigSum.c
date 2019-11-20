/*
 * AVeryBigSum.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

long aVeryBigSum(int ar_count, long *ar) {

	long sum = 0;
	for (int i = 0; i < ar_count; i++) {
		sum = sum + ar[i];
	}
	return sum;
}
