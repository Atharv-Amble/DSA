//Decimal To Binary
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the decimal number: ";
//     cin >> n;

//     int ans = 0;
//     int place = 1; // To represent powers of 10 for binary placement

//     while (n != 0) {
//         int bit = n & 1;       // Extract the least significant bit
//         ans = (bit * place) + ans; // Build the binary number using integer math
//         n = n >> 1;           // Right shift the number to process the next bit
//         place *= 10;          // Move to the next place value in binary (10, 100, etc.)
//     }

//     cout << "The binary number is: " << ans << endl;
//     return 0;
// }

// Binary To Decimal

#include <iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter the binary number : ";
    cin>>n;

    int ans = 0;
    int i = 0;
    int place = 1;
    while(n != 0)
    {
        int digit = n & 1;
        if(digit == 1)
        {
            ans = ans + place;
        }
        place = place * 10;
        n = n >> 1;
        i++;
    }

    cout<<ans;

}
  
  
   