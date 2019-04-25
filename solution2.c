#include<stdio.h>
#include<stdlib.h>
struct department{
int flag;
union{
struct student{
char name[20];
}t1;
struct faculty{
char name[20];
int salary;
}t2;
};
struct department *next;
};
typedef struct department node;
node *head=NULL,*ptr,*temp;
node * newnode()
{
node *nn;
nn=(node*)malloc(sizeof(node));
printf("\nPress 0 for Student\nPress 1 for Faculty\n");
scanf("%d",&nn->flag);
if(nn->flag)
{
printf("\nEnter Faculty Name:");
scanf("%s",nn->t2.name);
printf("\nEnter salary:");
scanf("%d",&nn->t2.salary);
}
else
{
printf("\nEnter Student Name:");
scanf("%s",nn->t1.name);
}
nn->next=NULL;
return nn;
}
void insert()
{
ptr=head;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=newnode();
}
void delet()
{
ptr=head;
while(ptr->next!=NULL)
{
temp=ptr;
ptr=ptr->next;
}
temp->next=NULL;
free(ptr);
}
void display()
{
    ptr=head;
    int flag;
while(ptr->next!=NULL){
        printf("%s",ptr->t1.name);
    printf("%s",ptr->t2.name);
    printf("%d",ptr->t2.salary);

    ptr=ptr->next;
}

{
    //printf("%s",ptr->)
temp=ptr;
ptr=ptr->next;
}
temp->next=NULL;
    /**ptr=head;
    int flag;
    printf("0-for student, 1-for faculty");
    scanf("%d",&flag);
    if(flag!=0){

    while(ptr->next!=NULL){
        printf("%s",ptr->t2.name);
                printf("%d",ptr->t2.salary);

        ptr++;
    }
    }else{
    while(ptr->next!=NULL){
        printf("%s",ptr->t1.name);
        ptr++;
    }
    }*/
//write your code here to print the data of the link-list
}
int main()
{
int ch;
head=newnode();

while(1)
{
printf("\n1.Insertion \n2.Delete\n3.Display\n4.Exit\nEnter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:insert();
break;
case 2:delet();
break;
case 3:display();
break;
case 4:exit(0);
default:printf("\nWrong Choice\n");
}
}
}
