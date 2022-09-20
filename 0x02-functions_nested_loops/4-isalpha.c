#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if a character is in alphabetic
 * @character : int character to test
 * Return: 0 if false 1 if true
 */
int _isalpha(int character)
{
return ((character >= 65 && character <= 90) \
        (character >= 97 && character <= 122))
}
