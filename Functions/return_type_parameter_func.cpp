# include<iostream>

using namespace std;

/* A function is defined by it's parameter type and if the function returns any value. 
The functions prototypes which are defined below take different parameters and may or
maynot return a value

The functions with 'void' are sometimes called vlue returing. And functions with return type 
other than void are called paramerterized. */

void printHello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);


int main()
{
    printNumber(100); 
    printHello();

    int c = 129;
    int d = 430;

    int someVal = addThese(c, d);
    cout<<someVal<<endl;

    int var = giveMe10();
    cout<<var<<endl;

    //we can pass one function as a parameter to another function.

    int x = 500;
    int y = 200;
    
    printNumber(addThese(x,y));

    return 0;
}

void printHello()
{
    cout<<"hello there"<<endl;
}

void printNumber(int a)
{
    cout<<"The number is: "<<a<<endl;
}

int giveMe10()
{
    return 10;
}

int addThese(int num1, int num2)
{
    int result = num1 + num2;

    return result;
}