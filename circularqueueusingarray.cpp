#include<bits/stdc++.h>
using namespace std;
int t=-1,n,v,pos,r=-1;
int qu[100],c=0;
void push()
{
  if(c==n)
  cout<<"Overflow"<<endl;
  else
  {
    cout<<"Enter value-";
    cin>>v;
    if(t==-1&&r==-1)
    t=0,r=0;
    else
    r=(r+1)%n;
    qu[r]=v;
    c++;
  }
}
void pop()
{
  if(c==0)
  cout<<"Underflow"<<endl;
  else
  {
    t=(t+1)%n;
    c--;
  }
}
void isempty()
{
  if(c==0)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
void isfull()
{
 if(c==n)
 cout<<"Yes"<<endl;
 else
 cout<<"No"<<endl; 
}
void peek()
{
  if(c==0)
  cout<<"Underflow"<<endl;
  else
  cout<<qu[r]<<endl;
}
void count()
{
  cout<<c<<endl;
}
void change()
{
  if(r==-1)
  cout<<"Underflow"<<endl;
  else
  {
    cout<<"Enter position:";
    cin>>pos;
    cout<<"Enter value:";
    cin>>v;
    qu[pos]=v;
  }
}
void display()
{
  if(c==0)
  cout<<"Underflow"<<endl;
  else
  {
    if(r>=t)
    {
      for(int i=t;i<=r;i++)
      cout<<qu[i]<<" ";
    }
    else
    {
      for(int i=t;i<n;i++)
      cout<<qu[i]<<" ";
      for(int i=0;i<=r;i++)
      cout<<qu[i]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  int choice=0;
  cout<<"Enter size-";
  cin>>n;
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
