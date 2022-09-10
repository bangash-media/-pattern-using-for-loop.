#include <iostream>
using namespace std;
/*a program to print the pattern using for loopin a way that Take the number of rows of
pyramid from user.*/
int main() 
{
	int rows; // variable declarartion
	cout<<"Enter the number of rows for the pattern : "; cin>>rows; //input from user 
	for(int i=1;i<=rows;i++) //loop for no. of rows entered 
	{
		for(int j=1;j<=rows-i;j++) //nested "for loop 1" for blank printing blank spaces
		{
			cout<<" ";
		}
		for(int k=0;k!=2*i-1;k++) //nested "for loop 2 " for printing "*"
		{
			cout<<"*"; 
		}
		cout<<endl; //after this\n cursor will be move to "for loop" when nested "for loop" is completed
	}
	return 0;
}
