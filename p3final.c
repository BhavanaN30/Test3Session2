#include<stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("enter a number n\n");
  scanf("%d",&n);
  printf("enter a number r\n");
  scanf("%d",&r);
}
int fact(int n)
{
  int i,f=1;
  for(i=1;i<=n;i++)
    {
      f=f*i;
    }
  return f;
}
void find_ncr(int n,int r,int *ncr)
{
  *ncr=fact(n)/fact(r)*fact(n-r);
}
void output(int n,int r,int ncr)
{
  printf("value of %dC%d is %d\n",n,r,ncr);
}
int main()
{
 int result,n,r,ncr;
 input_n_and_r(&n,&r);
 find_ncr(n,r,&ncr);
 output(n,r,ncr);
 return 0;
}
