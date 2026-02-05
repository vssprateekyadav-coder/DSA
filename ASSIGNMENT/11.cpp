#include<iostream>
#include<vector>
using namespace std;
int main()
{   string s;
    vector<string> v;
    cout<< "enter the name :";
    getline(cin,s);
    v.push_back(s);
    cout<< "enter year of study:";
    getline(cin,s);
    v.push_back(s);
    cout << "My name is "<<v[0]<<" and I am currently a "<<v[1]<< " year student";
    return 0;

} 