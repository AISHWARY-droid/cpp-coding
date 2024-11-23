#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a;
    int b;
    
    cout << "enter the first numbers "<< endl;
    
    cin >> a;
    
    cout << "enter the second numbers "<< endl;
     
    cin >> b;
    
    if(a>b){
    cout << "a is greater";
    }
    
    else if(a<b){
    cout << "b is greater";
    }
    else{
    cout << "both are equal";
}
    return 0;
}