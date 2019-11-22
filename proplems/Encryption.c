/*
 * Encryption.c
 *
 *  Created on: Nov 22, 2019
 *      Author: sayed
 */

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static double getstringlength(char *str) {
	double counter = 0;
	int i = 0;
	while (str[i] != 0) {
		counter++;
		i++;
	}
	return counter;
}

static void removeStringSpaces(char *str, char *newstr) {
	int i = 0;
	int j = 0;
	while (str[i] != '\0') {
		if (str[i] != ' ') {
			newstr[j] = str[i];
			j++;
		}
		i++;
	}
	newstr[j] = '\0'; // terminate string
}

static void gridString(int rows, int cols, char grid[][cols], char str[],
		int length) {
	int k = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			grid[i][j] = str[k];
			k++;
			if (k >= length) {
				str[k] = '#'; //add a magic char
				str[k + 1] = '\0';
			}

		}
	}
}
static void printgridString(int rows, int cols, char grid[][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%c", grid[i][j]);

		}
		printf("\n");

	}
}
static void encryptStr(int rows, int cols, char grid[][cols], char str[]) {
	int k = 0;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			if (grid[j][i] != '#') {
				str[k] = grid[j][i];
				k++;
			}

		}
		str[k] = ' ';
		k++;
	}
	str[k] = '\0';
}

char* encryption(char *s) {
	static char newstr[81];
	removeStringSpaces(s, newstr);
	double length = getstringlength(newstr);
	float root = sqrt(length);
	int rows = floor(root);
	int columns = ceil(root);
	if ((rows * columns) < length) {
		rows++;
	}
	char grid[rows][columns];
	gridString(rows, columns, grid, newstr, length);
	//printgridString(rows, columns, grid);
	encryptStr(rows, columns, grid, newstr);
	return newstr;
}
