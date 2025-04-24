#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, x;

    freopen("bai37.inp", "r", stdin);
      freopen("bai37.out", "w", stdout);
    getline(cin, s);
    int skt = s.size();

    bool kt_hoa = true;
    for (int i = 0; i < skt; i++) {
        if (s[i] == ' ' && (i + 1 < skt) &&s[i + 1] == ' ' || s[i + 1] == '.' || s[i + 1] == '?' || s[i + 1] == '!' || s[i + 1] == ',' || s[i + 1] == ';' || s[i + 1] == ':') continue;
        if ((s[i] == '.' || s[i] == '?' || s[i] == '!' || s[i] == ':') && i + 1 < skt) {
            x += s[i];
            if (s[i + 1] != ' ') {
                x += ' ';
}
            kt_hoa = true;         }
            else if ((s[i] == ',' || s[i] == ';') && i + 1 < skt) {
            x += s[i];
            if (s[i + 1] != ' ') {
                x += ' ';            }
        } else if (kt_hoa && isalpha(s[i])) {
            x += toupper(s[i]);
            kt_hoa = false;}
            else {
            x += tolower(s[i]);
        }
    }
    if (!x.empty()&&x.back()==' '){
        x.pop_back();
    }
      cout << x;

    return 0;}



