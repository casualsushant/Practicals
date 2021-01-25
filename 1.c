#include <stdio.h>
int main() {
	int sec, h, m, s;
	printf("Enter the number of seconds: ");
	scanf("%d", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf("The given time is %d hour/s %d minute/s and %d second/s",h,m,s);
	
	return 0;
}