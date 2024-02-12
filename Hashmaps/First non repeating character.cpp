Problem statement
Ninja is now bored with numbers and is now playing with characters but hates when he gets repeated characters. Ninja is provided a string, and he wants to return the first unique character in the string.The string will contain characters only from the English alphabet set, i.e., ('A' - 'Z') and ('a' - 'z'). If there is no non-repeating character, print the first character of the string. If there is no non-repeating character, return the first character of the string.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= Length of Input String <= 10^4

Time Limit: 1 sec 
Sample Input 1 :
2
aDcadhc
AabBcC
Sample Output 1:
 D
 A
Explanation for Sample Input 1:
In the first test case, ‘a’ is repeated.’ D’ is the first non-repeating character in the string, so we return it.

In the second test case, all the characters are non-repeating, so we return the first character.
Sample Input 2 :
 2
 ABcd
 AAAbcdb
Sample Output 2:
 A
 c 















#include <bits/stdc++.h> 

#include <iostream>
#include <unordered_map>

char firstNonRepeatingCharacter(std::string str) {
    std::unordered_map<char, int> charFreq;

    // Count the frequency of each character
    for (char c : str) {
        charFreq[c]++;
    }

    // Find the first character with frequency 1
    for (char c : str) {
        if (charFreq[c] == 1) {
            return c;
        }
    }

    // If no non-repeating character is found, return a default value
    return str[0];
}



   


















#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;



#include "solution.h"

class Runner
{
    int t;

    
    vector<string> arr;


public:
    void takeInput()
    {

 cin >> t;
        arr.resize(t);
        

        for (int tc = 0; tc < t; tc++)
        {
       cin>>arr[tc];

        }

        
    }

    void execute()
    {
         vector<string> arrCopy = arr;
        for (int i=0;i<t;i++){
            firstNonRepeatingCharacter(arrCopy[i]);
        }
    }


    void executeAndPrintOutput()
    {
        for (int tt=0;tt<t;tt++){
            char v=firstNonRepeatingCharacter(arr[tt]);
            {
              cout<<v;         
            }
            cout<<"\n";
        }
    }
};

int main()
{

    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}


