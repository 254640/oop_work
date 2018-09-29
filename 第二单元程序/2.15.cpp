#include<iostream>
using namespace std;
namespace one
{
    const int M=200;
    int inf=10;
}
namespace two
{
    int x;
    int inf=-100;
}
using namespace one;
int main()
{

    using two::x;
    x=-100;
    cout<<inf<<endl;
    cout<<M<<endl;
    two::inf*=2;
    cout<<two::inf<<endl;
    cout<<x<<endl;
    return 0;
}
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int arr[3]={0},i=123;
    cout<<"i="<<i<<endl;
    {
        for(int i=0;i<2;i++)
            arr[i]=(i+5)*10+3;
        cout<<"i="<<i<<endl;
        arr[2]++;
        cout<<"i="<<i<<endl;
        arr[2]++;
        cout<<"i="<<i<<endl;
    }
    cout<<"i="<<i<<endl;
    int sum=0;
    for(i=0;i<3;i++)
        sum+=arr[i];
    cout<<"i="<<i<<endl;
    for(i=0;i<3;i++)
        cout<<setw(4)<<arr[i];
    cout<<endl;
    cout<<"i="<<i<<",sum="<<sum<<endl;
    return 0;
}
*/
