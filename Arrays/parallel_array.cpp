#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

int main()
{
    // Defining the number of prople 
    const int num_people = 5;

    //Defining the vectors to store the weights and the names
    vector<int>weights;
    vector<string> names;


    // Defining the temporary weights and name

    int tempWeight;
    string tempName;

    // Defining the for loop for accepting the weights of the people
    for(int i = 0; i<= num_people; i++)
    {
        cout << "Enter the person's full name"<< endl;
        getline(cin, tempName);

        cout << "Please enter"<<tempName<<"'s weight"<<endl;
        cin>>tempWeight; 

        cin.get(); //consume a newline character 

        names.push_back(tempName);
        weights.push_back(tempWeight);

    }

    cout<<endl;

    for(int j = 0 ; j<num_people; j++)
    {
        cout<<names[j]<<" Weighs "<<weights[j]<<" lbs."<<endl;
    }

    return 0;

}
