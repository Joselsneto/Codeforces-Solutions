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
#define ps printf(" ");

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

int f(int x) {
	int res = 0;
	while(x) {
		res += x%10;
		x/=10;
	}
	return res;
}

int main() {
	string x;
	cin >> x;
	int som = 0;
	for(int i = 0;i < x.size();i++) 
		som += x[i] - '0';
	if(x.size() == 1)
		puts("0");
	else {
		int res = 1;
		while(1) {
			//printf("%d %d\n",som,f(som));
			if(som < 10)
				break;

			som = f(som);
			res++;
		}
		printf("%d\n",res);
	} 	
	return 0;
}