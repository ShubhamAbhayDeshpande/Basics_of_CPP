#include<iostream>

using namespace std;

void threeTimesN(int num1, int&num2);

int main()
{
    int x = 0;
    int y = 0;

    cout<<"Enter any integer: "<<endl;
    cin>>x;
    cout<<endl;

    cout<<"initial value of second variable is: "<<y<<endl;

    cout<<endl;

    // Calling function
    threeTimesN(x,y);

    cout<<"The value of y after calling function threeTimesN should be equal to 3 times tha value of x. Which is equal to: "<<y<<endl;


    return 0;
}
void threeTimesN(int num1, int& num2)
{
    num2 = num1 * 3 ; 

}