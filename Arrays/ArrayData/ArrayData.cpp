// ArrayData.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;


int main()
{
    // Define an integer which will be held to temporarily hold the value given by the user. 

    int num;

    // Define an array in order to store the 5 numbers
    vector<int> MyArray;

    //For loop for accepting the inputs from the user and storing them in array 
    for (int i=0; i <= 4; i++)
    {
        cout << "Enter the " << i << "th number in an array." << endl;
        cin >> num;

        MyArray.push_back(num);

    }


    // Print twice the inputed number as an output
    for (int j = 0; j <= MyArray.size(); j++)
    {
        cout << "Twice the " << j << "th number is: " << MyArray.at(j) * 2<< endl;
        cout <<endl ;

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
