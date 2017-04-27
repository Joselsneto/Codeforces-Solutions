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
	string x,y,z;
	cin >> x >> y >> z;
	bool can[(int)z.size()];
	memset(can,false,sizeof can);
	for(int i = 0;i < x.size();i++) {
		bool flag = false;
		for(int j = 0;j < z.size();j++) { 
			if(x[i] == z[j] && !can[j]) {
				can[j] = true;
				flag = true;
				break;
			}
		}
		if(!flag) {
			printf("NO\n");
			return 0;
		}

	}
	for(int i = 0;i < y.size();i++) {
		bool flag = false;
		for(int j = 0;j < z.size();j++) { 
			if(y[i] == z[j] && !can[j]) {
				can[j] = true;
				flag = true;
				break;
			}
		}
		if(!flag) {
			printf("NO\n");
			return 0;
		}

	}
	for(int i = 0;i < z.size();i++) 
		if(!can[i]) {
			printf("NO\n");
			return 0;
		}
	printf("YES\n");
	return 0;
}