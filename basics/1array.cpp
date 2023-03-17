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

    for(int j=0;j<5;j++)
    {
        cout<<a[j];
    }
    cout<<endl<<sizeof(a);
    return 0;
}
