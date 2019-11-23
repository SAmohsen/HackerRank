/*
 * Sock Merchant.c
 *
 *  Created on: Nov 23, 2019
 *      Author: sayed
 */


void makeSwap(int *a, int *b) {

    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int sockMerchant(int n, int ar_count, int* ar) {
    /* sort array*/
    int min_idx ;
    int i ;
    int j ;
    int temp ;
    for (i = 0 ; i < ar_count-1 ; i++){
        min_idx = i ;
        for (j=i+1 ; j<=ar_count-1 ; j++){
            if (ar[j]<=ar[min_idx]){
                min_idx = j ;
            }
        }
        makeSwap(&ar[min_idx], &ar[i]);
    }

    /* count number of pair socks */
    int count = 1 ; int pair = 0 ;
    for (i= 0 ; i <ar_count ; i++){
        if (ar[i] == ar[i+1]){
            count++;
        }
        else{
            pair = pair + (count/2) ;
            count = 1 ;
        }
    }
    return pair ;
}

