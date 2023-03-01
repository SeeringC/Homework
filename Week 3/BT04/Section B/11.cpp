#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++) 
    {
        string word;
        cin >> word;
        s.push_back(word);
    }

    for (string word : s) 
    {
        string reversed_word = word;
        reverse(reversed_word.begin(), reversed_word.end());
        if (find(s.begin(), s.end(), reversed_word) != s.end()) 
        {
            int password_length = word.size();
            char password_middle = word[password_length / 2];
            cout << password_length << " " << password_middle << endl;
            break;
        }
    }
    return 0;
}

