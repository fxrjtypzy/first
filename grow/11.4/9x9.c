#include <stdio.h>
int main()
{
	int a=0;
	int b;
	while (a < 9 ){
	a = a +1;
	for (b=1;b <= a;b++ ){
	
	printf("%d*%d=%d ", a, b, a*b);
	printf("\n");}
 }
    return 0;
}
