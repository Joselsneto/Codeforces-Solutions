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
	if(n&1) printf("-1\n");
	else {
		for(int i = 1;i <= n;i++) {
			if(i&1)
				printf("%d",i+1);
			else
				printf("%d",i-1);
			if(i!=n)
				printf(" ");
		}
		printf("\n");
	}	

	return 0;
}