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
#define C(x) cout << "Chegou aqui " << x << endl;

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

int main() {
	int n;
	cin >> n;
	string x,y;
	for(int i = 0;i < n;i++) {
		char aux;
		cin >> aux;
		x.pb(aux);
	}	
	for(int i = 0;i < n;i++) {
		char aux;
		cin >> aux;
		y.pb(aux);
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	bool flag = true;
	for(int i = 0;i < n;i++) {
		if(x[i] <= y[i])
			flag = false;
	}
	if(flag) {
		puts("YES");
		return 0;
	}
	flag = true;
	for(int i = 0;i < n;i++) {
		if(x[i] >= y[i])
			flag = false;
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}