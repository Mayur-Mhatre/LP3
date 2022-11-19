/*  - non-recursive and recursive fibonacci series
    - fibonacci series = 0, 1, 1, 2, 3, 5, 8, 13 ...
    - next term is the sum of previous two terms

    a   b   c
    0   1   1   <- Print this before the loop
    1   1   2   <- c=a+b, a=b, b=c
    1   2   3
    2   3   5
    3   5   8

    start the loop with value of a=1. b=2
    then,
    for(int i=0, i<=n; i++)
    {
    c=a+b
    print c
    a=b
    b=c
    }


*/  






#include <iostream>
using namespace std;

void nonRecFib(int num){
    int a,b,c;

    int i = 0;
    a=0, b=1;
    if(num > 0){
        cout << "Non Recurive Finbonacci Series => 0 1";

        while(i < num-2){
            c=a+b;
            cout << " " << c;
            a=b;
            b=c;
            i++;
        }
    }   else cout << "Input non-zero and non-negative value";
    cout << endl;
}

int recFib(int a){
    if(a==1 || a==0){
        return a;
    } else {
        return (recFib(a-1)+recFib(a-2));
    }
}

int main(){
    int n;
    //cin >> n;
    n = 10;

    nonRecFib(n);
    cout << "Recurive Finbonacci Series     =>";
    for(int i=0; i<n; i++){
        cout << " " << recFib(i);
    }
    

}