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

vi lucky;

bool islucky(int x) {
	while(x) {
		if(x%10 != 4 && x%10 != 7)
			return false;
		x/=10;		
	}
	return true;
}

void calc() {
	for(int i = 1;i <= 1000;i++) {
		if(islucky(i))
			lucky.pb(i);
	}
}

int main() {
	int n;
	cin >> n;
	calc();
	for(int i = 0;i < lucky.size();i++) {
		if(n%lucky[i] == 0) {
			puts("YES");
			return 0;
		}
	}
	puts("NO");
	return 0;
}