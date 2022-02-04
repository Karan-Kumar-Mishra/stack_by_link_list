#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
  //stack by link_list
class node
{
  public:
  int info;
  node *next;
};
node* creat(int data)
{
  node *ptr= new node;
  ptr->info=data;
  return ptr;
}
void display(node *head)
{
  node *ptr=head->next;
  while(ptr!=NULL)
 {
   cout<<" "<<ptr->info;
   ptr=ptr->next;
 }
}
node* push(node *head,int data)
{
 node *p1=creat(data);
 node *ptr=head->next;
  while(ptr->next!=NULL)
 {
   
   ptr=ptr->next;
 }
 ptr->next=p1;
 p1->next=NULL;
}
void pop(node *head)
{
  node *ptr=head->next;
  while(ptr->next->next!=NULL)
 {
  ptr=ptr->next;
 }
 delete ptr->next;
 ptr->next=NULL;
}
int main()
{
  node *head,*p1;
  head= new node;
  p1=creat(00);
  head->next=p1;
  p1->next=NULL;
  int cmd,data;
  while(1)
{
  clrscr();
  cout<<"==== stack by link list ===="<<endl;
  cout<<endl;
  cout<<"-------------------------"<<endl;
  display(head);
  cout<<endl;
  cout<<"-------------------------"<<endl;
  cout<<"1.push data"<<endl;
  cout<<"2.pop data"<<endl;
  cout<<"3.display"<<endl;
  cout<<"4.exit"<<endl;
  cout<<"enter the command =>>";
  cin>>cmd;
  switch(cmd)
{
 case 1:
 cout<<"enter the data=>"<<endl;
 cin>>data;
 push(head,data);
 break;
 case 2:
 pop(head);
 break;
 case 3:
 display(head);
 getch();
 break;
 case 4:
 return 0;
 break;
 default:
 cout<<"command is not found ?"<<endl;
 break;
 
 }
 getch();
}
 return 0;
}