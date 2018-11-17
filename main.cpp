// Course:  CS213 - Programming II  - 2018
// Id:      20170345
// Name:    Youssef Adel El-Sayed    20170345
// Title:   Assignment III - IndividualTask 2 - Problem 8 P350
// Program: CS213-2018-digitalroot
// Purpose: adding the single digit of (Adding single digit of whole number)
// Author:  Dr. Mohammad El-Ramly
// Date:    16 November 2018
// Version: 1.0
#include <iostream>

using namespace std;
int digitalroot(int n){
    if (n/10==0) return n; //base case
    return digitalroot((n%10)+digitalroot(n/10));   /// recursive function
}
int main()
{
    cout << digitalroot(17295553) << endl;
    return 0;
}
