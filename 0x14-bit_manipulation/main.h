#ifndef MAIN_H
#define MAIN_H

/*
 * File: alx
 * AUth: Brennan D Baraban
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x13-bit_manipulation directory.
 */

int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_bit(unsigned long int n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
int _putchar(char c);

#endif /* MAIN_H */
