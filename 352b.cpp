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

vi resp[100010];
vii resp2;

int main() {
	int n;
	scanf("%d",&n);
	//pii v[n];
	set <int> aux;
	for(int i = 0;i < n;i++) {
		int tt;
		scanf("%d",&tt);
		resp[tt].pb(i);
		aux.insert(tt);
	}

	for(set <int> :: iterator it = aux.begin();it != aux.end();it++) {
		if(resp[*it].size() == 1)
			resp2.pb(mp(*it,0));		
		else {
			bool flag = true;
			int dif = resp[*it][1] - resp[*it][0];
			for(int i = 1;i < resp[*it].size();i++) {
				if(dif != resp[*it][i]-resp[*it][i-1]) {
					flag = false;
					break;
				}
			}
			if(flag)
				resp2.pb(mp(*it,dif));
		}
	}
	printf("%d\n",(int)resp2.size());
	for(int i = 0;i < resp2.size();i++) {
		printf("%d %d\n",resp2[i].F,resp2[i].S);
	}
	return 0;
}