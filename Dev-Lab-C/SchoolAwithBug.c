#include <stdio.h>

int main()
{
	int score;
  scanf("%d", &score);
  
  if(score > 100){
    printf("Error : Value must be less than or equal to 100.");
  }else if(score < 0){
    printf("Error : Value must be greater than or equal to 0.");
  }else{
    	if(score < 50){
     	printf("F");
    }else if(score >= 50 && score <= 59 ){
      printf("D");
    }else if(score >= 60 && score <= 69){
      printf("C");
    }else if(score >= 70 && score <= 79){
      printf("B");
    }else{
      printf("A");
    }
  }
  
	return 0;
}
