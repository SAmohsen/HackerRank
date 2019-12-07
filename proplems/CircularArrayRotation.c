/*
 * CircularArrayRotation.c
 *
 *  Created on: Dec 7, 2019
 *      Author: sayed
 */

static void RotateArrRight(int *arr, int len) {
//pickup last element
	int num = arr[len - 1];
	//shift all arr positions
	for (int i = len - 2; i >= 0; i--) {
		arr[i + 1] = arr[i];
	}
	arr[0] = num;
}
static void swapArrLocs(int *arr , int arrlen , int *index_arr,int *newArr){
	int index ;
	for (int i = 0 ; i < arrlen ;i++){
		index = index_arr[i];
		newArr[index]=arr[i];
	}
}
//error : time limits
int* circularArrayRotation_v0(int a_count, int *a, int k, int queries_count,int *queries, int *result_count) {
	static int results[100000];
	int index;
	for (int i = 0; i < k; i++) {
		RotateArrRight(a, a_count);
	}
	for (int i = 0; i < queries_count; i++) {
		index = queries[i];
		results[i] = a[index];

	}
	*result_count = queries_count;
	return results;
}
//error : time limits
int* circularArrayRotation_v1(int a_count, int *a, int k, int queries_count,int *queries, int *result_count) {
	static int results[100000];
	int index;
	if (k >= a_count) {
		k = k % a_count;
	} else {
		//no action required
	}
	for (int i = 0; i < k; i++) {
		RotateArrRight(a, a_count);
	}
	for (int i = 0; i < queries_count; i++) {
		index = queries[i];
		results[i] = a[index];

	}
	*result_count = queries_count;
	return results;
}
//V2 : passed all tests
int* circularArrayRotation(int a_count, int *a, int k, int queries_count,int *queries, int *result_count) {
	int indx_arr[a_count];
	int newarr[a_count];
	static int results[100000];
	int index;
	if (k >= a_count) {
		k = k % a_count;
	} else {
		//no action required
	}
	// calculate arr new locations after specific  number of rotations

	for (int i = 0; i < a_count; i++) {
		indx_arr[i]=(i+k)%a_count ;
	}
	swapArrLocs(a,a_count,indx_arr,newarr);
	for (int i = 0; i < queries_count; i++) {
		index = queries[i];
		results[i] = newarr[index];
	}
	*result_count = queries_count;
	return results;
}
