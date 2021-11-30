// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate modulus of
// two Hexadecimal numbers
void hexaModK(string s, string k)
{
     
    // Store all possible
    // hexadecimal digits
    map<char, int> mp;
     
    // Iterate over the range ['0', '9']
    for(char i = 1; i <= 9; i++)
    {
        mp[i + '0'] = i;
    }
     
    mp['A'] = 10;
    mp['B'] = 11;
    mp['C'] = 12;
    mp['D'] = 13;
    mp['E'] = 14;
    mp['F'] = 15;
     
//    // Convert given string to long
//    long m = stoi(k, 0, 16);
//     
    // Base to get 16 power
    long base = 1;
     
    // Store N % K
    long ans = 0;
     
    // Iterate over the digits of N
    for(int i = s.length() - 1;
            i >= 0; i--)
    {
         
        // Stores i-th digit of N
        long n = mp[s[i]] % m;
         
        // Update ans
        ans = (ans + (base % m * n
                      % m) % m) % m;
         
        // Update base
        base = (base % m * 16 % m) % m;
    }
     
    // Print the answer converting
    // into hexadecimal
    stringstream ss;
    ss << hex << ans;
    string su = ss.str();
    transform(su.begin(), su.end(),
              su.begin(), ::toupper);
    cout << (su);
}
 
// Driver Code
int main()
{
     
    // Given string N and K
    string n = "3E8";
    string k = "13";
     
    // Function Call
    hexaModK(n, k);
    return 0;
}
