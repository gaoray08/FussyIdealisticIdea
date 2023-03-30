#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int numberOfNumbers;
    int count = 1;
    int sum = 0;
    string operators;
    string x;
    string myList[numberOfNumbers] = { };
    
    cout << "Welcome to a command line calculator, made by Gao Rui. \n ";
    cout << "Please enter the number of arguements you are going to key in. \n";
    cin >> numberOfNumbers;
    cout << "Please enter the operator that you want to use (+ or - or * or /)";
    cin >> operators; 

    while (count < numberOfNumbers)
    {
        cout << "Please enter the " << count << " number.";
        cin >> x;
        myList.push_back(x);
        count =+ 1

    }

    if (operators == "+")
    {
        for (int i : myList){
            sum += i;
        }
        cout << "The sum of " << myList << " is " << endl;
        cout << sum << endl;
    }

    if (operators == "-")
    {
        for (int i : myList){
            sum -= i;
        }
        cout << "The sum of " << myList << " is " << endl;
        cout << sum << endl;
    }

    if (operators == "*")
    {
        for (int i : myList){
            sum *= i;
        }
        cout << "The sum of " << myList << " is " << endl;
        cout << sum << endl;
    }

    if (operators == "/")
    {
        for (int i : myList){
            sum /= i;
        }
        cout << "The sum of " << myList << " is " << endl;
        cout << sum << endl;
    }

    cout << "Thank you for using my calculator!"
    return 0; 
}