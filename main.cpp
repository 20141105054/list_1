//
//  main.cpp
//  list_1
//
//  Created by 20141105054 on 15/12/9.
//  Copyright © 2015年 宋志远. All rights reserved.
//

#include <iostream>
#include <string.h>
struct student
{
    int age;
    int number;
    char name[100];
    student *next;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    student *p,*q,*head;
    head=new student;
    head->next=0;
    p=head;
    for(i=0;i<4;i++)
    {
        q=new student;
        p->next=q;
        q->next=0;
        scanf("%s %d %d",q->name,&(q->age),&(q->number));
        p=q;
    }
    p=head->next;
    while(p!=0)
    {
        printf("%s%d%d\n",p->name,p->age,p->number);
        p=p->next;
    }
    
    return 0;
}
