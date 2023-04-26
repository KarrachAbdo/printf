#include "main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len_1 = 0, len_2 = 0;

	
	/* ===========> %s <=========== */
	printf("----------------------\n");
	printf("---> STRING CASES <---\n");
	printf("----------------------\n");
	len_1 = _printf("s%s\n");
	len_1 = _printf("%cc\n");
	len_2 = _printf("bin:%o\n", 8);
	len_2 = _printf("bin len:     %d\n",len_2);
	_printf("Expected length:    [%d]\n", -23);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s$\n", "");
	len_2 = _printf("Current output:     %s$\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = _printf("Expected output:    %s\n", "karrach");
	len_2 = _printf("Current output:     %s$\n", NULL);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/*len_1 = _printf("Expected output:    %s\n", "hello, world");*/
	len_2 = _printf("Current output:     %s\n", "hello, world");
	len_2 = _printf("Expected length: toto    [%c]\n",'H');
	len_2 = _printf("Expected length: titi    [% ]\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	/* ===========> % <=========== */
	

	return (0);
} 
