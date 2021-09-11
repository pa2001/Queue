#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int val;
  node* next;
};
node* head=NULL;
int t=-1,n,v,pos,r=-1,c=0;
void push()
{
  node* ptr=new node();
  cout<<"Enter value-";
  cin>>v;
  ptr->val=v;
  ptr->next=NULL;
  if(head==NULL)
  {
    head=ptr;
    ptr->next=head;
  }
  else
  {
    node* temp=head;
    while(temp->next!=head)
    temp=temp->next;
    temp->next=ptr;
    ptr->next=head;
  }
}
void pop()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    node* ptr=head;
    node* temp=head;
    while(temp->next!=head)
    temp=temp->next;
    head=head->next;
    temp->next=head;
    free(ptr);
  } 
}
void isempty()
{
  if(head==NULL)
  cout<<"YES"<<endl;
  else
  cout<<"No"<<endl;
}
void isfull()
{
  
}
void peek()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  cout<<head->val<<endl;
}
void count()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  node* ptr=head;
  while(ptr->next!=head)
  ptr=ptr->next,c++;
  cout<<c+1<<endl;
}
void change()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    node* ptr=head;
    cout<<"Enter position-";
    cin>>pos;
    cout<<"Enter new value-";
    cin>>v;
    for(int i=0;i<pos;i++)
    {
      ptr=ptr->next;
    }
    ptr->val=v;
  }
}
void display()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    node* ptr=head;
    while(ptr->next!=head)
    {
      cout<<ptr->val;
      ptr=ptr->next;
    }
    cout<<ptr->val;
    cout<<endl;
  }
}
int main()
{
  int choice=0;
  cout<<"Press 1 for push\nPress 2 for pop\nPress 3 for top\nPress 4 for isempty\nPress 5 for isfull\nPress 6 for peek\nPress 7 for count\nPress 8 for change\nPress 9 for display\nPress 10 for exit\n"<<endl;
  while(choice!=10)
  {
    cout<<"Enter choice-";
    cin>>choice;
    switch(choice)
    {
      case 1:
      push();
      break;
      case 2:
      pop();
      break;
      case 4:
      isempty();
      break;
      case 5:
      isfull();
      break;
      case 6:
      peek();
      break;
      case 7:
      count();
      break;
      case 8:
      change();
      break;
      case 9:
      display();
      break;
      case 10:
      display();
      break;
    }
  }
}
