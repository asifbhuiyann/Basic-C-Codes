#include <stdio.h>
int main()
{
	int n;
	int *ptr;
	printf("ENTER THE VALUE :\n");
	scanf("%d",&n);
	ptr = &n;
	if(n %2 == 0)
		printf("pointer: Even");
	else
		printf("pointer:Odd\n");
	return 0;
}
