/*
 * CamelCase.c
 *
 *  Created on: Nov 23, 2019
 *      Author: sayed
 */

int camelcase(char *str) {
	int count = 1;
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] >= 65 && str[i] <= 90)
			count++;
		i++;
	}
	return count ;
}
