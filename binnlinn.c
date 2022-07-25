#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int bin_srch(int [],int,int,int);
int lin_srch(int [],int,int,int);
void bub_sort(int[],int);
int n,a[10000];
int main()
{
 int ch,key,search_status,temp;
 clock_t end,start;
unsigned long int i, j;

 while(1)
 {
  printf("\n1: Binary search\t 2: Linear search\t 3: Exit\n");
  printf("\nEnter your choice:\t");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
      n=1000;
	  while(n<=5000)
	  {
	   for(i=0;i<n;i++)
	   {
	   //a[i]=random(1000);
	   a[i]=i;  //Insering numbers in Ascending order
	   }
	   key=a[n-1]; //Last element of the aray
	   start=clock();
           //bub_sort(a,n); //Sorting numbers in Ascending order using Bubble sort
	   search_status=bin_srch(a,0,n-1,key);
	   if(search_status==-1)
              printf("\nKey Not Found");
           else
              printf("\n Key found at position %d",search_status);
           //Dummy loop to create delay
	   for(j=0;j<500000;j++){ temp=38/600;}
	   end=clock();
	   printf("\nTime for n=%d is %f Secs",n,(((double)(end-start))/CLOCKS_PER_SEC));
	   n=n+1000;
	  }
	  break;
   case	2:
          n=1000;
	  while(n<=5000)
	  {
           for(i=0;i<n;i++)
	   {
	    //a[i]=random(10000);
	    a[i]=i;
	   }
	   key=a[n-1]; //Last element of the aray
	   start=clock();
	   search_status=lin_srch(a,0,n-1,key);
	   if(search_status==-1)
              printf("\nKey Not Found");
           else
              printf("\n Key found at position %d",search_status);
           //Dummy loop to create delay
	 for(j=0;j<500000;j++){ temp=38/600;}
	   end=clock();
	   printf("\nTime for n=%d is %f Secs",n,(((double)(end-start))/CLOCKS_PER_SEC));
	   n=n+1000;
	  }
	  break;
   default:
          exit(0);
  }
  getchar();
 }
}
void bub_sort(int a[],int n)
{
 int i,j,temp;
 for(i=0;i<=n-2;i++)
 {
  for(j=0;j<=n-2-i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
}
int bin_srch(int a[],int low,int high,int key)
{
 int mid;
 if(low>high)
 {
  return -1;
 }
 mid=(low+high)/2;
 if(key==a[mid])
 {
  return mid;
 }
 if(key<a[mid])
 {
  return bin_srch(a,low,mid-1,key);
 }
 else
 {
  return bin_srch(a,mid+1,high,key);
 }
}

int lin_srch(int a[],int i,int high,int key)
{
 if(i>high)
 {
  return -1;
 }
 if(key==a[i])
 {
  return i;
 }
 else
 {
  return lin_srch(a,i+1,high,key);
 }
}
