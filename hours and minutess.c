#include<stdio.h>
void main()
{
	int m;
	printf("minutes = ");
	scanf("%d", &m);
	printf("%dhours and %dminutes",m/60,m%60);
}
