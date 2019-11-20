/*
 * AppleandOrange.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */
#include <stdio.h>
void countApplesAndOranges(int s, int t, int a, int b, int apples_count,
		int *apples, int oranges_count, int *oranges) {
	/* Apple Tree */
	int counter = 0;
	for (int i = 0; i < apples_count; i++) {
		if (((apples[i] + a) >= s) && ((apples[i] + a) <= t)) {
			counter++;
		}

	}
	printf("%d\n", counter);
	counter = 0;
	/* Orange Tree */
	for (int j = 0; j < oranges_count; j++) {
		if (((oranges[j] + a) >= s) && ((oranges[j] + a) <= t)) {
			counter++;
		}
	}
	printf("%d", counter);
}

