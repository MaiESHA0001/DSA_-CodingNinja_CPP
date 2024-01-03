#include <iostream>
using namespace std;
int main() 
{    
         int x= 10, y = 1;
         if (++x >10 || x / 0 == 0)
            cout << y;
         else
             cout << x;
} 

                                                          /*        1     */


Problem statement
#include <iostream>
using namespace std;
int main()
{   
    int x = 15;
    int y = x++;
    int z = ++x;
    cout << y << “ “ << z;
}
                                                        /*     15 17   */

Problem statement
#include <iostream>
using namespace std;
int main() 
{        
         int g = 3;
         cout << (++g * 8);
} 

                                                           /*    32    */

Problem statement
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << “ “ << y;
}
                                                 /*  inside else 11 20 */

Problem statement
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 || ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << “ “ << y;
}

                                                 /*    inside if 11 21  */

Problem statement
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20;
    if(x++ > 10 || ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x << “ “ << y;
}

                                                     /*  0 2 4 */

Problem statement
What will be the output the following code?

for(int i = 1; i < 5; i = i + 1){
    i=i-1;
    cout << i << " ";

}
                                                    /*  infinite 0s  */

Problem statement
What will be the output ?

for(int i = 0; i < 5; i = i + 1) {
     if(i == 2) 
           continue;
    cout << i << " ";
 } 
 
                                                          /* 0134*/


Problem statement
What will be the output ?

for(int i = 0; i < 2; i = i + 1) {
     for(int j = 0; j < 2; j = j + 1) {
          if (j == 1)
              break;
          cout << j << " ";
      }
 } 
                                                       /*  00*/

Problem statement
Which of these jump statements can skip processing remainder of code in its body for a particular iteration ?

                                                    /*  continue*/

  Problem statement
int i = 1;
while(i < 5) {
    if(i == 3) {
        break;
    }
    cout << i << " ";
    i++;
}

                                                   /*  12  */


Problem statement
int i = 1;
while(i < 5) {
    if(i == 3) {
        continue;
    }
    cout << i << " ";
    i++;
}

                                               /* 12 infinite loop */

Problem statement
int i = 1;
while(i < 3) {
    int j = 1;
    while(j < 5) {
        if(j == 3) {
            break;
        }
        cout << j << " ";
        j++;
    }
    i++;
}

                                                             /*  12128/

Problem statement
int i = 1;
while(i < 3) {
    int j = 0;
    while(j < 5) {
        j++;
        if(j == 3) {
            continue;
        }
        cout << j << " ";
    }
    i++;
}
                                                        /*12451245*/

Problem statement
Will following code generate error ?

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if(a > 5) {
        int b = 10;
    }
    cout << b << endl;
}
                                                                 /* yes*/
Problem statement
Will following code generate error ?

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if(a > 5) {
        int a = 100;
    }
    cout << a << endl;
}
                                                                     /*NO*/
What is the output ?

#include <iostream>
using namespace std;
int main() {
    int a = 10;
    if(a > 5) {
        int a = 100;
    }
    else {
        int a = 110;
    }
    cout << a << endl;
}
                                                                     /* 10*/
Problem statement
What is the output ?

#include <iostream>
using namespace std; 
int main() {
    int a = 10;
    while(a > 5) {
        int a = 1;
        cout << a << " ";
        a--;
    }
} 
                                                            /* infinite loop */


  



