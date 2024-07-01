#include<iostream>

using namespace std;
int main() 
{
	int num, bit = 128;
	cout << "Enter decimal number: ";
	cin >> num;
	
	for (int x = 1; x <= 8; x++)
	{
		if(num < bit)
		{
			cout << 0;
			bit /= 2;
		}
		else
		{
			cout << 1;
			num -= bit;
			bit /= 2;
		}
	}
	
	return 0;
}
