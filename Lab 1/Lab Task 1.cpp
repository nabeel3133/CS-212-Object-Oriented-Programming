/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg. no.: 122937 
*/
#include<stdio.h> //Standars Input/Output Library
#include<conio.h> //Console Input/Output Library
#include<time.h> //Time liberary
# include<stdlib.h> // Standard Liberary


void populate_array(int *array, int N); // this initializes an array of size N with random values.
void print_array(int *array, int N); // this function prints the entire array.
void sort(int *array, int N); //sort the elements of array
bool find(int *array, int x); //find the element in the array
void sort(int *array, int N);
bool find(int *array, int x);
void main() {
	int Array[10]; //Array Declaration
	populate_array(Array, 10);
	print_array(Array, 10);
	sort(Array, 10);
	print_array(Array, 10);
	int x;
	printf("Enter the element you want to find: \n");
	scanf_s("%d", &x);
	int result = find(Array, x);
	if (result == 1)
		printf("%d exists in the array\n",x);
	else
		printf("%d doesn't exist in the array\n", x);
}



void populate_array(int *array, int N){
	srand(time(NULL));
	for (int i = 0; i < N; i++){
		array[i] = rand() % 100;
		*(array + i) = rand() % 100;
	}
}

void print_array(int *array, int N)
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d\t", *(array + i));
		if (i % 5 == 4) printf("\n");
	}
	printf("\n");
}
void sort(int *array, int N)
{
	int i, j, temp;
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1; j++)
		{
			if (*(array + j)>*(array + j + 1))
			{
				temp = *(array + j);
				*(array + j) = *(array + j + 1);
				*(array + j + 1) = temp;
			}
		}
	}
}

bool find(int *array, int x)
{
	int i, sentinel = 101;
	for (i = 0; i < 10; i++)
	{
		if (*(array + i) == x)
			sentinel = x;
	}
	if (sentinel == 101)
		return 0;
	else
		return 1;
}

