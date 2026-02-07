#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<21;j++)
        {
            if(i<=5)
            {
                if(j>=10-i && j<=10+i)
                {
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            if(i>5)
            {
                if(j>=i-1 && j<=20-i+1)
                {
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}