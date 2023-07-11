#ifndef main_h
#define main_h

/* builtins */
#include <stddef.h>

unsigned int binary_to_uint(const char *b);
size_t _power2(unsigned int exp);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * union Endianess - a union set for the
 * purpose of just checking for endianness
 *
 * @i: integer member
 * @c: array of chars
 */
typedef union Endianess
{
	int i;
	unsigned char c[4];
} Endianess_check;

int get_endianness(void);
#endif /* end of main_h */
