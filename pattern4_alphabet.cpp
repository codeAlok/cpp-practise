#include<iostream>
using namespace std;

// note this down in copy and also have a look at typecasting
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row <= n){
//         int col=1;
//         while(col <= n){
//             char ch = 'A'+ row -1;
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

/*
5
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/


// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i <=n){
//         int j=1;
//         while(j<=n){
//             char ch= 'A'+j-1;  // check this
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
/*
5
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     char start = 'A';
//     while(row <= n){
//         int col=1;
//         while(col <= n){
//             cout<< start<<" ";
//             start = start + 1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
/*
5
A B C D E 
F G H I J 
K L M N O 
P Q R S T 
U V W X Y 
*/

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col=1;
//         while(col <= n){
//             char ch= 'A' + row + col -2;  // look this
//             cout<<ch;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
/*
5
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row <=n){
//         int col=1;
//         while(col <= row){
//             char ch = 'A' + row -1; // again look
//             cout<< ch <<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
/*
5
A
B B
C C C
D D D D
E E E E E
*/

// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col = 1;
//         while(col <= row){
//             char ch = 'A' + row + col -2;
//             cout<< ch <<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
/*
5
A
B C       
C D E     
D E F G   
E F G H I 
*/

// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){
//         int col=1;
//         char ch='A'+ n - row;  // look this helpful(insted formula)
//         while(col <= row){
//             cout<<ch <<" ";
//             ch= ch + 1;
//             col++;
//         }
//         cout<< endl;
//         row++;
//     }
// }
/*
5
E
D E
C D E
B C D E
A B C D E
*/

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row <=n){
        int space = n - row;  // easy for print space
        while(space){
            cout<<" ";
            space = space -1;
        }
        // stars print 
        int col=1;
        while(col <= row){
            cout<<"*";
            col = col +1;
        }
        cout<<endl;
        row = row + 1;
    }
}