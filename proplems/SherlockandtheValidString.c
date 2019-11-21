/*
 * SherlockandtheValidString.c
 *
 *  Created on: Nov 21, 2019
 *      Author: sayed
 */
static int maxArrIdx(int ar_count, int *ar) {
	int max_idx = 0;
	int max = ar[0] ;
	for (int i = 1; i < ar_count; i++)
	{
		if (ar[i] > max) {
			max = ar[i];
			max_idx = i;
		}
	}
	return max_idx;
}
static int minArrIdx(int ar_count, int *ar) {
	int min_idx = 0;
	int min = ar[0] ;
	for (int i = 1; i < ar_count; i++)
	{
		if (ar[i] < min) {
			min = ar[i];
			min_idx = i;
		}
	}
	return min_idx;
}
int getkey(int len, int *arr) {
	for (int i = 0; i < len; i++) {
		if (arr[i] !=0) {
			return arr[i] ;
		}
	}
	return 0 ;
}
int charApperance(char key, char *str) {
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
void FrequencyCharacterArr(char *s, int *frequencyarr) {
	char *alpha = "abbcdefghijklmnopqrstwvxyz";
	int i = 0;
	while (alpha[i] != '\0') {
		frequencyarr[i] = charApperance(alpha[i], s);
		i++;
	}
	//printarr(frequencyarr,26);
}
void ApperanceCharacterArr(char *s, int *frequencyarr,int*resultcount) {
	char *alpha = "abcdefghijklmnopqrstwvuxyz";
	int i = 0;
	int j = 0 ;
	int counter ;
	while (alpha[i] != '\0') {
		counter= charApperance(alpha[i], s);
		if (counter !=0 ){
			frequencyarr[j] = counter ;
			j++;
		}
		i++;
	}
	*resultcount = j ;
}
int checkSimilarity(int len , int *arr){
	int similar = 1 ;
	int key = getkey(len , arr);
	for(int i = 1 ; i <len ; i++){
		if ((arr[i] != key )&&(arr[i] != 0 )){
			similar = 0 ;
			break ;
		}
	}
	return similar ;
}

char* isValid(char *s) {
	char *valid = "NO";
	int FreqArr[26] = { };
	static int length ;
	FrequencyCharacterArr(s,FreqArr);
	ApperanceCharacterArr(s, FreqArr,&length);
	int similiar = checkSimilarity(length , FreqArr);
	if (similiar)
	{
		valid = "YES" ;
	}
	else
	{
		int max_idx = maxArrIdx(length,FreqArr);
		FreqArr[max_idx]--;
		similiar = checkSimilarity(length , FreqArr);
		if (similiar)
		{
			valid = "YES" ;
		}
		else
		{
			FreqArr[max_idx]++;
			int min_idx = minArrIdx(length,FreqArr);
			FreqArr[min_idx]--;
			similiar = checkSimilarity(length , FreqArr);
					if (similiar)
					{
						valid = "YES" ;
					}
		}
	}

return valid ;
}
