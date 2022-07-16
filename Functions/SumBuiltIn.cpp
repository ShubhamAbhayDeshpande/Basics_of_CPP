#include<iostream>



using namespace std;

float SumArray(int arr[], int size); // Create a function that will sum the elements of an array. This function will accept the array and the size
                                    //of the array as an input.

int main()
{
    const int size_arr = 5;

    float avg =0;
    int myArray[size_arr] = {1,2,3,4,5};

    avg = SumArray(myArray, size_arr);

    cout<<"average of all the numbers in the array is: "<<avg<<endl;

    return 0;
}


float SumArray(int arr[], int size)
{
    int sum =0;
    float average = 0;

    for (int i =0; i<size; i++)
    {
        sum = sum+arr[i];

    }

    average = sum/size; 

    return average;
}