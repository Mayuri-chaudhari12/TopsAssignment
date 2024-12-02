// Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scop.

#include <iostream>
using namespace std;
int globalVar = 10;
void localScopeDemo() {
    int localVar = 20; 
    cout << "Inside localScopeDemo function:" << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;  
}
void globalShadowDemo() {
    int globalVar = 50;  
    cout << "Inside globalShadowDemo function:" << endl;
    cout << "Local Variable (shadows global): " << globalVar << endl;  
}

int main() {
    cout << "In main function:" << endl;
    cout << "Global Variable: " << globalVar << endl;
     localScopeDemo();
     globalShadowDemo();


}
