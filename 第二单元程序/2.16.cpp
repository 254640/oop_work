#include<iostream>
#include<iomanip>
using namespace std;
int sum=5000;
int main()
{
    int arr[3]={10,20,30};
    {
        int i,sum=0;
        for(i=0;i<3;i++)
        sum+=arr[i];
        cout<<"sum="<<sum<<endl;
        ::sum+=sum;
        cout<<"全局sum="<<::sum<<endl;
    }
    sum*=2;
    cout<<"sum="<<sum<<endl;
    int sum=200;
    cout<<"sum="<<sum<<endl;
    ::sum+=sum;
    cout<<"全局sum="<<::sum<<endl;
    return 0;
}
/*

 #include<iostream>
 using namespace std;
 void Fun(int i,int j=5,int k=10);
 int main()
 {
     Fun(20);
     Fun(20,30);
     Fun(20,30,40);
     return 0;
 }
 void Fun(int i,int j,int k)
 {
     cout<<i<<" "<<j<<" "<<k<<endl;
 }
*/
