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

int cnt[101];

int main() {
	int n;
	int som = 0;
	cin >> n;
	bool flag = true;
	for(int i = 0;i < n;i++) {
		int aux;
		cin >> aux;
		cnt[aux]++;
		aux -= 25;
		if(aux == 0)
			continue;
		int a = aux/50;
		if(a <= cnt[50]) {
			cnt[50]-=a;
			aux-=a*50;
		}
		a = aux/25;
		if(a <= cnt[25]) {
			cnt[25]-=a;
			aux-=a*25;
		}
		if(aux != 0)
			flag = false;
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}