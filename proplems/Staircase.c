/*
 * Staircase.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

#include <stdio.h>
void staircase(int n) {
int rownumber , space , window  ;
for (rownumber = 0 ; rownumber< n ; rownumber++){

	for (space=0 ; space < (n-rownumber-1) ; space++){
		printf(" ");
	}

	for (window=0 ; window<=rownumber ; window++){
		printf("#");
	}
	printf("\n");
}

}
