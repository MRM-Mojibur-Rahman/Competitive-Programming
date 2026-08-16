#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    int n;
    cin  >> n;
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 1; i <= 9; i++) {
    	int idx = -1;
    	for(int j = n - 1; j >= 0; j--) {
    		if(s[j] - '0' == i) {
    			idx = j;
    			break;
    		}
    	}

    	if(idx == -1) {
    		continue;
    	}

    	bool p = false, o = false;
    	for(int j = 0; j < idx; j++) {
    		if(s[j] == 'p') {
    			p = true;
    		} if(s[j] == 'o' && p == true) {
    			o = true;
    		}
    	}


    	if(p && o) {
    		cnt++;
    	} 
    }

    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}