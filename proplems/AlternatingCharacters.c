/*
 * AlternatingCharacters.c
 *
 *  Created on: Nov 23, 2019
 *      Author: sayed
 */


int alternatingCharacters(char* s) {
    int i = 0 ;
    int counter = 0 ;
    while (s[i+1]!='\0'){
    if (s[i]==s[i+1])
    {
        counter++ ;
    }


    i++ ;
    }
    return counter ;
}

