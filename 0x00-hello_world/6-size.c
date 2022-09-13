#include <stdio.h>
/**
 * main - driver function
 * Return: 0
 */
int main()  
{ 
char theChar;
int theInt;
long int longInt;
long long int longLongInt;
float thefloat;
printf("Size of a char: %d byte(s)\n", sizeof(theChar));
printf("Size of an int: %d byte(s)\n", sizeof(theInt));	 
printf("Size of a long int: %ld byte(s)\n", sizeof(longInt));
printf("Size of a long long int: %d byte(s)\n", sizeof(longLongInt));	 
printf("Size of a float: %d byte(s)\n", sizeof(thefloat));
return (0);  
}
