#include <bits/stdc++.h>
using namespace std;

void solve(queue<int> &q, string chiakhoa, int giatri = 0) {
	if(chiakhoa == "PUSH") {
		q.push(giatri);
	}
	else if(chiakhoa == "POP") {
		if(!q.empty()) q.pop();
	}
	else if(chiakhoa == "PRINTFRONT") {
		if(!q.empty()) cout << q.front() << endl;
		else cout << "NONE" << endl;
	}
}

int main() {
	int n; cin >> n;
	queue<int> q;
	for(int i = 0; i < n; i++) {
		string chiakhoa;int giatri = 0; cin >> chiakhoa;
		if(chiakhoa == "PUSH") cin >> giatri;
		solve(q, chiakhoa, giatri);
	}
}
