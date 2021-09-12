#include<bits/stdc++.h>
using namespace std;
int v,p,heap[100],n=-1;
int parent(int i)
{
  return (i-1)/2;
}
int leftchild(int i)
{
  return i+1;
}
int rightchild(int i)
{
  return i+2;
}
int getmax()
{
  return heap[0];
}
int getmin()
{
  return heap[n];
}
void moveup(int i)
{
  while(i>0)
  {
    if(heap[parent(i)]<heap[i])
    {
      int temp;
      temp=heap[parent(i)];
      heap[parent(i)]=heap[i];
      heap[i]=temp;
    }
    i=i/2;
  }
}
void movedown(int k)
{
  int index=k;
  int left=leftchild(k);
  if(left<=n&&heap[left]>heap[index])
  index=left;
  int right=rightchild(k);
  if(right<=n&&heap[right]>heap[index])
  index=right;
  if(k!=index)
  {
    int temp;
    temp=heap[index];
    heap[index]=heap[k];
    heap[k]=temp;
    movedown(index);
  }
}
void removemax()
{
  int r=heap[0];
  heap[0]=heap[n];
  n--;
  movedown(0);
}
void push()
{
  cout<<"Enter value-";
  cin>>v;
  n++;
  heap[n]=v;
  moveup(n);
}
void pop()
{
  cout<<"Enter pos-";
  cin>>p;
  heap[p]=heap[0]+1;
  moveup(p);
  removemax();
}
void display()
{
  for(int i=0;i<=n;i++)
  cout<<heap[i]<<" ";
  cout<<endl;
}
int main()
{
  int choice;
  cout<<"Press 1 to push\nPress 2 to pop\nPress 3 to display\n";
  while(choice!=4)
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
      display();
      break;
    }
  }
}
