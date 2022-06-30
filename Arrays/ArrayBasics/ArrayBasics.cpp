// ArrayBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	const int AS = 5; // Using a constant int to define the size of the array
	int myArray[AS]; // Defining the array

	string name[4]{ "Shubham", "Amita", "Abhay", "Deshpande" }; /*This is one way to initializ
																														the array size and the element
																														in a single line.*/

	myArray[0] = 1; // Definig the individual elements in the array
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;

	for (int i = 0; i < AS; i++) // For loop for interating through the array
	{
		cout << myArray[i] << endl;
	}

	/*for (int i =0; i<=4; i++) // For loop for interating through the array
	{
			cout<<name[i]<<endl;
	}*/

	/* The other way of iterating through the array is by using the advanced for loop which
	focuses on the elements of the array rather than the indexes.*/

	cout << endl;

	for (string name : name) /*':' means that for every 'names' inside 'name' this type of for loop isued when we are not interested in the index of the 
							 elements inside the array, but the real interest is the datatype of the elements. */ 

	{
		cout << name << endl;
	}



	/* THE TASK IS TO POPULATE AN ARRAY WITH THE TEN NUMBERS WITH THE FOR LOOP AND THEN PRINT THESE POPULATED ARRAY ELEMENTS USING A DIFFERENT	RANGE BASED 
	FOR LOOP*/

	int j = 0; 
	int k = 1;

	const int Array_size = 10;

	int array_of_ten[Array_size];

	for (j = 0; j <= 9; j++)
	{
		array_of_ten[j] = k;

		k++;
	}

	for (int array_of_ten : array_of_ten)
	{
		cout << array_of_ten << endl;
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
