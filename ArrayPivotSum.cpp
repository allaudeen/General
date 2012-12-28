#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

#define MAX_ELEMENT 10


int splitDigits(string inpStr, int *Set)
{
	
	char* tempinput;
	int i = 0;
	int *temp;

	tempinput = strtok((char*)inpStr.c_str()," ");
	while(tempinput != NULL)
	{
		Set[i] = atoi(tempinput);
		tempinput = strtok(NULL," ");
		i++;
	}
	return i;
	
}
int main()
{
	int setA[MAX_ELEMENT],setB[MAX_ELEMENT];
	int arraySizeA,arraySizeB;
	string inpStr;
	int temp;

	cout<<"Enter elements for setA\t:";
	getline(cin,inpStr);
	arraySizeA = splitDigits(inpStr,setA);

	cout<<"Enter elements for setB\t:";
	getline(cin,inpStr);
	arraySizeB = splitDigits(inpStr,setB);
	
	int i,j,exitCondition=0;
	for(i = 0; i < arraySizeA; i++)
	{
		for(j = 0; j < arraySizeB; j++)
		{
			if(setA[i] == setB[j])
			{
				exitCondition = 1;
				break;
			}
		}
		if(exitCondition == 1)
			break;
	}

	/*
	cout<<arraySizeA<<"\t"<<arraySizeB<<endl;
	for(int i = 0; i < arraySizeA; i++)
	{
		cout<<setA[i]<<"\t";
	}
	cout<<endl;
	for(int i = 0; i < arraySizeB; i++)
	{
		cout<<setB[i]<<"\t";
	}*/

	if(exitCondition == 0 && i == arraySizeA)
	{
		cout<<"No Pivot Element\n";
		cin>>temp;
		return 0;
	}
	int sum = 0;
	for(int k = 0; k < i; k++)
	{
		sum = sum + setA[k];
	}
	for(int k = j; k < arraySizeB; k++)
	{
		sum = sum + setB[k];
	}

	cout<<"\nSUM\t:"<<sum;
	cin>>temp;
	return 0;
}