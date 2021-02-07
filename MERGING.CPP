#include<stdio.h>
#include<conio.h>
void main()
{
int array1[50],array2[50],array3[100],m,n,i,j,k=0;
clrscr();
printf("Enter the Size of the array1");
scanf("%d",&m);
printf("Enter Sorted elements of array1");
for(i=0;i<m;i++)
{
scanf("%d",&array1[i]);
}
printf("Enter Sorted elements of array2");
for(i=0;i<n;i++)
{
scanf("%d",&array2[i]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(array1[i]<array2[j])
{
array3[k]=array1[i];
i++;
}
else
{
array3[k]=array2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<m)
{
array3[k]=array1[i];
i++;
j++;
}
}
printf("After Merging :");
for(i=0;i<m+n;i++)
{
printf("%d",array3[i]);
}
getch();
}


