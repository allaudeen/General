#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char *str1,*str2,*str3,*str4;
   str1="allau";
   strcpy(str2,str1);
   cout<<str2;
}
/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	string inputStr;
	string tempStr;
	int temp;

	cin>>inputStr;
	strcpy((char*)tempStr.c_str(),inputStr.c_str());
	if(strcmp(strrev((char*)tempStr.c_str()),inputStr.c_str()) == 0)
	{
		cout<<"Given String is itself Palindrome :-)"<<endl;
		cout<<"Length of the String is "<<strlen(inputStr.c_str())<<endl;
	}
	else
	{
		strcpy((char*)tempStr.c_str(),inputStr.c_str());
		strcat((char*)inputStr.c_str(),strrev((char*)tempStr.c_str()));
		//cout<<inputStr.c_str()<<endl;
	}
	cout<<"\nPalindrome String is "<<inputStr.c_str();
	cout<<"\nLength of the String is "<<strlen(inputStr.c_str())<<endl;

	cin>>temp;
	return 0;
}
*/