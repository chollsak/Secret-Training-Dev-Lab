#include <stdio.h>

int main()
{
	int a,b;
  scanf("%d %d", &a,&b);
  
  if(a > b){
    printf("MAX : %d\n", a);
    printf("MIN : %d", b);
  }else if (b > a){
    printf("MAX : %d\n", b);
    printf("MIN : %d", a);
  }
  
	return 0;
}
