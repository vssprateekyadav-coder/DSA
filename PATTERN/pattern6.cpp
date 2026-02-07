#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {   int k=1;
        int n=i+1;
        for(int j=0;j<=8;j++)
        {
            if(j>i && j<8-i)
            {
                cout << " ";
            }
            else if(j<=i){
                cout<<k;
                k++;
            }
            else
            {
                
                cout << n;
                n--;
            }
        }
        cout << "\n";
    }
}