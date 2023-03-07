/**
 * _memset - Fills first @n bytes of memory area
 *           pointed by @s with a constant byte @b.
 *
 * @s: Pointer to memory area to be filled.
 * @b: the constant character to fill memory area.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while(i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
