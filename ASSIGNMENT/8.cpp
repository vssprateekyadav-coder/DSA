#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n,x;
    int count=0;
    cout << "enter the size of arrays";
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {   cout << "enter the element";
       cin >> x;
       arr.push_back(x); 
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]%2)==0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}