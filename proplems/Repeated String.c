/*
 * Repeated String.c
 *
 *  Created on: Nov 23, 2019
 *      Author: sayed
 */



long repeatedString(char* s, long n) {
//count number of a's per one string
    int i = 0 ;
    long count_per_Str = 0 ;
    long total_count = 0 ;
    while (s[i]!='\0'){
        if (s[i]=='a'){
            count_per_Str++ ;
        }
        i++ ;
    }
//see how many times our string fit-in
long fit_in = n/i ;
long ln = n - fit_in * i ;
total_count = fit_in * count_per_Str;
i= 0 ;
while (i<ln){
if (s[i]=='a'){
            total_count++ ;
        }
        i++ ;
}
return total_count ;
}
