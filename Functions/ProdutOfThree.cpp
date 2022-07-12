#include<iostream>

using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
    int prod = multiply(25,4,1);
    cout<<"The multiplication of three numbers is: "<<prod<<endl;

    return 0;
}

int multiply(int num1, int num2, int num3)
{
    return  num1*num2*num3;
}