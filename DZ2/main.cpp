#include <iostream>

using namespace std;

int main()
{
    int sum = 1;
    long long n;
    while (n!=0){
        cin>>n;
        if  (n /100 != 0 &&  n/1000 == 0)
            sum*=n;
    }
    if (sum==1)
        cout<<0;
    else
        cout<<sum;
    return 0;
}
