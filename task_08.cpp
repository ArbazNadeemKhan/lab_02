#include <iostream>
#include <string>
using namespace std;

int patternMatching(const string& text, const string& pattern) {
    int n = text.size();
    int m = pattern.size();

    if (m == 0) return 0;

    for (int i = 0; i <= n - m; ++i) {
        int j = 0;

        for (; j < m; ++j) {
            if (text[i + j] != pattern[j]) {
                break; 
            }
        }

        if (j == m) {
            return i;
        }
    }

    return -1;
}

int main() {
    // Test cases
    // Pattern at the beginning
    cout << patternMatching("dexter morgan", "dexter") 
    << "\n";

    // Pattern at the end
    cout << patternMatching("dexter morgan", "morgan") 
    << "\n"; 

    // Pattern not present
    cout << patternMatching("dexter morgan", "what") 
    << "\n";  

    // Empty pattern
    cout << patternMatching("dexter morgan", "") 
    << "\n";      

    return 0;
}
