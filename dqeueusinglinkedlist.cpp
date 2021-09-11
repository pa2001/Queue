#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int val;
  node* next;
};
node* head=NULL;
int n,choice,s=-1,e=-1,v,qu[100];
void pushb()
{
  node* ptr=new node();
  cout<<"Enter value-";
  cin>>v;
  if(head==NULL)
  {
    ptr->val=v;
    ptr->next=NULL;
    head=ptr;
  }
  else
  {
    ptr->val=v;
    ptr->next=head;
    head=ptr;
  }
}
void pushe()
{
  node* ptr=head;
  cout<<"Enter value-";
  cin>>v;
  if(head==NULL)
  {
    ptr->val=v;
    ptr->next=NULL;
    head=ptr;
  }
  else
  {
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=new node();
    ptr=ptr->next;
    ptr->val=v;
    ptr->next=NULL;
  }
}
void popb()
{
  node* ptr=head;
  head=head->next;
  free(ptr);
}
void pope()
{
  node* ptr=head;
  while(ptr->next->next!=NULL)
  ptr=ptr->next;
  ptr->next=NULL;
  ptr=ptr->next;
  free(ptr);
}
void isempty()
{
  if(head==NULL)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
void display()
{
  node* ptr=head;
  while(ptr!=NULL)
  cout<<ptr->val<<" ",ptr=ptr->next;
}
int main()
{
  while(choice!=8)
  {
    cout<<"Press 1 for push from beginning\nPress 2 for push from end\nPress 3 for pop from beginning\nPress 4 for pop from end\nPress 6 for isempty\nPress 7 for display\nPress 8 for exit\n"<<endl;
    cout<<"Enter choice-";
    cin>>choice;
    switch(choice)
    {
      case 1:
      pushb();
      break;
      case 2:
      pushe();
      break;
      case 3:
      popb();
      break;
      case 4:
      pope();
      break;
      break;
      case 6:
      isempty();
      break;
      case 7:
      display();
      break;
      case 8:
      display();
      break;
    }
   }
}
