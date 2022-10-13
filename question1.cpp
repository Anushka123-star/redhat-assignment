#include<bits/stdc++.h>
using namespace std;
class StringManipuLation {
    public:
    string removeDuplicate(string s) {
        string temp ="";
        temp+=s.at(0);
    
        for(int i=1; i<s.length(); i++) {
            if(!(temp.find(s[i]))< temp.length())
               temp+=s.at(i);
        }
        return temp;
    }
    bool operation(string m, string n) {
        //function that compares two strings.
        string s1,s2;
        s1= removeDuplicate(m);
        s2= removeDuplicate(n);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        // now comparing these two strings
        if(s1==s2) {
            return true;
        }
            else {
            return false;
        }
    }
};
int main() {
    string s1, s2;
    StringManipuLation str;
            cin >> s1 >> s2;
    bool res = str.operation(s1,s2);
    if(res!=0) {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    return 0;
}
