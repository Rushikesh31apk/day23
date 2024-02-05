#include<stdio.h>
void kruskal();
int c[10][10],n;
int main()
{
	int i,j;
	printf("Enter the no.of vertices:");
	scanf("%d",&n);
	printf("Enter the weight in Matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\nEnter weight: %d-->%d vertices: ",i,j);
			scanf("%d",&c[i][j]);
		}
	}
	kruskal();
}
void kruskal()
{
	int i,j,a,b,u,v,min;
	int no=0,mincost=0;
	int parent[10]={0};
	
	while(no != n-1)
	{
		min=999;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(c[i][j]<min)
				{
					min=c[i][j];
					u=a=i;
					v=b=j;
				}
			}
		}	
		while(parent[u] !=0){
			u=parent[u];
		}
		while(parent[v] !=0){
			v=parent[v];
		}
		if(u!=v)
		{
			printf("\nEdge: %d--->%d =% d",a,b,min);
			parent[v]=u;
			no++;
			mincost +=min;
		}
		c[a][b]=c[b][a]=999;
	}
	printf("\nMincost=%d",mincost);
}

//output------------------->

/*
Enter the no.of vertices:7
Enter the weight in Matrix:

Enter weight: 1-->1 vertices: 999

Enter weight: 1-->2 vertices: 5

Enter weight: 1-->3 vertices: 3

Enter weight: 1-->4 vertices: 999

Enter weight: 1-->5 vertices: 999

Enter weight: 1-->6 vertices: 999

Enter weight: 1-->7 vertices: 999

Enter weight: 2-->1 vertices: 5

Enter weight: 2-->2 vertices: 999

Enter weight: 2-->3 vertices: 4

Enter weight: 2-->4 vertices: 6

Enter weight: 2-->5 vertices: 2

Enter weight: 2-->6 vertices: 999

Enter weight: 2-->7 vertices: 999

Enter weight: 3-->1 vertices: 3

Enter weight: 3-->2 vertices: 4

Enter weight: 3-->3 vertices: 999

Enter weight: 3-->4 vertices: 5

Enter weight: 3-->5 vertices: 999

Enter weight: 3-->6 vertices: 6

Enter weight: 3-->7 vertices: 999

Enter weight: 4-->1 vertices: 999

Enter weight: 4-->2 vertices: 6

Enter weight: 4-->3 vertices: 5

Enter weight: 4-->4 vertices: 999

Enter weight: 4-->5 vertices: 8

Enter weight: 4-->6 vertices: 6

Enter weight: 4-->7 vertices: 999

Enter weight: 5-->1 vertices: 999

Enter weight: 5-->2 vertices: 2

Enter weight: 5-->3 vertices: 999

Enter weight: 5-->4 vertices: 8

Enter weight: 5-->5 vertices: 999

Enter weight: 5-->6 vertices: 3

Enter weight: 5-->7 vertices: 5

Enter weight: 6-->1 vertices: 999

Enter weight: 6-->2 vertices: 999

Enter weight: 6-->3 vertices: 6

Enter weight: 6-->4 vertices: 6

Enter weight: 6-->5 vertices: 3

Enter weight: 6-->6 vertices: 999

Enter weight: 6-->7 vertices: 4

Enter weight: 7-->1 vertices: 999

Enter weight: 7-->2 vertices: 999

Enter weight: 7-->3 vertices: 999

Enter weight: 7-->4 vertices: 999

Enter weight: 7-->5 vertices: 5

Enter weight: 7-->6 vertices: 4

Enter weight: 7-->7 vertices: 999

Edge: 2--->5 = 2
Edge: 1--->3 = 3
Edge: 5--->6 = 3
Edge: 2--->3 = 4
Edge: 6--->7 = 4
Edge: 3--->4 = 5
Mincost=21                                                  ccccccccc
*/
