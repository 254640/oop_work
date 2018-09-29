#include<iostream>
using namespace std;
int x=5,y=10;
int &r=x;
void print()
{

    cout<<"x="<<x<<" y="<<y<<" r="<<endl;
    cout<<"Address of x "<<&x<<endl;
    cout<<"Address of y"<<&y<<endl;
    cout<<"Address of r"<<&r<<endl;
}
int main()
{
    print();
    r=y;


    y=100;
    print();
    x=200;
    print();
    return 0;
}

/*
#include<iostream>
using namespace std;
void swap(int &x,int &y)

{

    int t=x;
    x=y;
    y=t;
}
int main()
{

    int a=3,b=5,c=10,d=20;
    cout<<"a="<<a<<" b="<<b<<endl;
    swap(a,b);

    cout<<"a="<<a<<" b="<<b<<endl;
    cout<<"c="<<c<<" d="<<d<<endl;
    swap(c,d);

    cout<<"c="<<c<<" d="<<d<<endl;
    return 0;

}*/
