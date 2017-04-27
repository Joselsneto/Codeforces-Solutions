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

int cnt[4];
int move[4]; 

int main() {
	map <char,int> mapa;
	mapa['N'] = 0;
	mapa['S'] = 1;
	mapa['E'] = 2;
	mapa['W'] = 3;
	int t,x,y,xx,yy;
	cin >> t >> x >> y >> xx >> yy;
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++) {
		cnt[mapa[s[i]]]++;
	}
	yy -= y;
	xx -= x;
	if(xx > 0)
		move[2] = xx;
	if(xx < 0)
		move[3] = -xx;
	if(yy > 0)
		move[0] = yy;
	if(yy < 0)
		move[1] = -yy;
	bool flag = true;
	for(int i = 0;i < 4;i++)
		if(move[i] > cnt[i])
			flag = false;
	if(!flag)
		printf("-1\n");
	else {
		int resp = 1;
		for(int i = 0;i < s.size();i++) {
			if(move[mapa[s[i]]] > 0) {
				move[mapa[s[i]]]--;
				resp = i+1;
			}
		}
		printf("%d\n",resp);
	}
	return 0;
}