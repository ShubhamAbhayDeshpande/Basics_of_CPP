#include<iostream>

using namespace std;

void valueChanged1(int someNum);

void valueChanged2(int& someNum);

int main()
{
    int mynum =12 ;
    cout<<"Before calling function valueChanged 1 called, mynum is : "<<mynum<< endl;

    valueChanged1(mynum);

    cout<<"After calling function valueChanged1, mynum is : "<<mynum<<endl;

    valueChanged2(mynum);

    cout<<"After calling function valueChanged2 , mynum is : "<<mynum<<endl;

    return 0;

}

void valueChanged1(int someNum)
{

    someNum = 100;

    cout<<"someNum in function valueChanged1 is : "<<someNum<<endl;
 
}

void valueChanged2(int& someNum)
{
    someNum = 100;

    cout<<"someNum in the function valeuChanged2 is: "<<someNum<<endl;
}