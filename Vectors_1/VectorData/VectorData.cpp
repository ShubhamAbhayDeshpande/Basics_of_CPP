// VectorData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;


int main()
{
    //Specify an inter that will be used to enter the elements in the vector. 
    int num;

    //create a vector of unspecified length 
    vector<int>MyVec;

    /* Using do-while loop to check the condition if the entered number is positive or negative. If it is positive add it in the vector. If negative then
    exit the loop and print the twice the all the elements in the vector. */ 
    do
    {
        //Accept the input from the user.
        cout << "Enter the number to be added in the vector. If the number is negative, then program will exit the loop !!!!" << endl;
        cin >> num;

        // Upend the vector with the input.
        MyVec.push_back(num);
    } 
    while (num >= 0);

    // After exiting the loop, print twice of all the elements in the vector.
    cout << "The double of all the elements of the vector are: " << endl;

    for (int i =0; i<MyVec.size(); i++)
    {
        cout << MyVec.at(i) * 2 << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
