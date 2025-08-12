#include<iostream>
using namespace std;

int addfun(int a, int b) {
    int c = a + b;
    return c;
}

int main() {
    int a=10 , b=20;
   
   
    int result = addfun(a, b);
    cout << "The Sum of 10 and 20 is : " << result << endl;
    return 0;
}
