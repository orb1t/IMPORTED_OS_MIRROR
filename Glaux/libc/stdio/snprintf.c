#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int snprintf (char* buf, size_t size, const char* format, ...)
{
	va_list args;
	va_start (args, format);
	int result = vsnprintf (buf, size, format, args);
	va_end (args);
	return result;
}
