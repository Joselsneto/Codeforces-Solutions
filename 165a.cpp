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
	int n;
	cin >> n;
	pii p[n];
	for(int i = 0;i < n;i++) 
		scanf("%d %d",&p[i].F,&p[i].S);
	int resp = 0;
	for(int i = 0;i < n;i++) {
		bool r,l,u,d;
		r = l = u = d = false;
		for(int j = 0;j < n;j++) {
			if(i != j) {
				if(p[i].F > p[j].F && p[i].S == p[j].S)
					r = true;
				if(p[i].F < p[j].F && p[i].S == p[j].S)
					l = true;
				if(p[i].F == p[j].F && p[i].S > p[j].S) 
					u = true;
				if(p[i].F == p[j].F && p[i].S < p[j].S)
					d = true;
			}
		}
		//printf("%d %d %d %d\n",r,l,u,d);
		if(r && l && u && d)
			resp++;
	}	
	printf("%d\n",resp);
	return 0;
}