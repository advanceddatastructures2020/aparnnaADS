// Universal set
#include<stdio.h>
void input();
void output();
void setunion();
void setintersection();
void difference();
int a[]={0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0};
int main()
int ch,wish;
do
{
printf("\n___MENU____");
printf("1.Input\n 2.Union\n 3.Intersection\n 4.Difference\n");
printf("Enter Choice");
scanf("%d",&ch);
switch(ch)
{
case1:input();
break;
case2:setunion();
break;
case3:intersection();
break;
case4:difference();
break;
}
printf("\n Do you wish to continue?(1/0)\n");
scanf("%d",&wish);
}
while(wish==1);
}
void input()
{
int n,x,i;
printf("Enter size of the 1st set\n");
scanf("%d",&n);
printf("Enter the element\n");
for(i=0;i<n;i++)
{
scanf("%d",&x);
a[x-1]=1;
}
printf("Enter the Size of the second set\n");
scanf("%d",&x);
printf("Enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&x);
b[x-1]=1;
}
printf("\n1set\n");
for (i=0;i<9;i++)
{
printf("%d",a[i]);
}
printf("\n2set\n");
for(i=0;i<9;i++)
{
printf("%d",b[i]);
}
}
void output(int c[])
{
int i;
printf("\nSet is");
for(i=0;i<9;i++)
{
if((c[i]!=0)
printf("%d",i+1);
}
}
void setunion()
{
int i,c[10];
for(i=;i<9;i++)
{
if(a[i]==b[i])
c[i]=1;
else c[i]=a[i];
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
output(c);
}
void intersection()
{
int i,c[10];
for(i=0;i<9;i++)
{
if(a[i]==b[i])
c[i]=a[i];
else c[i]=0;
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
}
output(c);
}
void difference()
{
int i,c[10];
for(i=0;i<9;i++)
{
if(a[i]==1&&b[i]==0)
c[i]=1;
else c[i]=0;
}
for(i=0;i<9;i++)
{
printf("%d",c[i]);
output(c);
}
getch();
}