#include <iostream>
using namespace std;
int main() {
 int dollar ;
 cout << "你有多少錢?";
 cin >> dollar ;
int fifty = dollar % 50;
int ten = fifty % 10;
int five = ten % 5;
int one = five % 1;

if (dollar >= 50 )
 cout << "有50元硬幣X" << dollar / 50;
 cout << "個"; 
  
if (fifty >= 10 )
 cout << "\n有10元硬幣X" << fifty / 10;
 cout << "個"; 
 
if (ten >= 5 )
 cout << "\n有5元硬幣X" << ten / 5;
  cout << "個"; 
  
if (five >= 1 )
 cout << "\n有1元硬幣X" << five / 1;
 cout << "個"; 
 
 }
