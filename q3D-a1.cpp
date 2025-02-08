#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            str[i] = '*'; 
        }
    }

    cout << "new updated string: " << str;

    return 0;
}
