/*
 * binarygap.c
 *
 *  Created on: Nov 30, 2019
 *      Author: sayed
 */

#include <math.h>


int binarygap(int num){
int counter = 0 ;
int max = 0 ;
int length =ceil(log(num)/log(2));
int result ;
for (int i = 0 ; i <length ;i++){
	result = 1 <<i ;
	if ((result & num)==0)
	{
		counter++;
	}
	else
	{
		if (counter>=max)
		{
		max = counter ;
		}
		counter = 0 ;

	}
}
return max ;
}
