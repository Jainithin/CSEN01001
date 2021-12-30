#include <stdio.h>
int main () {
    int n,i,f,s,p;
    printf("the number of terms:");
    scanf ("%d",&n);
    f=0;
    s=1;
   printf("%d",f);
    printf("%d",s);    
    for  (i=4;i<n;i++)
    {
     p=f+s ;
     printf("%d",p);
     f=s;
     s=p;
    }
 return 0;
 
}