#include<iostream> 
using namespace std;
int main()
{
double a,b;
char op;
cout<<"Enter  two numbers : ";
cin >> a >> op >>b;

switch(op)
{
    case '+': cout << a + b; break;
    case '-': cout << a - b; break;
    case '*': cout << a * b; break;
    case '/': 
        if (b == 0)
           cout << "cannot divide by zero";
        else
           cout << a / b;
        break;
    default:
        cout << "unknown operator";
}
}