!<arch>
main.c/         0           0     0     644     143       `
#include "main.h"

int main(void)
{
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t - Kevin Mitnick");
	return (0);
}

_putchar.c/     0           0     0     644     70        `
#include "main.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}
