#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //scanf("%d",&n);
     if(n%2==1)
        cout<<"Weird";
    
    else
    {
         if((2<=n && n<=5) || n>20)
            cout<<"Not Weird";
        
        else if(6<=n && n<=20)
            cout<<"Weird";

    }
    return 0;
}
