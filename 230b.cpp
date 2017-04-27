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
#define pn printf("\n");

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

bitset <1000010> check;
set <ll> ans;

void crivo() {
	ans.insert(4);
	for(ll i = 3;i <= 1000010;i+=2) {
		if(!check[i]) {
			ans.insert(i*i);
			for(ll j = i*i;j <= 1000010;j+=i)
				check[j] = true;
		}
	}
}

int main() {
	crivo();
	int n;
	cin >> n;
	while(n--) {
		ll aux;
		cin >> aux;
		set <ll> :: iterator it = ans.lower_bound(aux);
		if(*it == aux)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}