/*
 * DiagonalDifference.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

int diagonalDifference(int arr_rows, int arr_columns, int **arr) {
	int abs_difference;
	int primaryDiagonalSum = 0;
	int SeconderyDiagonalSum = 0;
	for (int i = 0; i < arr_rows; i++) {
		for (int j = 0; j < arr_columns; j++) {
			if (i == j) {
				primaryDiagonalSum += arr[i][j];
			}
		}
		SeconderyDiagonalSum += arr[i][arr_columns - i - 1];
	}
	abs_difference = primaryDiagonalSum - SeconderyDiagonalSum;
	if (abs_difference < 0) {
		abs_difference = abs_difference * -1;
	}

	return abs_difference;
}
