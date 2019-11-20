/*
 * BirthdayCakeCandles.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

static int keyArrOccurrence(const int *arr, int size, int key) {
int counter = 0 ;
	for (int i = 0; i < size; i++) {
		if (key == arr[i])
			counter++;
	}
	return counter;
}

static int maxArrNumber(int ar_count, int *ar) {
	int max = ar[0];

	for (int i = 1; i < ar_count; i++)
	{
		if (ar[i] > max) {
			max = ar[i];
		}
	}
	return max;
}

int birthdayCakeCandles(int ar_count, int* ar) {
int tallest_candle = maxArrNumber(ar_count,ar);
int tallest_candles_count = keyArrOccurrence(ar,ar_count,tallest_candle);
return tallest_candles_count;
}
