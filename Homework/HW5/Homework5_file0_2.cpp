/*Homework 2*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {
	int i;
	FILE* myFile;
	double price[2] = { 139.25,19.03 };
	const char* description[2] = { "glove","CD" };
	
	/* Write the product data stored in the description array and price
		array to the output file */
	
	myFile = fopen("price.txt", "w");
	if (myFile == NULL)
		printf("\nFile Coulde Not Be Opened");
	else {
		for (i = 0; i < 2; i++) {
			fprintf(myFile, "%-9s %6.2f\n", description[i], price[i]);
		}
		fclose(myFile);
	}
}