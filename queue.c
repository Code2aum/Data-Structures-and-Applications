#include<stdio.h>
#include<conio.h>
#define SIZE 20
int rear=-1,front=-1,queue[10];
void main()
{
int ch=1,option;
clrscr();
while(ch==1)
{
printf("Queue Operations\n");
printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
printf("Enter your choice \n");
scanf("%d",&option);
switch(option)
{
case 1:qinsert();break;
case 2:qdelete();break;
case 3:qdisplay();break;
case 4:exit(0);
default :printf("Wrong choice\n");
}
printf("Do you want to continue 1-Yes,0-No\n");
scanf("%d",&ch);
}
}

int qinsert(){
    int num;
    if(rear==(SIZE-1)){
    printf("Queue is full\n");
    return;
    }
    printf("Enter element to insert\n");
    scanf("%d",&num);
    queue[++rear]=num;
    if(front==-1){}
front++;
return;
}

int qdelete(){
    int num;
    if (rear==SIZE-1){
        printf("Queue is full\n");
        return;
    }
    printf("Enter element to insert\n");
    scanf("%d",&num);
    queue[++rear]=num;
    if(front==-1)
        front++;
    return;
}

int qdelete(){
    if(front==-1){
    printf("Queue is Empty\n");
    return;
    }
    if(front==rear){
        printf("Deleted element = %d\n",queue[front]);
        front=-1;rear=-1;
        return;
    }
    printf("Deleted element = %d\n",queue[front]);
    front++;
    return;
}