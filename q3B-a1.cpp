#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    string nwstr = "";
    for (char c : str) {
        if (c != ' ') {
   
            if (c >= 'A' && c <= 'Z') {
            c += 32;
            nwstr += c;
            }
        }
    }

    int n = nwstr.length();
    bool palindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (nwstr[i] != nwstr[n - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        cout << "The string is palindrome" << endl;
    } else {
        cout << "The string is not palindrome";
    }

    return 0;
}
