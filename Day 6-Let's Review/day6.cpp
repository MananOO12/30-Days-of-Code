#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    string st[n],t;
    for(int i=0;i<n;++i)
    {
       cin>>t;
        st[i]=t;
    }
    for(int i=0;i<n;++i)
    {
        string temp=st[i],temp2="";
        for(int j=0;j<temp.size();++j)
        {
            if(j%2==0)
            {
                temp2+=temp[j];
            }
        }
        st[i]=temp2+" ";
        temp2="";
        for(int j=0;j<temp.size();++j)
        {
            if(j%2!=0)
            {
                temp2+=temp[j];
            }
        }
        st[i]+=temp2;
    }
    for(int i=0;i<n;++i)
    {
        cout<<st[i]<<endl;
    }
    return 0;
}
