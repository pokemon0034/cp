#include<bits/stdc++.h>
using namespace std;
int a[10];
int n=10;
int front=-1;
int rear=-1;
bool Is_Empty(int front, int rear)
{
    if(front==-1&&rear==-1)
    return true;
    else
    return false;
}
bool Is_Full(int front ,int rear,int n)
{
    if((rear+1)%n==front)
    return true;
    else
    return false;
}
void EnQueue(int x)
{
    if(Is_Full(front,rear,n))
    return;
    else if(Is_Empty(front,rear))
    front=rear=0;
    else
    rear=rear+1;
    a[rear]=x;
}
void Dequeue()
{
    if(Is_Empty(front,rear))
    return;
    else if(front==rear)
    front=rear=-1;
    else
    front=(front+1)%n;
}
int front_()
 { return a[front];}
int main()
{
 EnQueue(16);
 EnQueue(1);
 cout<<front_();
 return 0;
}
