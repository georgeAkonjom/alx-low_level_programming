#include "variadic_functions.h"
/**
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, v = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		v += va_arg(ap, int);
	va_end (ap);
	return (v);
}
