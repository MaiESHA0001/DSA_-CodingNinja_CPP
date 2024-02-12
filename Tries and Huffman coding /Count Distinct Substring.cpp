Problem statement
Given a string 'S', you are supposed to return the number of distinct substrings(including empty substring) of the given string. You should implement the program using a trie.

Note :
A string ‘B’ is a substring of a string ‘A’ if ‘B’ that can be obtained by deletion of, several characters(possibly none) from the start of ‘A’ and several characters(possibly none) from the end of ‘A’. 

Two strings ‘X’ and ‘Y’ are considered different if there is at least one index ‘i’  such that the character of ‘X’ at index ‘i’ is different from the character of ‘Y’ at index ‘i’(X[i]!=Y[i]).
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 5
1 <= |S| <= 10^3

‘S’ contains only lowercase English letters.

Time Limit: 1 sec
Sample Input 1 :
2
sds
abc
Sample Output 1 :
6
7
Explanation of Sample Input 1 :
In the first test case, the 6 distinct substrings are { ‘s’,’ d’, ”sd”, ”ds”, ”sds”, “” }

In the second test case, the 7 distinct substrings are {‘a’, ‘b’, ‘c’, “ab”, “bc”, “abc”, “” }.
Sample Input 2 :
2
aa
abab
Sample Output 2 :
3
8
Explanation of Sample Input 2 :
In the first test case, the two distinct substrings are {‘a’, “aa”, “” }.

In the second test case, the seven distinct substrings are {‘a’, ‘b’, “ab”, “ba”, “aba”, “bab”, “abab”, “” }



















  class TrieNode{

    public:

    char data;

    TrieNode **children;

    bool isTerminal;

    TrieNode(char data){

        this->data=data;

        children=new TrieNode*[26];

        for(int i=0;i<26;i++){

            children[i]=NULL;

        }

        isTerminal=false;

    }

};

class Trie {

    TrieNode *root;

public:

    Trie() {

        root=new TrieNode('\0');

    }

    void insert(TrieNode* root,string s){

        if(s.size()==0){

            root->isTerminal=true;

            return;

        }

        int indx=s[0]-'a';

        TrieNode* child;

        if(root->children[indx]!=NULL) child=root->children[indx];

        else{

            child=new TrieNode(s[0]);

            root->children[indx]=child;

        }

        insert(child,s.substr(1));

    }

    void insert(string word) { 

        insert(root, word); 

    }

    bool search(TrieNode *root,string s){

        if(s.size()==0){

            if(root->isTerminal==true) return true;

            else return false;

        }

        int indx=s[0]-'a';

        TrieNode *child;

        if(root->children[indx]!=NULL) child=root->children[indx];

        else return false;

        return search(child,s.substr(1));

    }

    bool search(string word) {

        return search(root,word);

    }

};

int countDistinctSubstrings(string &s) {

  //    Write your code here.

  Trie t;

  int count=0;

  for(int i=0;i<s.size();i++){

      for(int j=i;j<s.size();j++){

          string temp=s.substr(i,j-i+1);

          if(t.search(temp)==false){

              count++;

              t.insert(temp);

          }

      }

  }

  return count+1;

}


















#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

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
            cin >> arr[tc];
        }
    }

    vector<string> getCopy()
    {
        vector<string> arrCopy = arr;

        return arrCopy;
    }

    void execute()
    {
        vector<string> arrCopy = arr;
        for (int i = 0; i < t; i++)
        {
            int ans = countDistinctSubstrings(arrCopy[i]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int ans = countDistinctSubstrings(arr[i]);

            cout << ans << endl;
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


