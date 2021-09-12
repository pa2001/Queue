#include<bits/stdc++.h>
using namespace std;
class node
{
  public:
  int val;
  int priority;
  node* next;
};
node* head=NULL;
int v,p;
void push()
{
  node* ptr=new node();
  cout<<"Enter value-";
  cin>>v;
  cout<<"Enter priority-";
  cin>>p;
  ptr->val=v;
  ptr->priority=p;
  ptr->next=NULL;
  if(head==NULL)
  {
    head=ptr; 
    head->next=NULL;
  }
  else if(head->priority<p)
  {
    ptr->next=head;
    head=ptr;
  }
  else
  {
    node* temp=head;
    while(temp->next!=NULL&&temp->next->priority>p)
    temp=temp->next;
    ptr->next=temp->next;
    temp->next=ptr;
  }
}
void pop()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    node* ptr=head;
    head=head->next;
    free(ptr);
  }
}
void display()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  {
    node* ptr=head;
    while(ptr!=NULL)
    {
      cout<<ptr->val<<" ";
      ptr=ptr->next;
    }cout<<endl;
  }
}
void peek()
{
  if(head==NULL)
  cout<<"Underflow"<<endl;
  else
  cout<<head->val;
}
int main()
{
  int choice;
  cout<<"Press 1 to push\nPress 2 to pop\nPress 3 to peek\nPress 4 to display\n";
  while(choice!=5)
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
      case 3:
      peek();
      break;
      case 4:
      display();
      break;
    }
  }
}
