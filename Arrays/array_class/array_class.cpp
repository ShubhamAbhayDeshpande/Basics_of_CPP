// array_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<array> 

using namespace std;


int main()
{
    const int AS = 9;

    /*This progra uses a concept called class arrays in c++. This tyoe of an array is similar to the built in type of an array. But has some additional
    functionalities to maje it more robust. This type of arrays are covered under the Standard Template Library STL of C++. For more information, refer the STL
    documentation in the link 
    https://www.geeksforgeeks.org/array-class-c/ */


    /* THE TASK OF THE EXERCISE IS TO CREATE AN ARRAY CLASS THAT CONTAINS THE ELMENTS SUCH THAT ELMENT = ELMENT*2 */

    // defining the array class
 

    array<int, 10> ar = {}; 

    for (int i = 0; i <= ar.size(); i++) // This is how an array class is defined. 
    {
        ar.at(i) = i * 2;  /*This is an advantage of using STL and array class. It has various functions. such as .at(i) fetches the element in position i
                           this is simply not possible in built in array. */

        cout << ar.at(i) << endl;

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
