/*
 * TimeConversion.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */
#include <stdio.h>
char* timeConversion(char *s) {
	static char c[10];
	char key = s[8];
	if (key == 'A') {
		if ((s[0] == '1') && (s[1] == '2')) {
			c[0] = '0';
			c[1] = '0';
		} else {
			c[0] = s[0];
			c[1] = s[1];
		}

	} else {
		int time = ((s[0] - '0') * 10) + (s[1] - '0');
		time = time + 12;
		if (time == 24) {
			c[0] = s[0];
			c[1] = s[1];
		} else {
			c[0] = '0' + (time / 10);
			c[1] = '0' + (time % 10);
		}

	}
	int i = 2;
	while (i < 8) {
		c[i] = s[i];
		i++;
	}
	return c;
}
