// Pangrams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

string pangrams(string s) {

    vector<bool> letters(26, false);

    for (char ch : s)
    {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z')            
            letters[(int)ch - 97] = true;
    }

    for (bool b : letters)
        if (!b) return "not pangram";

    return "pangram";
}

int main()
{
    string s;
    getline(cin, s);

    string result = pangrams(s);

    cout << result << endl;

    return EXIT_SUCCESS;
}
