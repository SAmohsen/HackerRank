/*
 * Kangaroo.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

char* kangaroo(int x1, int v1, int x2, int v2) {
	char *out = "NO";

	while (x1 - v1 >= 0) {
		x1 = x1 - v1;
	}
	while (x2 - v2 >= 0) {
		x2 = x2 - v2;
	}
	if (x1 == x2 ) {
		out = "YES";
	}
	return out;
}

