#include <iostream>

using namespace std;

int main()
{
    long long n, m, a, R, K;
    cin>>n>>m>>a;
    R=n/a;
    K=m/a;
    if(n%a!=0)R++;
    if(m%a!=0)K++;
    cout<<R*K;
    return 0;
}
