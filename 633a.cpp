///José Luiz da Silva Neto
///Computer Engineering - Federal University of Itajubá
#include <bits/stdc++.h>
 
using namespace std;
 
#define INF 0x3F3F3F3F
#define pb push_back
#define mk make_pair
#define F first
#define S second
 
typedef pair <int,int> pi;
typedef vector <int> vi;
typedef vector < pi > vii;
typedef long long ll;
typedef unsigned long long ull;	

ll v[2],p[2],peso;

int mochila_repeat() {
    int k[peso + 1];
    memset(k,0,sizeof(k));

    for(int w = 1; w <= peso; w++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(p[j] <= w)
            {
                if(k[w - p[j]] + v[j] > k[w])
                    k[w] = k[w - p[j]] + v[j];
            }
        }
    }
    return k[peso];
}

int main() {
	scanf("%lld %lld %lld",&v[0],&v[1],&peso);
	p[0] = v[0];
	p[1] = v[1];
	ll d = mochila_repeat();
	if(d == peso)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}