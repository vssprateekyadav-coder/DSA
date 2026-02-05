#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int sum;
    vector<vector<int>> v;
    for(int i=0;i<3;i++)

    {   vector<int> temp;
        for(int j=0;j<3;j++)
        {
            int x;
            cout << "enter the " <<i << ","<< j << ":";
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(int i=0;i<3;i++)
    {   sum=0;
        for(int j=0;j<3;j++)
        {
        
            sum=sum+v[i][j];

        }
        cout << "row"<< i << "=" << sum << "\n";
        
    }
    return 0;
}