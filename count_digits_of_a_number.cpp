#include<iostream>

using namespace std;
int main() 
{
	int num, ctr = 0, temp;
	cout << "Enter a number: ";
	cin >> num;
	temp = num;
	
	while(temp != 0) 
	{
		temp /= 10;
		ctr++;
	}
	
	cout << endl << "Total digits: " << ctr;
	return 0;
}
