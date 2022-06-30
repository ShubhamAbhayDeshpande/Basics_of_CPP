// VectorPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    //Create a string vector of 5 elements (no need to specify the length of the vector)
    vector<string> FriendNames;

    // append the names of 5 people in the vector
    FriendNames.push_back("Siddhi");
    FriendNames.push_back("Sanchita");
    FriendNames.push_back("Pranav");
    FriendNames.push_back("Atharva");
    FriendNames.push_back("Guru");

    //print the original content of the vector
    cout << "original vector: " << endl;
    for (string old : FriendNames)
    {
        cout << old << endl;
    }

    cout << endl;
   

    /*Enter the name "John Baugh" as the third element in the vector.Note the interesting way in which we can use.begin() + 2 to point to the element 
    to be replaced*/ 


    FriendNames.insert(FriendNames.begin() +2, "John Baugh");

    //remove the last element from the vector
    FriendNames.pop_back();

    //print the elements of the vector using for loop

    cout << "the new content: " << endl;

    for (string name : FriendNames)
    {
        cout << name << endl;

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
