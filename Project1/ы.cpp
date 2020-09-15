#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int
main()
{
	int a, b, c;
	printf("Input a ");
	scanf("%d", &a);
	printf("Input b ");
	scanf("%d", &b);
	printf("Input c ");
	scanf("%d", &c);
	printf("(%d - %d) + (%d - %d) = %d", b, c, c, a, (b - c) + (c - a));
	return 0;
}

