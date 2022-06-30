// Vecors_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    // define a vector of integers without any size
    vector<int> someVec; 

    // define a vector of strings with a fixed size
    vector<string> anotherVec(3);

    // push_back() is used in the STL to append the currevt vector by the elements specified in the brackets.
    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);

    //printing the size of the someVec after the addition of the elements
    cout << "Size of the someVec " << someVec.size() << endl;

    //adding the strings in the second vector in the same way as adding the elements in an array 
    anotherVec[0] = "shubham";
    anotherVec[1] = "abhay";
    anotherVec[2] = "amita";

    //using push_back on anotherVec
    anotherVec.push_back("deshpande");

    //printing the both vectors to see the results
    for (int val : someVec)
    {
        cout << val << endl;

    }

    cout << endl;

    for (string str : anotherVec)
    {
        cout << str << endl;

    }

    cout << endl;

    // return the elements at the front and the back of the vector by using .front() and .back() methods
    cout <<"element in the front: " << anotherVec.front() << endl;
    cout << endl;
    cout << "element in the back: " << anotherVec.back() << endl;
    cout << endl;



    /*the std::list::pop_back() method is used to remove the element at the end of the vector. (Should not be used with the cout or endl)
    
    std::list::begin() is used to index or point to the element that is at the brginning of the vector.
    
    std::list::insert() is used to insert an element in the vector. This method takes two arguments, 1st is the index at which the element is to be inserted
    and the second is the element that is to be inserted in the list. */

    anotherVec.pop_back(); //remove the last element of the vector
    anotherVec.insert(anotherVec.begin(), "baba");//insert a new element in the front

    cout << "now the fist element is: " << anotherVec.front() << endl;
    cout << endl;
    cout << "the last element is: " << anotherVec.back() << endl;


    return 0;
}


