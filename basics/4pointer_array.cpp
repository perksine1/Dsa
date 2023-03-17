#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[5]={2,4,5,6,7};
    int *p;
    p=a;
     for (int  i = 0; i < 5; i++)
     {
        cout<<a[i]<<endl;
     }
     
        for (int  i = 0; i < 5; i++)
     {
        cout<<p[i]<<endl;
     }
     
    
    return 0;
}
