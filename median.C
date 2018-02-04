#include <stdio.h>
 
int main() 
{
int i,j,a[50],n,m;
printf("\nEnter the size :");
scanf("%d",&n);
printf("\nEnter the array numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
m=a[i];
a[i]=a[j];
a[j]=m;
}}}
printf(" \nThe median element is %d",a[n/2]);
	return 0;
}
