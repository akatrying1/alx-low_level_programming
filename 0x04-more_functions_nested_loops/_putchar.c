#include <unistd.h>
#include "main.h"

/**
 * putchar write the character c to stdout
 * @c: the character to print
 *
 * return : on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */

int putchar(char c)
{
return (write (1, &c, 1));
}
