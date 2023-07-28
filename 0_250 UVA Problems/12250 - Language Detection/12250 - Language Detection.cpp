#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string, string> mp;
    mp["HELLO"] = "ENGLISH";
    mp["HOLA"] = "SPANISH";
    mp["HALLO"] = "GERMAN";
    mp["BONJOUR"] = "FRENCH";
    mp["CIAO"] = "ITALIAN";
    mp["ZDRAVSTVUJTE"] = "RUSSIAN";
    string s;
    int count = 0;
    while (cin >> s){
        if (s == "#") break;
        count++;
        cout << "Case " << count << ": ";
        if (mp.count(s)) cout << mp[s] << endl;
        else cout << "UNKNOWN" << endl;
    }
}
