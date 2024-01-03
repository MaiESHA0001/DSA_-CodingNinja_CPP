/*

Problem statement
Take input a stream of n integer elements, find the second largest element present.

The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :

Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
Sample Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
#include<iostream>
#include <climits>
#include<vector>
using namespace std;


int findSecondLargest(const std::vector<int>& elements){
    int n = elements.size();
    if(n <= 1)
    return INT_MIN;

*/


      
 
  #include<iostream>
#include <climits>
#include<vector>
using namespace std;


int findSecondLargest(const std::vector<int>& elements){
    int n = elements.size();
    if(n <= 1)
    return INT_MIN;
    int Largest=std::max(elements[0],elements[1]);
    int SecondLargest=std::min(elements[0],elements[1]);
    for(int i=2;i<n;++i){
    if (elements[i] > Largest) {
      SecondLargest = Largest;
      Largest = elements[i];
    } else if (elements[i] > SecondLargest && elements[i] != Largest) {
      SecondLargest = elements[i];
    } 

        }

    return SecondLargest;
}

int main(){
    int n;
    std::cin>>n;
   std:: vector<int>elements(n);
    for(int i=0 ;i<n; ++i)
    {
       std:: cin>>elements[i];
    }
    int SecondLargest = findSecondLargest(elements);
    std::cout<<SecondLargest<<std::endl;
     return 0;
}
    
     




    
     







