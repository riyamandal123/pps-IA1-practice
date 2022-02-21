#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the number \n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float guess ,next;
  guess = n/2;
	next = n/guess;
	while (fabs(next - guess) > 0.000001)
	{
		guess = next;
		next = 0.5*(guess + next);
	}
	return next;

}
void output(float n,float sqrt_result)
{
  printf("the square root of %f is: %f\n",n,sqrt_result);
}
int main()
{
  int n,sqrt_result;
  n=input();
  sqrt_result=my_sqrt(n);
  output(n,sqrt_result);
  return 0;

}