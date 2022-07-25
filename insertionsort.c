#include<stdio.h>
#include<conio.h>
#include<time.h>
void insertionsort(int n,int a[])
{
    int i,j,val,temp;

    for(i=1; i<n; i++)
    {
    val=a[i];
    j=i-1;
    while(j>=0 && a[j]>val)
    {
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
        j--;

    }
    a[j+1]=val;
    }



}
void main()
{
    clock_t start,end;
    int a[15500],i,j,temp;

    int n=100;
    while(n<1300)
    {
        for(i=0; i<n; i++)
        {

            a[i]=n-i;
        }

        start=clock();
        insertionsort(n,a);
        for(j=0; j<500000; j++)
        {
            temp=38/600;
        }
        end=clock();
        printf("\n Time taken to sort %d numbers is %f Secs",n, (((double)(end-start))/CLOCKS_PER_SEC));
        n=n+100;
    }
}
