#include <string.h>

int strcmp (const char* s1, const char* s2)
{
	if (s1 == s2)
	{
		return 0;
	}
	size_t i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return 0;
		}
		i += 1;
	}
	return (unsigned char) s1[i] > (unsigned char) s2[i] ? 1 : -1;
}
