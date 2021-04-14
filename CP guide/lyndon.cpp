//// lyndon'
//
////apple
//
//apple
//eappl
//leapp
//pleap
//pplea
//
//
//#include <iostream>
//
//using namespace std;
//
//void duval(const string &s)
//{
//    int n = s.size();
//    for (int l = 0; l < n; )
//    {
//        int r = l, p = l + 1;
//        for (; r < n && s[r] <= s[p]; ++r, ++p)
//            if (s[r] < s[p]) r = l - 1;
//
//        while (l <= r)
//        {
//            cout << s.substr(l, p - r) << '\n';
//            l += p - r;
//        }
//    }
//}
//
//int main()
//{
//    string s;
//    cin >> s;
//    duval(s);
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;


vector<string> duval(string const& s) {
    int n = s.size();
    int i = 0;
    vector<string> factorization;
    while (i < n) {
        int j = i + 1, k = i;
        while (j < n && s[k] <= s[j]) {
            if (s[k] < s[j])
                k = i;
            else
                k++;
            j++;
        }
        while (i <= k) {
            factorization.push_back(s.substr(i, j - k));
            i += j - k;
        }
    }
    return factorization;
}


int main()
{
	
	vector<string>res;
	
	string s="mapisicle";
	
	res=duval(s);
	
	
	for(auto x:res)
	{
		cout<<x<<endl;
	}
}
