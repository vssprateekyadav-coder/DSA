#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        char c='A';
        char  x;
        int k=i;
        for(int j=0;j<=10;j++)
        {
            if(j>=5-i && j<=5)
            {
                cout << c;
                c++;
            }
            else if(i!=0 && j>5 && j<=5+i)
            {   x=64+k;
                cout << x;
                k--;
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}