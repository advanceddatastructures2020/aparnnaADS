#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#define CAPACITY 1000

struct stack
{
int data;
struct stack *next;
} *top;

int size = 0;
void push(int element);
int pop();

void main()
{
int choice,data;
clrscr();
while(1)
{
printf("...........................\n");
printf("STACK IMPLEMENTATION PROGRAM\n");
printf("..............................\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Size\n");
printf("4. Exit\n");
printf("...............");
scanf("Enter Your Choice:  ");
scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("Enter data to push into stack:");
    scanf("%d",&data);
    push(data);
    break;

case 2:
    data=pop();
    if(data != INT_MIN)
    printf("Data =>  %d\n" , data);
    break;
case 3:
    printf("Stack size: %d\n",size);
    break;
case 4:
     printf("Exiting From app...\n");
     break;

default:
    printf("Invalid  Choice , please try again,\n");
}
 printf("\n\n");
 }
 }
 void push(int element)
 {
 struct stack * newNode = (struct stack *) malloc(sizeof(struct stack));
 if(size >= CAPACITY)
 {
  printf("Stack overflow,cant add more element to stack,\n");

 return;
 }
 newNode-> data = element;
 newNode->next=top;
 top=newNode;
 size++;
 printf("Data Pushed to stack,\n");
 }

 int pop()
 {
 int data = 0;
 struct stack * topNode;
 if(size<=0 || !top)
 {
 printf("Stack is empty,\n");
 return INT_MIN;
 }
 topNode=top;
 data= top-> data;
 top= top-> next;
 free(topNode);
 size--;
 return data;
 }
