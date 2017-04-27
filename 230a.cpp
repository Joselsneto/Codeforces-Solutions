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
	int s,n;
	cin >> s >> n;
	pii atk[n];
	for(int i = 0;i < n;i++) {
		scanf("%d %d",&atk[i].F,&atk[i].S);
	}	
	sort(atk,atk+n);
	bool flag = true;
	for(int i = 0;i < n;i++) {
		if(s > atk[i].F)
			s += atk[i].S;
		else
			flag = false;
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}