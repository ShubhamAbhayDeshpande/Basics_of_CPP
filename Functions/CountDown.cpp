#include<iostream>

using namespace std;

// This function will count down from the given number to zero without using a loop.
void countDownFrom(int num);

int sumValue(int num);

int main()
{
    
    countDownFrom(10);
    int totalVal = sumValue(10);

    cout<<"The total sum of all the numbers is: "<<totalVal<<endl;
    return 0;

}


// notice that just like loop statements, we require a base condition and a repeating condition to execute this loop. 
// In this case the base condition is the parameter that we passed to the function. And the looping is calling the function inside itself. 
void countDownFrom(int num)
{
    if (num>=0)
    {
        cout<<num<<endl;

        countDownFrom(num-1);
    }
}

int sumValue(int num)
{
    int val =0;
    if (num>=1)
    {
        return num + sumValue(num-1);
    }
    return num;
}