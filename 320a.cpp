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

int main() {
	string x;
	cin >> x;
	bool flag = true;
	bool flag1 = false;
	int cnt = 0;
	for(int i = 0;i < x.size();i++) {
		if(x[i] == '1') {
			cnt = 0;
			flag1 = true;
			continue;
		}
		if(x[i] == '4' && flag1) {
			cnt++;
		}
		if(x[i] == '4' && !flag1) {
			flag = false;
		}
		if(cnt > 2)
			flag = false;
		if(x[i] != '4' && x[i] != '1')
			flag = false;
	}	
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}