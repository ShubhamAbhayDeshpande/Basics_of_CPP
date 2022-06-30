#include<iostream>

using namespace std;

int Square(int a);

int main()
{
     int num1;

     cout << "Enter a number: "<<endl;

     cin>>num1;

     cout<<endl;

     int var = Square(num1);

     cout<<"The square of the number is: "<<var<<endl;

    return 0;
}

int Square(int a)
{
    int result = a*a;

    return result;
}

