#include <iostream>

using namespace std;

int main()
{
    int maxxik = 0, n;
    while (n!= 0){
        cin>>n;
        if (n%2 == 0 && n>maxxik)
            maxxik = n;
    }
    if(maxxik!=0)
        cout<<maxxik;
    else
        cout<<"No";
    return 0;
}
