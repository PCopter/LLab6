#include<iostream>
using namespace std;

int main(){
    int x ;
    int Even = 0;
    int Odd = 0;
    while(x != 0){
    cout << "Enter an integer: ";
    cin >> x;
    if(x%2==0){
        Even++;
        if(x==0){
            Even--;
            }
    }else{
        Odd++;
        }
    }
    cout << "#Even numbers = "<< Even <<"\n";
    cout << "#Odd numbers = "<< Odd;
    return 0;
}
