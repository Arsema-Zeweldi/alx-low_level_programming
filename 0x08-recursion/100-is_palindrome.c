#include "main.h"
#include <string.h>
/**
 * check - checks for palindromes
 * @s: string
 * @c: variable to check code
 * @n: variable to check code
 * Return: int
 */
int check(char *s, int c, int n)
{
	if (c == n)
		return (1);
	if (s[c] != s[n])
		return (0);
	if (c < n + 1)
		return (check(s, c + 1, n - 1));
	return (1);
}

/**
 * is_palindrome - checks whether a word is a palindrome or not
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int d = strlen(s);

	if (d == 0)
		return (1);
	return (check(s, 0, d - 1));
}
