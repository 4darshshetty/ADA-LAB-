#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[30],count=0;
int place(int pos)
{
int i;
for(i=1;i<pos;i++)
{
return 0;
}
return 1;
}
if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos))))
void print
_
sol(int n)
{
int i,j;
count++;
printf("\n\nSolution #%d:\n"
,count);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(a[i]==j)
printf("Q\t");
else
printf("*\t");
}
printf("\n");
}
}
void queen(int n)
{
int k=1;
a[k]=0;
while(k!=0)
{
a[k]=a[k]+1;
while((a[k]<=n)&&!place(k))
a[k]++;
if(a[k]<=n)
{
if(k==n)
print
_
sol(n);
else
{ k+
+;
a[k]=0;
}
}
else
k--;
}
}
int main()
{
int i,n;
printf("Enter the number of Queens\n");
scanf("%d"
,&n);
queen(n);
printf("\nTotal solutions=%d"
,count);
}
