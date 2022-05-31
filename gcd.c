#include<conio.h>

#include <stdio.h>

int gcd(int m ,int n)
{
     if(n==0)
     {
         return m;
     }
     else
     {
         return (gcd(n,m%n));
     }
}
int main()
{
    int m,n,ans;
    printf("Enter the numbers whose gcd is to be found that:");
    scanf("%d %d",&m,&n);
    ans=gcd(m,n);
    printf("GCD  of %d and %d is %d",m,n,ans);
    return 0;

}
