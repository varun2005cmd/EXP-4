#include<iostream>
using namespace std;

// Varun Pendem
// PRN: 23070123149

int main()
{   int one = 1; 
    int a1 = 4;
    int a = 5;
    int b = 10;
  
    int bit_and = a & a1;
    int bit_or = a || a1;
    int bit_not  = !one;
    int bit_XOR = a^a1;
    cout<< "the and of 4 and 5 is "<<bit_and<<endl;
    cout<< "the or of 4 and 5 is "<<bit_or<<endl;
    cout<< "the not of 1 is "<<bit_not<<endl;
    cout<< "the XOR of 4 and 5 is "<<bit_XOR<<endl;
      return 0;
}
