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
	string x;
	cin >> x;
	for(int i = 0;i < x.size();i++) {
		cnt[x[i]-'a']++;
	}
	int k = 0;
	
	for(int i = 0;i < 30;i++) {
		//printf("%d ",cnt[i]);
		if(cnt[i]&1)
			k++;
	}
	//printf("%d\n",k);
	if(k == 0)
		puts("First");
	else if(k == 1)
		puts("First");
	else {
		if(!(k&1))
			puts("Second");
		else
			puts("First");
	}
	return 0;
}