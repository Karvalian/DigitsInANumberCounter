#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define for(i, n) for(int i = 0; i<n; i++)

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);       
	int n;
	cin >> n;
	int a = n;
	int count = 0;
	cout << n.size() << endl;

	while(n>0){
		count++;
		a = n % 10;
		n = n / 10;

	}
	cout << count << endl;
}
