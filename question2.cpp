#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
    void subsequence(string str, string target) {
        int n= target.length(),m=str.length(),p,newtarget, f=0;
        string w="",ans="";
        char fr;
        for(int i=0; i<m-n; i+n) {
             int sum=0, num=0;
            w=str.substr(i,n);
            p=stoi(w);
            
            for(int j=i+n; j<m; j++) {
                char ch = str[j];
                num= ch - '0';
                sum += num;
            }
            if((p-sum)<100) {
                ans+=w;
                for(int j=i+n; j<m; j++) {
                    ans+="-";
                    ans+=str[j];
                    }
                    if( ((p-sum)+num) < 100)
                    {
                        ans[ans.length()-4]='+';
                        cout << ans << "\n";
                        return;
                    }
                }            
        }
    }
};

int main() {
	// your code goes here
	string str="123456789";
	string target="100";
	
	solution s1;
	s1.subsequence(str,target);
	return 0;
}
