ō#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define MAXINT 2000

void delay(int n){
int i;
for(i=0;i<n;i++){
}
}

void quickSort(int number[],int first,int last){
int i,j,pivot,temp;

if(first<last){
    pivot=first;
    i=first;
    j=last;

while(i<j){
    while(number[i]<=number[pivot]&&i<last){
    i++;
    }
    while(number[j]>number[pivot]&&j>first){
    j--;
    }
    if(i<j){
    temp=number[i];
    number[i]=number[j];
    number[j]=temp;
    }
}

temp=number[pivot];
number[pivot]=number[j];
number[j]=temp;
quickSort(number,first,j-1);
quickSort(number,j+1,last);

}
}



void main(){
clock_t start,end;
int i,datasize=1;
long int n=10000;
int *a;
while(datasize<=20){
    a=(int *)calloc(n,sizeof(int));
    if(a==NULL){
    printf("Insufficiant Memory");
    exit(0);
    }
    for(i=0;i<=n-1;i++){
    a[i]=rand()%MAXINT;
    }
    start=clock();
    quickSort(a,0,n-1);
    end=clock();
    free(a);
    if((end-start)!=0){
     printf("\n%d\t%f",n,(double)(end-start)/CLK_TCK);
     datasize++;
    }
    n+=10000;
}
return;
}
