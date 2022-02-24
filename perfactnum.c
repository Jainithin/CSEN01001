#include<stdio.h>
int main (){
  int n,R=0,r,i,x;
  printf("enter a number=");
  scanf("%d",&n);
  x=n-1;
  for (i=1;i<=x;i++)
  {
    r=n%i;
    if (r==0)
    {
      R+=i;
    }
  
  }
  if(R==n)
  printf("perfect number");
  else
  printf("not a perfect number");

}