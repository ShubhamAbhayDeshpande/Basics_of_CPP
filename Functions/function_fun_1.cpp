#include<iostream>

using namespace std;

/* For the very introduction we will write a function and above we will define a function which will later be called in main. 
In Cpp it is considered a good practice to let main() be the first function in the program. But, by law, we also need to define
something before we actually use it. So we will need to use function prototype for this issue. */

// Defining the prototype for the function. Which is basically function header. It is like variable. We need to define it before we use it. 

void printMyname();

int main()
{
    printMyname();

    return 0;
}


void printMyname()
{
    cout<<"Hello, My Name is Shubham Abhay Deshpande"<<endl<<"This line was printed by the function!!!!"<<endl;

}