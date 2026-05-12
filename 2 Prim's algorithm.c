#include<stdio.h>
#include<conio.h>
int i,j,u,v,n,ne=1;
int min,mincost=0,visited[10]={0},cost[10][10];
void main()
{
printf("\n Enter the No of nodes or vertices:");
scanf("%d"
,&n);
printf("\n Enter the Cost Adjacency matrix of the given graph:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d"
,&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
printf("The edges of Minimum Cost Spanning Tree are\n");
visited[1]=1;
printf("\n");
while(ne < n)
{
for(i=1,min=999;i<=n;i++)
for(j=1;j <= n;j++)
if(cost[i][j] < min)
if(visited[i]!=0)
{
min=cost[i][j];
u=i;
v=j;
}
if(visited[u]==0 || visited[v]==0)
{
printf("%d edge (%d,%d) =%d\n"
,ne++,u,v,min);
mincost=mincost+min;
visited[v]=1;
}
cost[u][v]=cost[v][u]=999;
printf("\n\tMinimum cost = %d\n"
,mincost);
}
