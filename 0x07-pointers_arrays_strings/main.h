#ifndef MAIN_H
#define MAIN_H

/**
 *  File: main.h-header file for the task 0x07
 *  Auth: Garuba Abdulrasheed
 *  Desc: Header file containing prototypes for all functions
 *  @c :for putchar
 *  @c:
 *  _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * O
 * used in the 0x07-pointers_arrays_strings directory.
 * @_putchar - return (0);
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
