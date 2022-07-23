#include<conio.h>
void source_removal(int n, int a[10][10])
{
	int i,j,k,u,v,top,s[10],t[10],indeg[10],sum;
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j][i];
		}
		indeg[i]=sum;
	}
	top=-1;
	for(i=0;i<n;i++)
	{
		if(indeg[i]==0)
		{
			s[++top]=i;
		}
	}
	k=0;
	while(top!=-1)
	{
		u=s[top--];
		t[k++]=u;
		for(v=0;v<n;v++)
		{
			if(a[u][v]==1)
			{
				indeg[v]=indeg[v]-1;
				if(indeg[v]==0)
					s[++top]=v;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n", t[i]);
	}
}
void main()
{
	int i,j,a[10][10],n;
	printf("Enter number of nodes\n");
	scanf("%d", &n);
	printf("Enter the adjacency matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	source_removal(n,a);
	getch();
}

