///José Luiz da Silva Neto
///Computer Engineering - Federal University of Itajubá
#include <bits/stdc++.h>
 
using namespace std;
 
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define F first
#define S second
 
typedef pair <int,int> pii;
typedef vector <int> vi;
typedef vector < pii > vii;
typedef long long ll;
typedef unsigned long long ull;	

#define D(x) cout << #x << " = " << x << endl;

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

int cnt[300];

int main() {
	string s1;
	getline(cin,s1);
	for(int i = 0;i < s1.size();i++) {
		if(s1[i] != ' ')
			cnt[s1[i]]++;
	}
	string s2;
	getline(cin,s2);
	bool flag = true;
	for(int i = 0;i < s2.size();i++) {
		if(s2[i] != ' ') {
			if(cnt[s2[i]] <= 0)
				flag = false;
			cnt[s2[i]]--;
		}
	}
	if(flag)
		puts("YES");
	else
		puts("NO");
	return 0;
}