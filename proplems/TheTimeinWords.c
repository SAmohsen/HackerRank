/*
 * TheTimeinWords.c
 *
 *  Created on: Nov 25, 2019
 *      Author: sayed
 */
	void Minutevsminutes(int m,char *str,int startidx ,int *endidx){
		char *out ;
		if (m==1){
			out = " minute";
		}
		else if ((m==30)||(m==15)||(m==45))
		{
			out = "";
		}
		else {
			out = " minutes";
		}
		int i = 0 ;
		while (out[i]!='\0'){
		str[startidx]=out[i];
		startidx++;
			i++;
		}
		*endidx = startidx;
	}
	void clockMinute(int m,char *str,int startidx ,int *endidx){
		char *minute;
		if (m>30){
			m = 60-m;
		}
		switch (m) {
		case 1:minute = "one";
			break;
		case 2:minute = "two";
			break;
		case 3:minute = "three";
			break;
		case 4:minute = "four";
			break;
		case 5:minute = "five";
			break;
		case 6:minute = "six";
			break;
		case 7:minute = "seven";
			break;
		case 8:minute = "eight";
			break;
		case 9:minute = "nine";
			break;
		case 10:minute = "ten";
			break;
		case 11:minute = "eleven";
			break;
		case 12:minute = "twelve";
			break;
		case 13:minute = "thirteen";
			break;
		case 14:minute = "fourteen";
			break;
		case 15:minute = "quarter";
			break;
		case 16:minute = "sixteen";
			break;
		case 17:minute = "seventeen";
			break;
		case 18:minute = "eighteen";
			break;
		case 19:minute = "nineteen";
			break;
		case 20:minute = "twenty";
			break;
		case 21:minute = "twenty one";
			break;
		case 22:minute = "twenty two";
			break;
		case 23:minute = "twenty three";
			break;
		case 24:minute = "twenty four";
			break;
		case 25:minute = "twenty five";
			break;
		case 26:minute = "twenty six";
			break;
		case 27:minute = "twenty seven";
			break;
		case 28:minute = "twenty eight";
			break;
		case 29:minute = "twenty nine";
			break;
		case 30:minute = "half";
			break;

		}
		int i = 0 ;
		while (minute[i]!='\0'){
		str[startidx]=minute[i];
		startidx++;
			i++;
		}
		*endidx = startidx;
	}
	void clockrelation(int m ,char *str,int startidx ,int *endidx){
		char *relation ;
		if (m == 0) {
			relation = " o' clock ";
		} else if (m > 30) {
			relation = " to ";
		} else {
			relation = " past ";

		}
		int i = 0 ;
		while (relation[i]!='\0'){
		str[startidx]=relation[i];
		startidx++;
			i++;
		}
		*endidx = startidx;
	}
	void clockHour(int h,char *str,int startidx ,int *endidx) {
		char *hour;
		switch (h) {
		case 1:hour = "one";
			break;
		case 2:hour = "two";
			break;
		case 3:hour = "three";
			break;
		case 4:hour = "four";
			break;
		case 5:hour = "five";
			break;
		case 6:hour = "six";
			break;
		case 7:hour = "seven";
			break;
		case 8:hour = "eight";
			break;
		case 9:hour = "nine";
			break;
		case 10:hour = "ten";
			break;
		case 11:hour = "eleven";
			break;
		case 12:hour = "twelve";
			break;
		}
		int i = 0 ;
		while (hour[i]!='\0'){
		str[startidx]=hour[i];
		startidx++;
			i++;
		}
		*endidx = startidx;
	}
	char* timeInWords(int h, int m) {
		static char clockstr[100];
		int end1 ; int end2 ; int end3; int end4 ;
		if (m==0){
			clockHour(h,clockstr,0,&end1);
			clockrelation(m,clockstr,end1,&end2);
			clockstr[end2]='\0';
		}
		else
		{
			if (m>30){
				h = h+1;
			}
			clockMinute(m,clockstr,0,&end1);;
			Minutevsminutes(m,clockstr,end1,&end2);
			clockrelation(m,clockstr,end2,&end3);
			clockHour(h,clockstr,end3,&end4);
			clockstr[end4]='\0';

		}

		return clockstr;
	}
