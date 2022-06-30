#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
	int g;
	int min = 0;
	int max = 100;
	int random_num;
	
	random_num = rand() % 100 ;
	cout<<"Guess a number: ";
	cin>>g;
	

	while (g != random_num)
	{
		
		
			if (g<=50 )
			{
				cout<<"Your guess is incorrect. Guess again"<<endl;
				
			}
			if (g>50 && g<=100)
			{
				cout<<"Your guess is incorrect. Guess again"<<endl;
				
			}
		
		cin>>g;
	}
	
	cout<<"congradulations!!!!! You guessed right"<<endl;
	
	return 0;
}
