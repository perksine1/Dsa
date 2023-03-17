#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
}rec;

int main()
{
rec.breadth=10;
rec.length=50;
cout<<rec.length*rec.breadth;
    
    return 0;
}
