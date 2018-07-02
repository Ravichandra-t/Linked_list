#include <bits/stdc++.h>

using namespace std;
struct node
{
    int dat;
    struct node *next;
};
struct node *root=NULL;

void insert_first()
{
    struct node *temp;
    temp=new struct node;
    cout<<"\nD:";
    cin>>temp->dat;
    if(root==NULL)
    {
        root=temp;
        root->next=NULL;
    }
    else
    {
        temp->next=root;
        root=temp;
    }
}
void insert_last()
{
    struct node *temp,*cur;
    temp=new struct node;
    cout<<"\nD:";
    cin>>temp->dat;
    if(root==NULL)
    {
        root=temp;
        root->next=NULL;
    }
    else
    {
        cur=root;
        while(cur->next!=NULL)
            cur=cur->next;
        cur->next=temp;
        temp->next=NULL;
    }
}
void delete_first()
{
    struct node *temp;
    if(root==NULL)
        cout<<"Not possible\n";
    else
    {
        temp=root;
        root=root->next;
        delete temp;
    }
}
void delete_last()
{
    struct node *temp,*prev;
    if(root==NULL)
        cout<<"Not possible\n";
    else
    {
        temp=root;
        prev=root;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;

        }
        prev->next=NULL;
        delete temp;
    }
}
void rev_list()
{
    struct node *prev, *cur, *next;
    prev=NULL;
    next=NULL;
    cur=root;
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    root=prev;
}
void display()
{
    struct node *temp;
    temp=root;
    cout<<"\n";
    while(temp!=NULL)
    {
        cout<<temp->dat<<" ";
        temp=temp->next;
    }
}
int main()
{
    int ch;
    while(1)
    {
    cout<<"\n1.Insert_F 2.Insert_L 3.Delete_F 4.Delete_L  5.Disp  6.reverse  \n";
    cin>>ch;
    switch(ch)
    {
        case 1:insert_first();break;
        case 2:insert_last();break;
        case 3:delete_first();break;
        case 4:delete_last();break;
        case 5:display();break;
        case 6:rev_list();break;
        default:exit(0);
    }
    }
    return 0;
}
