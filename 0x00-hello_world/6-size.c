#include <stdio.h>

/**

 * main: driver function

 * return: 0

 */

int main()  
{
  
  char theChar;
  
  int theInt;
  
  long int longInt;
  
  long long int longLongInt;
  
  float thefloat;
  

  
  printf("size of a char: %d byte(s)\n", sizeof(theChar));
  printf("size of a int: %d byte(s)\n", sizeof(theInt));	 
  printf("size of a long int: %ld byte(s)\n", sizeof(longInt));
  printf("size of a long long int: %d byte(s)\n", sizeof(longLongInt));	 
  printf("size of a float: %d byte(s)\n", sizeof(thefloat));

  return (0);
    
}
