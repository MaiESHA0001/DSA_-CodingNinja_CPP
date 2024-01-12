Problem statement
For a given a string expression containing only round brackets or parentheses, check if they are balanced or not. Brackets are said to be balanced if the bracket which opens last, closes first.



Example:
Expression: (()())
Since all the opening brackets have their corresponding closing brackets, we say it is balanced and hence the output will be, 'true'.
You need to return a boolean value indicating whether the expression is balanced or not.

Note:
The input expression will not contain spaces in between.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10^7
 Where N is the length of the expression.

Time Limit: 1sec
Sample Input 1 :
(()()())
Sample Output 1 :
true
Sample Input 2 :
()()(()
Sample Output 2 :
false
Explanation to Sample Input 2:
















  #include <stack>
bool isBalanced(string str) {
    stack<char> s;
    
	for(int i = 0; i < str.length();i++) {
        if(str[i] == '(' or str[i] == '{' or str[i] == '[') {
            s.push(str[i]);
            continue;
        }
        
        //if the current character is not the opening parentheses then is must be a closing one, and thus stack cannot be empty
        if(s.empty())
            return false;
        
        // Now check for the closing parenthesis
        char c;
        
        switch(str[i]) {
            case ')' : c = s.top();
                	   s.pop();
                	   if(c == '}' or c == ']')
                         return false;
                	   break;
            case '}' : c = s.top();
                	   s.pop();
                	   if(c == ')' or c == ']')
                         return false;
                	   break;   
                
            case ']' : c = s.top();
                	   s.pop();
                	   if(c == ')' or c == '}')
                         return false;
                	   break;  
        }
    }
    
   return s.empty();
    
}

