#include<bits/stdc++.h>
using namespace std;
int n,choice,s=-1,e=-1,v,qu[100];
void pushb()
{
  if(e==n)
  cout<<"Overflow"<<endl;
  else
  {
    if(s==-1&&e==-1)
    s=0,e=0;
    else
    for(int i=e-1;i>=s;i--)
    qu[i+1]=qu[i];
    cout<<"Enter value-";
    cin>>v;
    qu[s]=v;
    e++;
  }
}
void pushe()
{
  if(e==n)
  cout<<"Overflow"<<endl;
  else
  {
    cout<<"Enter value-";
    cin>>v;
    qu[e]=v;
    e++;
  }
}
void popb()
{
  if(s==-1&&e==-1)
  cout<<"Underflow"<<endl;
  else
  {
    s++;
  }
}
void pope()
{
  if(s==-1&&e==-1)
  cout<<"Underflow"<<endl;
  else
  {
    e--;
  }
}
void isfull()
{
  if(e==n)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
void isempty()
{
  if(e==-1&&s==1)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
}
void display()
{
  if(e==-1&&s==-1)
  cout<<"Underflow"<<endl;
  else
  {
    for(int i=s;i<e;i++)
    cout<<qu[i]<<" ";
    cout<<endl;
  }
}
int main()
{
  cout<<"enter size-";
  cin>>n;
  while(choice!=8)
  {
    cout<<"Press 1 for push from beginning\nPress 2 for push from end\nPress 3 for pop from beginning\nPress 4 for pop from end\nPress 5 for isfull\nPress 6 for isempty\nPress 7 for display\nPress 8 for exit\n"<<endl;
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
      case 5:
      isfull();
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
