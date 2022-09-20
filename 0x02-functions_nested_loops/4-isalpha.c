#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if a character is in alphabetic
 * @ch : int character to test
 * Return: 0 if false 1 if true
 */
int _isalpha(int ch)
{
return ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122));
}
