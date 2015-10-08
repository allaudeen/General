#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

/*****************************************
Sample Input (Input File name is given as the First Argument of the Command Line Argument)
some line with text
another line
*****************************************/

int main ( int argc, char *argv[] )
{
	ifstream inputFile;
	inputFile.open(argv[1]);
	vector< string > fileValues;
	string lineBuffer;
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
		vector<char*> singleLine;
		char *token = std::strtok(&tempSingleLine[0], " ");
		while (token != NULL) 
		{
			singleLine.push_back(token);
			token = std::strtok(NULL, " ");
		}
		cout<<singleLine[singleLine.size() - 2]<<endl;
	}	
	inputFile.close();
	return 0;
}
