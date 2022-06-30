#include<iostream>

using namespace std;

void modifyGlobal();

int counter = 0 ;

int main()
{
    cout<<"The value of global variable before implimenting for loop: "<<counter<<endl;
    cout<<endl;
    

    for (int i =0; i<=100; i++)
    {
        modifyGlobal();

        cout<<endl;
    }

    cout<<"the value of the global variable after executing the for loop: "<<counter<<endl;
    return 0;





}

void modifyGlobal()
{
    counter++;

    cout<<"The value of the globl variable is: "<<counter<<endl;


}