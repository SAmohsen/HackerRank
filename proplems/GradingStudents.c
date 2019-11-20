/*
 * GradingStudents.c
 *
 *  Created on: Nov 20, 2019
 *      Author: sayed
 */

int* gradingStudents(int grades_count, int* grades, int* result_count) {
	*result_count = grades_count;
static int finalgrades[60];

for (int i = 0 ; i < grades_count ;  i++){

	if (((5- (grades[i]%5)) < 3 ) && (grades[i]>=38)){
		finalgrades[i]=grades[i]+(5- (grades[i]%5)) ;
	}
	else {
		finalgrades[i]= grades[i];
	}
}

return finalgrades;
}
