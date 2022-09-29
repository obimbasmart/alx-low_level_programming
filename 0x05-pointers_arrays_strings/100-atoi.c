#include "main.h"
/**
 * _atoi - convert string to integer
 * @str : the string
 * Return: int
 */
int _atoi(char *str)
{
    return (getNumber(str) * getSign(str));
}

/**
 * getNumber - find first occurrence of number in string
 * @str : the string
 * Return: int
 */
int getNumber(char *str)

{

    unsigned int idx;

    int found_number;

    int _isnumber;

    int number;

    number = 0;

    found_number = 0;

    idx = 0;

    while (str[idx] != '\0')

    {

        if ( (str[idx] - '0') >= 0 && ((str[idx] - '0') <= 9) )

        {

            _isnumber = 1;

        }

        if (_isnumber == 1)

        {

            found_number = 1;

            number = (number * 10) + (str[idx] - '0');

        }

        else if (found_number == 1 && !_isnumber)

        {

            return (number);

        }

        idx++;

        _isnumber = 0;

    }

    return (number);



}

/**
 * getSign - get the sign of a number in a string
 * @str : the string
 * Return: int
 */
int getSign(char *str)
{

    int sign, idx;

    sign = 1;

    idx = 0;

    while (str[idx] != '\0')

    {

        if (str[idx] == 45)

        {

            sign = sign * -1;

        }

        else if (str[idx] == 43 || str[idx] == 32)

        {

            sign = sign * 1;

        }

        else if ((str[idx] - '0') >= 0 && ((str[idx] - '0') <= 9))

        {

            return sign;

        }
        idx++;

    }



    return sign;

}

