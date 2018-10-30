#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];
	int count = 0;
	do {
	puts("输入牌名");
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0]){
		case 'Q':
	    case 'K':
	    case 'J':
	        val = 10;
	    	printf ("FXR nb\n");
	    break;	
	    case 'A':
	    	val = 11;
	    	printf ("dashark\n"); 
	    	break;
	    case 'X':
	    	continue;
	    default:
		val = atoi (card_name);
	if (10<val)
	printf ("error");
	continue;	
}
if  ((val>2) && (val<7)){
	count++;
} else if (val == 10){
	count--;
}
printf ("当前计数： %i\n", count);
} while (card_name[0] = 'X');
  return 0;
}

