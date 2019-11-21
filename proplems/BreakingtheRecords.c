/*
 * BreakingtheRecords.c
 *
 *  Created on: Nov 21, 2019
 *      Author: sayed
 */

int* breakingRecords(int scores_count, int *scores, int *result_count) {
	*result_count = 2;
	static int result_arr[2] = { };
	int minScore = scores[0];
	int maxScore = scores[0];

	for (int i = 1; i < scores_count; i++) {
		if (scores[i] > maxScore) {
			maxScore = scores[i];
			result_arr[0]++;
		} else if (scores[i] < minScore) {
			minScore = scores[i];
			result_arr[1]++;
		}

	}

	return result_arr;
}
