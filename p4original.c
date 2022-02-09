#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  { 
    printf("enter the inputs\n");
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum)
{
  int i;
  for(int i=0;i<n-1;i++)
  printf("%d+",a[i]);
  printf("sum of input %d is %d",n,sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  output(n,a,sum);
  return 0;
}