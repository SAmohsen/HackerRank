/*
 * CommonChild.c
 *
 *  Created on: Nov 21, 2019
 *      Author: sayed
 */
/*not working */
int getstringlength(char *str) {
	int counter = 0;
	while (str[counter] != 0) {
		counter++;
	}
	return counter;
}

int searchsubArrayChar(char key, char *s, int start_idx) {
	int found = -1;
	int i = start_idx;
	while (s[i] != '\0') {
	printf("%c========= %c\n" , key, s[i]);
		if (key == s[i]) {
			found = i;
			break;
		}
		i++;
	}
	return found;
}
int commonChild(char *s1, char *s2) {
	int counter = 0;
	int i = 0;
	int found = 0;
	int cursor = 0;
	char child[getstringlength(s1)];
	int j = 0;
	int max_childLength = -1;
	while (s1[j] != '\0') {
		i = j;
		counter=0;
		cursor =0 ;
		while (s1[i] != '\0') {
			found = searchsubArrayChar(s1[i], s2, cursor);
			if (found!=-1) {
				cursor = found+1;
				counter++;
			}
			i++;
		}
		if (counter ==10){
			printf("------------------------------------->%d\n",counter);
		}

		if (counter > max_childLength) {
			max_childLength = counter;
		}

		j++;
	}
	return max_childLength;
}

/*int commonChild(char *s1, char *s2) {
 static int freqArr_s1[26];
 static int freqArr_s2[26];
 FrequencyCharacterArr(s1, freqArr_s1);
 FrequencyCharacterArr(s2, freqArr_s2);
 int counter = 0;
 for (int i = 0; i < 26; i++) {
 if (freqArr_s1[i] <= freqArr_s2[i]) {
 counter += freqArr_s1[i];
 } else {
 counter += freqArr_s2[i];
 }
 }
 return counter;
 }
 static int charApperance(char key, char *str) {
 int i = 0;
 int counter = 0;
 while (str[i] != '\0') {
 if (key == str[i]) {
 counter++;
 }
 i++;
 }
 return counter;
 }
 static void FrequencyCharacterArr(char *s, int *frequencyarr) {
 char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 int i = 0;
 while (alpha[i] != '\0') {
 frequencyarr[i] = charApperance(alpha[i], s);
 i++;
 }
 }
 */
