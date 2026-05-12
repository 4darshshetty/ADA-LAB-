#include<stdio.h>
#include<stdlib.h>
int a[10][10],t[10][10],n;
void path()
{
int i, j, k;
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if((t[i][j]) || (t[i][k]&& t[k][j]))
t[i][j] =1;
}
}
}
4. }
}
int main()
{
int i,j;
printf("Enter the no of Vertices:");
scanf("%d"
, &n);
printf("\nEnter the adjacency matrix:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
scanf("%d"
,&a[i][j]);
t[i][j]= a[i][j];
}
path();
printf("Transitive Matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%5d"
,t[i][j]);
}
printf("\n");
}
}
