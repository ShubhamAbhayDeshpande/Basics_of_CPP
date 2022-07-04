#include<iostream>
#include<string>

using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int cube);


int main()
{
    int out = getResult(30,20);
    string name = getResult("Shubham", "Deshpande"); 
    int ThreeTimes = getResult(2);


    cout<<"The multiplication of the two numbers is: "<<out<<endl;
    cout<<endl;
    cout<<"The name of the person is: "<<name<<endl;
    cout<<endl;
    cout<<"The cube of the given number is: "<<ThreeTimes<<endl;
    cout<<endl;
    
    return 0;

}

int getResult(int num1, int num2)
{
    return num1 * num2;
}

string getResult(string str1, string str2)
{
    return str1 + " " + str2;

}

int getResult(int cube)
{
    return cube*cube*cube;
}