#include<iostream>

using namespace std;

int factorialfunc(int num);

int main()
{
    int var = 5;
    int fact = factorialfunc(6);

    cout<<"The factorial of the given number is: "<<fact<<endl;

    for (var=6; var>=1; var--)
    {
        var = var*(var-1);
    }
    cout<<var;


    return 0;
}

int factorialfunc(int num)
{   

    if (num >= 1)
    {
        return num*factorialfunc(num-1);
    }

    return 1;
}

