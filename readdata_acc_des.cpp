#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
int main() {
	int temp;
	char *str;
	string myText;
	ifstream readfile("data.txt");
	
	while(getline(readfile, myText))
	{
		str =& myText[0];
		int len = strlen(str);
		for(int i = 0; i < len; i++)
		{
			for(int j = i + 1; j < len; j++) 
			{
				if(str[i] > str[j]) 
				{
					temp = str[i];
					str[i] = str[j];
					str[j] = temp;
				}
			}
		}
		cout << str << endl;
	}
	readfile.close();
	return 0;
}
