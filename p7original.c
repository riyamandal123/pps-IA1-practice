#include<stdio.h>
struct _complex
{
  float real,imaginary;
};

typedef struct _complex complex;
struct _complex a;
complex a;

void input(complex *pc1,complex *pc2)
{
  printf("enter the complex numbers\n");
  scanf("%f %f",&pc1->real,&pc2->imaginary);
}
complex add_complex(complex c1,complex c2)
{
  complex c3;
  c3.real=c1.real+c2.real;
  c3.imaginary=c1.imaginary+c2.imaginary;
  return c3;
}
void output(complex c1,complex c2,complex c3)
{
  printf("(%f+i%f) + (%f+i%f) is (%f+i%f)\n",c1.real,c1.imaginary,c2.real,c2.imaginary,c3.real,c3.imaginary);
}
int main()
{
  complex c1,c2,c3;
input(&c1,&c2);
c3=add_complex(c1,c2);
output(c1,c2,c3);
return 0;

}

