/*
Problem statement
Print the following pattern for given number of rows.

Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
  */

#include<iostream>
using namespace std;
 void printPattern(int r){
   for(int i=1;i<=r;++i){
    for(int j=1;j<=r-i+1;++j){
cout<<j;
    }
      for(int k=1;k<=2*(i-1);++k){
        cout<<"*";
      }
    for(int l=r-i+1;l>=1;--l){
      cout<<l;
    }
     cout<<endl;
 }
 }
 int main()
 {
   int numr;
   cin>>numr;
   printPattern(numr);
    return 0;
 }
