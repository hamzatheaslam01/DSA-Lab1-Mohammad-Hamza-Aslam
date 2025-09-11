#include <iostream>
#include <string>
using namespace std;

int findSubstring(const string &text, const string &pattern) {
    if (pattern.empty()) return 0;  // convention: empty pattern matches at index 0
    
    int n = text.size();
    int m = pattern.size();

    if (m > n) return -1;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) {
            return i;
        }
    }

    return -1;
}

int main() {
    string text1 = "hello world";
    cout << "Pattern at beginning: " << findSubstring(text1, "hello") << endl;

    string text2 = "this is a test";
    cout << "Pattern at end: " << findSubstring(text2, "test") << endl;

    string text3 = "abcdef";
    cout << "Pattern not present: " << findSubstring(text3, "xyz") << endl;

    string text4 = "abc";
    cout << "Empty pattern: " << findSubstring(text4, "") << endl;
}