#include<iostream>
using namespace std;
static int loopCount = 0;

int* findNextGreatest(int* inputArray,int startIndex, int numOfDigits, int isStart)
{
	if(numOfDigits-1 > startIndex+1)
	if(isStart == 1)
	{
		for(int i = (numOfDigits - 1); i > startIndex; i--)
		{
			for(int j = (i - 1); j >= startIndex; j--)
			{
				loopCount++;
				if(inputArray[i] > inputArray[j])
				{
					int temp = inputArray[i];
					inputArray[i] = inputArray[j];
					inputArray[j] = temp;

					findNextGreatest(inputArray,j,numOfDigits,0);
return inputArray;
				}
			}
		}
	}
	else if(isStart == 0)
	{
		for(int i = (numOfDigits - 1); i > startIndex; i--)
		{
			for(int j = (i - 1); j >= startIndex; j--)
			{
				loopCount++;
				if(inputArray[i] < inputArray[j])
				{
					
					int temp = inputArray[i];
					inputArray[i] = inputArray[j];
					inputArray[j] = temp;

					findNextGreatest(inputArray,i,numOfDigits,0);
return inputArray;
				}
			}
		}
	}

	return inputArray;
}

int main()
{
	int inputNum;// = 45632;
	int numOfDigits = 0;
	int temp;
	while(1)
	{
	cout<<"Enter the Number\t:";
	cin>>inputNum;
	if(inputNum == 0)
	{
		cout<<"Input Number is Zero. Exiting\n"
		return 1;
	}
	temp = inputNum;
	while(temp > 0)
	{
		temp=temp/10;
		numOfDigits++;
	}
	//cout<<numOfDigits<<endl;
	int* digitArray = new int[numOfDigits];
	int i = numOfDigits;
	temp=inputNum;
	while(temp > 0)
	{
		i--;
		digitArray[i] = temp%10;
		temp=temp/10;
	}

	digitArray =  findNextGreatest(digitArray,0,numOfDigits,1);
	int result = 0;
	for(i = 0; i < numOfDigits; i++)
	{
		result = (result * 10) + digitArray[i];
	}
	cout<<result<<"\t"<<loopCount<<endl;
	numOfDigits = 0;
	loopCount=0;
	}
	cin>>temp;

	return 1;
}

