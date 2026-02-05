#include<iostream>
#include<vector>
using namespace std;
int main()
{
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
    int k=v[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {if(v[i][j]>k)
            {
                k=v[i][j];
            }
        }
    }
    cout << "maximum ="<< k;
    return 0;
}