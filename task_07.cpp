#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Test cases
    // Multiple occurrences
    vector<int> arr1 = {1, 7, 6, 8, 7, 7};
    int key1 = 7;
    vector<int> result1 = findIndices(arr1, key1);
    cout << "Indices for key " << key1 << ": ";
    for (int idx : result1) cout << idx << " ";
    cout << "\n";

    // Key not present
    vector<int> arr2 = {1, 5, 5, 2};
    int key2 = 6;
    vector<int> result2 = findIndices(arr2, key2);
    cout << "Indices for key " << key2 << ": ";
    for (int idx : result2) cout << idx << " ";
    cout << (result2.empty() ? "None" : "") << "\n";

    // Empty array
    vector<int> arr3 = {};
    int key3 = 5;
    vector<int> result3 = findIndices(arr3, key3);
    cout << "Indices for key " << key3 << ": ";
    for (int idx : result3) cout << idx << " ";
    cout << (result3.empty() ? "None" : "") << "\n";

    return 0;
}
