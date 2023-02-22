#include <iostream>
#include <string>
using namespace std;

bool IsParallel(int n)
{

        string s = to_string(n);
        for (int j = 0; j < (int)s.size(); j++)
        {
            for (int k = 0; k < (int)s.size(); k++)
            {
                if (s[k] != s[j]) return false;
            }
        }
        return true;

}

int main()
{
    int T; cin >> T;
    while (T != 0)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;

        for (int i = a; i <= b; i++)
        {
            if (IsParallel(i) == true) count++;
        }
        cout << count << endl;
    }
    return 0;
}
