#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter the size";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout <<"enter the element";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
