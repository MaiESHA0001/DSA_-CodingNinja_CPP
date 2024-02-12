Problem statement
You are given a string 'S'. Your task is to partition 'S' such that every substring of the partition is a palindrome. You need to return all possible palindrome partitioning of 'S'.

Note: A substring is a contiguous segment of a string.

For Example:
For a given string “BaaB”
3 possible palindrome partitioning of the given string are:
{“B”, “a”, “a”, “B”}
{“B”, “aa”, “B”}
{“BaaB”}
Every substring of all the above partitions of “BaaB” is a palindrome.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= |S|<= 15
where |S| denotes the length of string 'S'.

Time Limit: 1 sec.
Sample Input 1:
aaC
Sample Output 1:
["C", "a", "a"]
["C", "aa"]
Explanation for input 1:
For the given string "aaC" there are two partitions in which all substring of partition is a palindrome.
Sample Input 2:
BaaB
Sample Output 2:
["B", "B", "a", "a"]
["B", "B", "aa"]
["BaaB"]
Explanation for input 2:
For the given string "BaaB", there are 3 partitions that can be made in which every substring is palindromic substrings.



















  #include <bits/stdc++.h> 
using namespace std;

bool isPalindrome(const string &s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

void partitionHelper(string &s, int start, vector<string> &current, vector<vector<string>> &result) {
    if (start == s.length()) {
        result.push_back(current);
        return;
    }

    for (int i = start; i < s.length(); i++) {
        if (isPalindrome(s, start, i)) {
            string substring = s.substr(start, i - start + 1);
            current.push_back(substring);
            partitionHelper(s, i + 1, current, result);
            current.pop_back();
        }
    }
}

vector<vector<string>> partition(string &s) {
    vector<vector<string>> result;
    vector<string> current;
    partitionHelper(s, 0, current, result);
    return result;
}













#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    //string str;
    //getline(cin, str);
    while(t--) {

    	string S;
    	getline(cin, S);

    	vector<vector<string>> ans = partition(S);
    	
    	for(int i = 0; i < ans.size(); i++) {

    		cout << "[";
    		
    		sort(ans[i].begin(), ans[i].end());
    		for(int j = 0; j < ans[i].size(); j++) {

    			if(j != ans[i].size() - 1) {
    				cout << "\"" << ans[i][j] << "\", ";
    			}
    			else {
    				cout << "\"" << ans[i][j] << "\"";
    			}

    		}

    		cout << "]" << endl;

    	}

    }

    return 0;

}

