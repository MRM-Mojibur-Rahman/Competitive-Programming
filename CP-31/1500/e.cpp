#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n),b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> segments;


    for(int i = 1; i < n; i++) {
    	if(b[i]!=b[i - 1])
    	{
    		segments.push_back(i);
    	}
    }
 	
 	vector<int>correct;
	int last = 0 ;
	segments.push_back(n);
	for(auto it:segments)
	{

		bool ok = true;
		while(last<it)
		{
			if(b[last]!=a[last]) ok = false;
			last++;
		}
		correct.push_back(ok);
	}

	int cnt = 0;
	int mx = 0;
	for(int i = 0; i< correct.size(); i++) {
		if(correct[i]==0)
		{
			cnt=0;
		} else {
			cnt++;
		}
		// cout << cnt << endl;
		mx = max(cnt, mx);
	}

	cout << correct.size() - mx << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}