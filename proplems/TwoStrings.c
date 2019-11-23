/*
 * TwoStrings.c
 *
 *  Created on: Nov 23, 2019
 *      Author: sayed
 */
static void  markCharactes (char *s , int *markArr){
    int j = 0 ;
    char key ;
    while (s[j]!='\0')
    {
        key = s[j]-97 ;
        for (int i=0 ; i<26 ; i++){
            if (key == i){
                markArr[i] = 1 ;
            }
        }
        j++ ;
    }
}

static char * oneElmentMatch(int *arr1 ,int *arr2,int length){
    char *match = "NO" ;
    for (int i = 0 ; i<length ; i++){
        if ((arr1[i]==1) && (arr2[i]==1)){
            match = "YES";
            break ;
        }

    }
return match ;
}

char* twoStrings(char* s1, char* s2){
    int alpha1[26] ={ } ;
    int alpha2[26] ={ } ;
    markCharactes(s1 , alpha1) ;
    markCharactes(s2 , alpha2) ;
    char *compare = oneElmentMatch(alpha1 , alpha2,26) ;
    return compare ;
}

/*
#define FOUND 1
#define NOT_FOUND 0
static int searchKeyString(char key, char *str) {
	int status = NOT_FOUND;
	int i = 0;
	while (str[i] != '\0') {
		if (key == str[i]) {
			status = FOUND;
			break;
		}

		i++;
	}
	return status;
}
char* twoStrings(char *s1, char *s2) {
	char *common = "NO";
	int i = 0;
	while (s1[i] != '\0') {
		if (searchKeyString(s1[i], s2)) {
			common = "YES";
			break;
		}
		i++;
	}
	return common;

}
*/
