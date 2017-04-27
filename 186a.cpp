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
	string x,y;
	cin >> x >> y;
	if(x.size() != y.size()) puts("NO");
	else {
		string s1,s2;
		int cnt = 0;
		for(int i = 0;i < x.size();i++)
			if(x[i] != y[i]) {
				s1 += x[i];
				s2 += y[i];
				cnt++;
			}
			if(cnt == 2 && s1[0] == s2[1] && s2[0] == s1[1])
				puts("YES");
			else
				puts("NO");
	}
	return 0;
}