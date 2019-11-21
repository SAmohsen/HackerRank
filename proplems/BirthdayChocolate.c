/*
 * BirthdayChocolate.c
 *
 *  Created on: Nov 21, 2019
 *      Author: sayed
 */


int birthday(int s_count, int *s, int d, int m) {
	int counter = 0;
	int n;
	int j;
	int sum = 0;
	for (int i = 0; i < s_count; i++) {
		n = 0;
		j = i;
		sum = 0 ;
		while (n < m) {
			sum = sum + s[j];
			j = j + 1;
			n++;
		}
		if (sum == d)
		{
			counter++;
		}
	}
	return counter;
}
