//2022.12.4 
//1
/*a+b*/
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf_s("%d%d", &a, &b) != EOF) {
		printf("%d", a + b);
	}
	return 0;
}

