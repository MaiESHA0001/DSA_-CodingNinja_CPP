/*
Problem statement
Given a string S (that can contain multiple words), you need to find the word which has minimum length.

Note : If multiple words are of same length, then answer will be first minimum length word in the string. Words are seperated by single space only.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= Length of String S <= 10^5

Sample Input 1 :
this is test string
Sample Output 1 :
is
Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a
void minLengthWord(char input[], char output[]){
		
	// Write your code here
	int i=0;
	int n=0;
	for(int k=0;input[k]!='\0';k++)
	{
		n++;
	}
	int minWordStart = 0;

*/



void minLengthWord(char input[], char output[]){
		
	// Write your code here
	int i=0;
	int n=0;
	for(int k=0;input[k]!='\0';k++)
	{
		n++;
	}
	int minWordStart = 0;
    int minWordLength = n; 

    while (true) {
        if (input[i] == ' ' || input[i] == '\0') 
		{
            int wordLength = i - minWordStart;

            if (wordLength < minWordLength) 
			{
                minWordLength = wordLength;
                for (int j = 0; j < minWordLength; j++)
				{
                    output[j] = input[minWordStart + j];
                }
                output[minWordLength] = '\0';  
            }

            if (input[i] == '\0') {
                break;
            }

            minWordStart = i + 1;
        }

        i++;
    }

}









#include<iostream>
#include "solution.h"
using namespace std;


int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}
