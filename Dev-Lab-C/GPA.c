
int main()
{	
 	float arr[10];
  for(int i = 0; i < 5; i++){
    scanf("%f", &arr[i]);
  }
	
printf("THAI = %.1f\n", arr[0]);
printf("MATH = %.1f\n", arr[1]);
printf("ENGLISH = %.1f\n", arr[2]);
printf("SCIENCE = %.1f\n", arr[3]);
printf("SPORT = %.1f\n---\n", arr[4]);
printf("GPA = %.1f", (arr[0] + arr[1]+ arr[3]+ arr[4]+ arr[2])/5);
	return 0;
}