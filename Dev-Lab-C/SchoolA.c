#include <stdio.h>

int main()
{
  	int score;
  scanf("%d", &score);
  
    	if(score < 60){
     	printf("F");
    }else if(score >= 60&& score <= 64 ){
      printf("D");
    }else if(score >= 65 && score <= 69){
      printf("D+");
    }else if(score >= 70 && score <= 74){
      printf("C");
    }else if(score >= 75 && score <= 79){
      printf("C+");
     }else if(score >= 80 && score <= 84){
      printf("B");
    }else if(score >= 85 && score <= 89){
      printf("B+");        
    }else{
      printf("A");
    }
	return 0;
}
