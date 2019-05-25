#include <stdio.h>
int add(int,int);
int sub(int,int);
int multiply(int,int);
int div(int,int);

int main ()
{
  int a,b,first,second,op;
  printf ("enter first number");
  scanf ("%d",&first);
  printf ("enter second number");
  scanf ("%d",&second);
  printf ("enter the operator like 1 for add and so on");
  scanf ("%d",&op);
  //printf ("%d\n",first);
  // printf ("%d\n",second);
  switch (op)
  {
      case 1: printf ("The sum is %d",(add(a,b)));
      break;
      case 2: printf ("The difference is %d",(sub(a,b)));
      break;
      case 3: printf ("The product is %d",(multiply(a,b)));
      break;
      case 4: printf ("The quotient is %d",(div(a,b)));
      break;
   }
   return 0;
}
int add (int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub (int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int multiply (int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int div (int a,int b)
{
    int c;
    c=a/b;
    return c;
}
