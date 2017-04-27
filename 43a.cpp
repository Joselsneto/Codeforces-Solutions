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

map <string,int> mapa;

void f(string x) {
	if(mapa.count(x) == 0) {
		mapa.insert(mp(x,1));
	}
	else
		mapa[x]++;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		string x;
		cin >> x;
		f(x);
	}
	string resp;
	int aux = 0;
	for(map <string,int> :: iterator it = mapa.begin(); it != mapa.end();it++) {
		if(it->S > aux) {
			aux = it->S;
			resp = it->F;
		}
	}
	cout << resp << endl;
	return 0;
}