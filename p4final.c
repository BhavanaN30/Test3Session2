#include<stdio.h>

int main()
{
  float a[100],sum=0,x;
  int n,i;

  printf("\nEnter degree of the polynomial x::");
  scanf("%d",&n);
  printf("\nEnter coefficient's of the polynomial x::");
  for(i=n;i>=0;i--)
    {
      printf("\nEnter coefficient of [X^%d]::",i);
      scanf("%f",&a[i]);
    }
  printf("\nEnter the value of X::");
  scanf("%f",&x);
  
  for(i=n;i>0;i--)
    {
      sum=(sum+a[i]*x);
    }
  sum=sum+a[0];

  printf("\nvalue of the polynomial is=[%f]\n",sum);
  
  return 0;
  }
