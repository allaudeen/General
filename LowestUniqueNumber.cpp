#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

/*****************************************
Sample Input (Input File name is given as the First Argument of the Command Line Argument)
3 3 9 1 6 5 8 1 5 3
9 2 9 9 1 8 8 8 2 1 1
*****************************************/

int main ( int argc, char *argv[] )
{
	ifstream inputFile;
	inputFile.open(argv[1]);
	vector< string > fileValues;
	string lineBuffer;
	int Lowest = 10;
	bool isUnique = false;
	while(!inputFile.eof())
	{
		std::getline(inputFile, lineBuffer);
		if (lineBuffer.length() == 0)
			continue; //ignore all empty lines
		else 
		{
	        //do something here
			fileValues.push_back(lineBuffer);
		}
	}

	for(int index = 0; index < fileValues.size() ; index++)
	{
		string tempSingleLine = fileValues[index];
		vector<int> setOfNumbers;
		
		char *token = std::strtok(&tempSingleLine[0], " ");
		while (token != NULL) 
		{
			setOfNumbers.push_back(atoi(token));
			token = std::strtok(NULL, " ");
		}
		for(int i = 0; i < setOfNumbers.size(); i++)
		{
			if(setOfNumbers[i] <= Lowest)
			{
				Lowest = setOfNumbers[i];
				if(isUnique)
				{
					isUnique = false;
					Lowest = 10;
				}
				else 
					isUnique = true;
				if(Lowest != setOfNumbers[i])
					isUnique = true;
			}
		}
	}

	inputFile.close();
	return 0;
}
