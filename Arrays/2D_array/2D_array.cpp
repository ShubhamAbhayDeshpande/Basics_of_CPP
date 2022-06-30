// 2D_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

    #include <iostream>
    using namespace std;


    int main()
    {
        // Create a 2D array, having 2 rows and 3 columns
        int numarr[2][3]{
            {1,2,3},
            {4,5,6}
        };

        //printout the element in the first row and the third column
        cout << numarr[0][2] << endl;

        //change the value of the second row and the third element. Print the results
        numarr[2][3] = 14;
        cout << numarr[2][3] << endl;

        //print the elements of the array in reverse using nested for loop 
        for (int i =1 ; i >= 0; i-- )
        {
            for (int j=2; j >= 0; j-- )
            {

                cout << numarr[i][j]<<" ";

            }
            cout << endl;
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
