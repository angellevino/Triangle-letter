#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (){
    string letter {};
    cout << "give me letter for letter pyramid" << endl;
    cin >> letter;
    
    
    size_t n = letter.length();
    vector<vector<char>> pyramid(n, vector<char>(2*n-1,' '));

    // insert elemet
    for (size_t i{0} ; i < n ; ++i){
        for (size_t j = 0; j < i + 1; ++j) {
            pyramid[i][n - 1 - i + 2 * j] = letter[j];
        }
    }
        
        // display pyramid
        
        for (const auto& row : pyramid) {
            for (const auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }
