#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
/*****************************************
Sample Input 
3
aaab
baa
aaa
*****************************************/

bool IsPalindrome(const char* checkString) {
    unsigned int strLength = strlen(checkString);
    for(unsigned int i = 0, j = strLength-1; i < strLength/2; i++, j--) {
        if(checkString[i] != checkString[j])
            return false;
    }
    
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned int nNumofInputs = 0;
    cin>>nNumofInputs;
    for(unsigned int i = 0; i < nNumofInputs; i++) {
        string input;
        cin>>input;
        if(IsPalindrome(input.c_str())) {
            cout<<"-1\n";
            continue;
        }
            
        for(unsigned int i = 0, j = input.size() - 1; i < j; i++, j--) {
            string newString = input.substr(i+1, j);
            if(IsPalindrome(newString.c_str())) {
                cout<<i<<"\n";
                break;
            }
            else {
                newString = input.substr(i, j-1);
                if(IsPalindrome(newString.c_str())) {
                    cout<<j<<"\n";
                    break;
                }
            }

        }
            
    }
    
    
    return 0;
}
