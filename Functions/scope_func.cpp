#include<iostream>

using namespace std;

void someFunction(int param);

double myGlobalDouble = 50 ; // This is a global variable can be acced by any other function in the program. 

int main()
{
    int localTomain = 20;

    cout << "local to main variabe is: "<<localTomain<<endl; //Accessing the loacal variable inside the main
    cout<<"Value of global double in the main is: "<<myGlobalDouble<<endl; //Accessing the global variable

    someFunction(25);
    someFunction(65);
    someFunction(90);
    return 0; 

}

void someFunction(int param)
{
    int myLocalvar = 30;
    static int someFunctionVar = 500;

    myLocalvar++;
    myGlobalDouble++;
    someFunctionVar++;

    cout<<"Global variable in the someFunction is: "<<myGlobalDouble<<endl; //Accessing the global variable 
    cout<<"The parameter is: "<<param<<endl;
    cout<<"the local number is: "<<myLocalvar<<endl; //Accessing the local variable inside the someFunction. 
    cout<<"The value of the someFunctionVar is: "<<someFunctionVar<<endl;

    cout<<endl;
    cout<<endl;

}