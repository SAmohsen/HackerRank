/*
 * HighestValuePalindrome.c
 *
 *  Created on: Nov 23, 2019
 *      Author: sayed
 *
 *
 *Failed in large test cases 10 16 24 25 28 29
 */
#include <stdio.h>
#include <stdlib.h>
static void copystring(char *str1, char *str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}
static int toPalindromeChanges(char *str, int length) {
	int changes = 0;
	int  left = 0;
	int right = length - 1;
	  //FILE * fp;
	   /* open the file for writing*/
	 //  fp = fopen ("c:\\tmp\\1.txt","w");
	while ( left < right) {
		// fprintf (fp,"%c===========%c------------>%d\n",str[left],str[right] ,changes);
		if (str[right] != str[left]) {
			changes++;
		}
		left++;
		right--;
	}
	  // fclose (fp);

	return changes;
}
static void makestringnotvalid(char *str) {
	str[0] = '-';
	str[1] = '1';
	str[2] = '\0';

}
static int makePalindromeString(char *str, char *newstr, int length,
		int number_of_trials) {
	int right = 0;
	int left = length - 1;
	int i = 0;
	int j = left;
	char max = '9';
	while (right <= left) {
		if (str[right] == str[left]) {
			newstr[j] = str[left];
			newstr[i] = str[right];
		} else {
			if (number_of_trials == 0) {
				makestringnotvalid(newstr);
				break;
			} else if (number_of_trials >= 2) {

				newstr[j] = max;
				newstr[i] = max;
				number_of_trials = number_of_trials - 2;
			} else {

				if (str[left] >= str[right]) {
					newstr[j] = str[left];
					newstr[i] = str[left];
				} else {
					newstr[j] = str[right];
					newstr[i] = str[right];
				}
				number_of_trials--;
			}
		}
		i++;
		j--;
		right++;
		left--;
	}

	newstr[length] = '\0';
	return number_of_trials;
}
void makeAhigherorderPalindromeString(char *str, int length, int trials_left) {
	char max = '9';
	int left = 0;
	int right = length - 1;
	int middle = (left + right) / 2;
	while (left <= right) {
		if (trials_left % 2 == 0) {
			if ((str[left] == str[right]) && (str[left] != max)) {
				str[left] = max;
				str[right] = max;
				trials_left = trials_left - 2;

			}

		} else {
			str[middle] = max;
			trials_left--;
		}
		if (trials_left == 0) {

			break;
		}

		left++;
		right--;
	}
	str[length] = '\0';

}

char* highestValuePalindrome(char *s, int n, int k) {
	//static char newstr[100000];
	char * newstr = (char *)malloc(sizeof(char)*n);
	int changes = toPalindromeChanges(s, n);

	if (k > 0) {
		if (changes == 0) {
			copystring(newstr, s);
			makeAhigherorderPalindromeString(newstr, n, k);
		}

		else if (changes > k) {
			makestringnotvalid(newstr);
		}

		else {
			int trials_left = makePalindromeString(s, newstr, n, k);
		//	printf("trials =  %d \n changes = %d \n trialsleft = %d \n" , k,changes,trials_left);
			if (trials_left > 0) {
				/*changes = toPalindromeChanges(s, n);
				printf("trials =  %d \n changes = %d \n trialsleft = %d \n" , k,changes,trials_left);*/
				makeAhigherorderPalindromeString(newstr, n, trials_left);
			}

		}

	} else {
		if (changes == 0) {
			copystring(newstr, s);
		} else {
			makestringnotvalid(newstr);
		}

	}

	//return "h";
	return newstr;
}
