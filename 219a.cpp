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

int cnt[300];

int main() {
	int k;
	cin >> k;
	string x;
	cin >> x;
	for(int i = 0;i < x.size();i++) {
		cnt[x[i]-'a']++;
	}
	for(int i = 0;i < 300;i++) {
		if(cnt[i]%k != 0) {
			puts("-1");
			return 0;
		}
		cnt[i]/=k;
	}
	for(int i = 0;i < k;i++) {
		for(int j = 0;j < 300;j++) {
			for(int k = 0;k < cnt[j];k++) {
				printf("%c",j+'a');
			}
		}
	}
	printf("\n");
	return 0;
}