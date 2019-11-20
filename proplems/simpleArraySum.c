/*
 * simpleArraySum.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

int simpleArraySum(int ar_count, int *ar) {
	/*
	 * Write your code here.
	 */
	int sum = 0;
	for (int i = 0; i < ar_count; i++) {
		sum = sum + ar[i];
	}
	return sum;
}
