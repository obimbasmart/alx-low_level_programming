#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow -  function that splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
char **arr_str;
char *sub_string;
int h, w, w_len, i;
int word_count = word_len(str) + 1;
if (word_count == 1 || str == NULL)
{
return (NULL);
}
arr_str = malloc(sizeof(*arr_str) * word_count);
if (arr_str == NULL)
{
return (NULL);
}
h = 0;
i = 0;
while (h < word_count - 1)
{
while (str[i] != '\0')
{
if (str[i] != ' ' && i == 0)
{
w_len = count_chars(str, 0);
sub_string = get_substring(str, 0, w_len);
break;
}
else if (char_seen(str[i], str[i - 1]))
{
w_len = count_chars(str, i);
sub_string = get_substring(str, i, w_len);
break;
}
i++;
}
i++;
arr_str[h] = malloc(w_len * sizeof(**arr_str));
if (arr_str[h] == NULL)
{
free(arr_str);
return (NULL);
}
w = 0;
if (str[i] != ' ')
{
while (w < w_len - 1)
{
arr_str[h][w] = sub_string[w];
w++;
}
arr_str[h][w] = '\0';
}
else if (char_seen(str[h], str[h - 1]))
{
while (w < w_len - 1)
{
arr_str[h][w] = sub_string[w];
w++;
}
arr_str[h][w] = '\0';
}
h++;
}
arr_str[h] = NULL;
return (arr_str);
}

/**
 * char_seen -  function that tells if a character have been seen
 * @c: the character to check
 * Return: 0 or 1
 */
int char_seen(char c, char prev_char)
{
if (prev_char == ' ' && c != ' ')
{
return (1);
}
return (0);
}

/**
 * count_chars -  function that tells if a character have been seen
 * @c: the character to check
 * Return: 0 or 1
 */
int count_chars(char *str, int start)
{
int count;
count = 0;
while (str[start] != ' ')
{
count++;
start++;
}
return (count + 1);
}


/**
 * get_substring -  function gets a substring from a string
 * starting from an index
 * @str: the original string
 * @start: index to start
 * Return: pointer to substring
 */
char *get_substring(char *str, int start, int len)
{
char *substr;
int i;
substr = malloc(sizeof(char) * len);
i = 0;
while (i < len)
{
substr[i] = str[i + start];
i++;
}
return (substr);
}

/**
 * word_len - get the number of words in a string
 * @str: the string
 * words are separated by spaces
 * Return: int : number of words
 */
int word_len(char *str)
{
int word_count, i;
word_count = 0;
i = 1;
if (str[0] != ' ')
{
word_count++;
}
while (str[i] != '\0')
{
if (char_seen(str[i], str[i - 1]))
{
word_count++;
}
i++;
}
return (word_count);
}

