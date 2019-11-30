/*
 * Larry'sArray.c
 *
 *  Created on: Nov 30, 2019
 *      Author: sayed
 *      count inversions is a better approach :"D
 */
static void printarr(int *arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
static int isArrSorted(int *arr, int length) {
	int i = 0;
	int flag = 1;
	while (i < length - 1) {
		if (arr[i] > arr[i + 1]) {
			flag = 0;
			break;
		}
		i++;
	}
	return flag;
}

static void CAB(int *arr, int start) {
	int temp1;
	int temp2;
	temp1 = arr[start];
	temp2 = arr[start + 1];
	arr[start] = arr[start + 2];
	arr[start + 1] = temp1;
	arr[start + 2] = temp2;
}
static void BCA(int *arr, int start) {
	int temp1;
	int temp2;
	temp1 = arr[start];
	temp2 = arr[start + 1];
	arr[start + 1] = arr[start + 2];
	arr[start + 2] = temp1;
	arr[start] = temp2;
}
static void larrysort(int A_count, int *A) {
	for (int i = 0; i < A_count - 2; i++) {
		printarr(A, A_count);
		if ((A[i] <= A[i + 1]) && (A[i] <= A[i + 2])) {
			//ABC --> Do Nothing
		} else if ((A[i + 1] <= A[i]) && (A[i + 1] <= A[i + 2])) {
			BCA(A, i);
		} else if ((A[i + 2] <= A[i]) && (A[i + 2] <= A[i + 1])) {
			CAB(A, i);
		} else { //no Action
		}
	}
}
char* larrysArray(int A_count, int *A) {
	char *out="NO";
	if (!(isArrSorted(A, A_count))) {
		for (int i = 0; i < A_count; i++) {
			larrysort(A_count, A);
			if (isArrSorted(A, A_count)) {
				out = "YES";
				break;
			}
		}
	}
	return out;
}
/*		max_index = maxsubArrIdx(A_count,A,i,i+2);
 min_index = minsubArrIdx(A_count,A,i,i+2);
 if (min_index > m)
 * */
