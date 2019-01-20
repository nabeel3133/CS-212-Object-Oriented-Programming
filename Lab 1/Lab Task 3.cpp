/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg no: 122937
*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

char substring(char ptr1[500], char ptr2[500]){
	int m = 0;
	for (int i = 0; i < 500; i++)
	{
		if (ptr1[i] == ptr2[i])
		{
			m = 1;
		}
		if (m == 1){
			return(1);
		}
		else
			return 0;
	}


}
char(*stringTell)(char[500], char[500]);
int main()
{
	char string1[500], string2[500];
	printf("Enter string 1: ");
	scanf("%s", string1);
	printf("Enter string 2: ");
	scanf("%s", string2);
	stringTell = &substring;
	int ans = stringTell(string1, string2);

	if (ans == 1)
	{
		printf("String 2 is a part of String 1");
	}
	else
	{
		printf("String 2 is not a part of String 1");
	}
	getchar();
	getchar();
	return 0;
}