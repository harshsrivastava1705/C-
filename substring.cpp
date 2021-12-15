//find all possible substrigs of a string
#include <iostream>
#include <stack>
using namespace std;
stack <string>v;


void insert(int i,int j,string s,string q)
{
    if(j==i)
    {
        v.push(q);
        return;
    }
     insert(i,j+1,s,q+s[j]);
     insert(i,j+1,s,q);
    
    
}

void disp()
{
    while(!v.empty())
    {
        cout<<v.top()<<endl;
        v.pop();
    }
}

int main()
{
    string s;
    cin>>s;
    {
        insert(s.length(),0,s,"");
    }
    disp();

    return 0;
}
