#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of the all its paramters
 * @n: The number of the paramterspassed to the function.
 * @...: Aariable number of paramters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 * Otherwise - the sum of the all paramters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
