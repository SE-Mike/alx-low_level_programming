/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int n;

	for (decimal = 0, n = 0; b[n] != '\0'; n++)
	{
		if (b[n] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[n] == '0')
			decimal <<= 1;
		else if (b[n] != '0' && b[n] != '1')
			return (0);
	}

	return (decimal);
}
