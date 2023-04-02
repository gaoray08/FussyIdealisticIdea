#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int numberOfNumbers;
    int count = 1;
    float sum = 0;
    string operators;
    string x;
    vector<string> myList;
    
    cout << "Welcome to a command line calculator, made by Gao Rui. \n ";
    cout << "Please enter the number of arguements you are going to key in. \n";
    cin >> numberOfNumbers;
    cout << "Please enter the operator that you want to use (+ or - or * or /) \n";
    cin >> operators; 

    while (count <= numberOfNumbers)
    {
        cout << "Please enter the " << count << " number. \n";
        cin >> x;
        myList.push_back(x);
        count += 1;
 
    }

    if (operators == "+")
    {
        for (int i=0;i < myList.size();i++){
            sum += stoi(myList[i]);
        }
        cout << "The sum of ";
        for (int i=0;i<myList.size();i++){
          cout << myList[i];
          if (i < myList.size()-1){
            cout << " and ";
          }
        }
        cout << " is ";
        cout << sum << endl;
    }
    else if (operators == "-")
    {
        for (int i=0;i < myList.size();i++){
            if (i==0){
              sum = stoi(myList.at(i));
            }
          else{
            sum -= stoi(myList.at(i));
          }
        }
        cout << "The minus of ";
        for (int i=0;i<myList.size();i++){
          if(i==0){
            cout << myList[i];
          }
          if (i!=0){
            cout << " minus ";
            cout << myList[i];
          }
        }
        cout << " is ";
        cout << sum << endl;
    }
  else if (operators == "*"){
    for (int i=0;i < myList.size();i++){
      if (i==0){
        sum = 1;
      }
      sum *= stoi(myList.at(i));
    }
    cout << "The multiplcation of ";
        for (int i=0;i<myList.size();i++){
          cout << myList[i];
          if (i < myList.size()-1){
            cout << " and ";
          }
        }
        cout << " is ";
        cout << sum << endl;
  }
  else if (operators == "/"){
    for (int i=0;i < myList.size();i++){
            if (i==0){
              sum = stoi(myList.at(i));
            }
          else{
            sum /= stoi(myList.at(i));
          }
        }
        cout << "The divison of ";
        for (int i=0;i<myList.size();i++){
          if(i==0){
            cout << myList[i];
          }
          if (i!=0){
            cout << " divided by ";
            cout << myList[i];
          }
        }
        cout << " is ";
        cout << sum << endl;
  }
    cout << "Thank you for using my calculator!";
    return 0; 
}
