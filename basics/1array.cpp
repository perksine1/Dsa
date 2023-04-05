#include<iostream>
using namespace std;
int main()
{
    int n;
   cout<<"size of array";
   cin>>n;
    int a[n];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<endl<<sizeof(a);
    return 0;
}
