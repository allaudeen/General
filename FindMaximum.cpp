#include <iostream>
#include <conio.h>
using namespace std;

/*
Given an array of elements which is first increasing and then decreasing, find the maximum element in the array.
*/
int main() {

        int inputArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 15, 20, 30, 8, 7, 6, 5, 4, 3, 2, 1};
        int arraySize = sizeof(inputArray)/sizeof(inputArray[0]);

        int first = 0, last = arraySize - 1;

        while(first < last) {
                int middle = (first + last)/2;
                int middleValue = inputArray[middle];
                int middleBeforeValue = inputArray[middle-1];

                if(middleValue > middleBeforeValue) {
                        cout<<first<<"\t"<<middle<<"\t"<<last<<"\t"<<inputArray[middle]<<endl;
                        first = middle;
						if(first == last - 1)
							break;
                }
                else {
                        cout<<first<<"\t"<<middle<<"\t"<<last<<"\t"<<inputArray[middle]<<endl;
                        last = middle;
                }
        }
        cout<<"Maximum Value is "<<inputArray[first];
		_getch();
        return 0;
}
