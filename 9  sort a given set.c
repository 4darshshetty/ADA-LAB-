# include <stdio.h>
# include <stdlib.h>
# include <time.h>
void selection(int arr[], int n)
{
int i, j, small;
for (i = 0; i < n-1; i++) // One by one move boundary of unsorted subarray
{
small = i; //minimum element in unsorted array
for (j = i+1; j < n; j++)
if (arr[j] < arr[small])
small = j;
// Swap the minimum element with the first element
int temp = arr[small];
arr[small] = arr[i];
arr[i] = temp;
}
}
int main()
{
int n, a[1000],k;
clock
t st,et;
_
double ts;
printf("\n Enter How many Numbers: ");
scanf("%d"
, &n);
printf("\nThe Random Numbers are:\n");
for(k=1; k<=n; k++)
{
a[k]=rand();
printf("%d\t"
,a[k]);
}
st=clock();
selection(a,n);
et=clock();
ts=(double)(et-st)/CLOCKS
PER
SEC;
_
_
printf("\nSorted Numbers are: \n ");
for(k=1; k<=n; k++)
printf("%d\t"
, a[k]);
printf("\nThe time taken is %e"
,ts);
}
