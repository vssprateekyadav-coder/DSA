#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main()
{
    deque<deque<char>> v;
    for(int i=0;i<5;i++)
    {    char x=69;
        deque<char> temp;
       
        for(int j=0;j<=i;j++)
        {
            temp.push_front(x);
            x--;
        }
        v.push_back(temp);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<v[i][j];
        }
        cout << "\n";
    }
    return 0;
}