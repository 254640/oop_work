#include<iostream>
using namespace std;
#define Multiply(x,y) x*y
int main()
{
    int a=Multiply(3+4,2+3);
    cout<<"a="<<a<<endl;
    return 0;
}
/*

#include<iostream>
using namespace std;
inline int Multiply(int x,int y)
{
    return x*y;
}
int main()
{
    int a=Multiply(3+4,2+3);
    cout<<"a="<<a<<endl;
    return 0;
}



#include<iostream>
using namespace std;
int square(int x)
{
    return x*x;
}
float square(float x)
{
    return x*x;
}
double square(double x)
{
    return x*x;
}
int main()
{
   // cout<<"square()="<<square()<<endl;//
    cout<<"square(10)="<<square(10)<<endl;
    cout<<"square(2.5f)="<<square(2.5f)<<endl;
    cout<<"square(1.1)="<<square(1.1)<<endl;
    return 0;
}
*/
