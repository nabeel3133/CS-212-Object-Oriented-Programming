/*  
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int ser(int, int, int[]);
void main()
{
	int num = 0, increment = 0;
	int  series[10];
	int x = ser(num, increment, series);
	for (int j = 0; j < 10; j++){
		printf("%d\t", series[j]);
	}
	system("pause");

}
int ser(int num, int increment, int series[]){
	int *pointer;
	pointer = series;
	printf("Enter the starting number of series: ");
	scanf("%d", &num);
	printf("\nEnter the increment : ");
	scanf("%d", &increment);
	series[0] = num;
	printf("\nIncremented series is :\n\n");
	for (int i = 1; i < 10; i++){
		num+=increment;
		*(pointer + i) = num;
	}
	
	return 0;
}