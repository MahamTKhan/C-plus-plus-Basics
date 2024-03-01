#include <iostream>
using namespace std;

int main(){
    int a,b;
    int add;
    int subtract;
    float mult;
    float div;
    float modulus;

    cout<<"BASIC CALCULATOR"<<endl;

    cout<<"ENTER FIRST NUMBER:"<<endl;
    cin>>a;

    cout<<"ENTER SECOND NUMBER:"<<endl;
    cin>>b;

    add=a+b;
    cout<<"the result after adding "<<a<<" and "<<b<<" = "<<add<<endl;

    subtract=a-b;
    cout<<"the result after subtracting "<<a<<" and "<<b<<" = "<<subtract<<endl;

    mult=a*b;
    cout<<"the result after multiplying "<<a<<" and "<<b<<" = "<<mult<<endl;

    div=a/b;
    cout<<"the result after dividing "<<a<<" and "<<b<<" = "<<div<<endl;

    modulus=a%b;
    cout<<"the result after taking modulus of "<<a<<" and "<<b<<" = "<<modulus<<endl;


    return 0;
}
