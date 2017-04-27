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
	int space = 2*n;
	bool flag = false;
	for(int i = 0;i <= n;i++) {
		for(int j = 0;j < space;j++)
			printf(" ");
		if(flag)
			space += 2;
		else
			space -= 2;
		if(space == 0)
			flag = true;
		int j = 0;
		bool flag1 = false;
		if(i == 0)
			printf("0\n");
		else {
			while(1) {
				printf("%d",j);
				if(j == 0 && flag1)
					break;
				else
					printf(" ");
				if(j == i)
					flag1 = true;
				if(!flag1)
					j++;
				else
					j--;
				//getchar();
			}
			printf("\n");
		}
	}
	for(int i = n-1;i >= 0;i--) {
		for(int j = 0;j < space;j++)
			printf(" ");
		if(flag)
			space += 2;
		else
			space -= 2;
		if(space == 0)
			flag = true;
		int j = 0;
		bool flag1 = false;
		if(i == 0)
			printf("0\n");
		else {
			while(1) {
				printf("%d",j);
				if(j == 0 && flag1)
					break;
				else
					printf(" ");
				if(j == i)
					flag1 = true;
				if(!flag1)
					j++;
				else
					j--;
				//getchar();
			}
			printf("\n");
		}
	}
	return 0;
}