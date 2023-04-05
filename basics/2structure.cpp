#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
    char x;
}rec;

int main()
{
rec.breadth=10;
rec.length=50;
cout<<rec.length*rec.breadth<<endl;
cout<<sizeof(rectangle);
    return 0;
}
