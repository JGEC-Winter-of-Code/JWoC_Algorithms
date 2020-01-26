
#include <iostream>
#include <cstdio>
#include <string>
#include <sstream> 
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <ctime>
#include <cassert>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define SZ(x) ((int)(x.size()))
#define fi first
#define se second
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) for(int (i)=1;(i)<=(n);++(i))
#define IN(x,y) ((y).find((x))!=(y).end())
#define ALL(t) t.begin(),t.end()
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
#define REPD(i,a,b) for(int (i)=(a); (i)>=(b);--i)
#define REMAX(a,b) (a)=max((a),(b));
#define REMIN(a,b) (a)=min((a),(b));
#define DBG cerr << "debug here" << endl;
#define DBGV(vari) cerr << #vari<< " = "<< (vari) <<endl;

typedef long long ll;

const int INF = 1e9;

const int MINV = 1;
const int MAXV = 10;

vector<vi> magic_squares;

void print_magic_square(vi v)
{
    FOR(i, 3)
    {
        FOR(j, 3)
        {
            cout << v[3 * i + j] << " ";
        }
        cout << endl;
    }
}
bool is_magic_square(vi v)
{
    int a[3][3];
    FOR(i, 3)
    {
        FOR(j, 3)
        {
            a[i][j] = v[3 * i + j];
        }
    }
    int s = 0;
    FOR(j, 3) s += a[0][j];
    REP(i, 1, 2)
    {
        int tmp = 0;
        FOR(j, 3) tmp += a[i][j];
        if(tmp != s) return 0;
    }
    FOR(j, 3)
    {
        int tmp = 0;
        FOR(i, 3) tmp += a[i][j];
        if(tmp != s) return 0;
    }
    int tmp = 0;
    FOR(i, 3) tmp += a[i][i];
    if(tmp != s) return 0;
    tmp = 0;
    FOR(i, 3) tmp += a[2 - i][i];
    if(tmp != s) return 0;

    return 1;
}

void find_magic_squares()
{
    vi v(9);
    FOR(i, 9) v[i] = i + 1;
    do
    {
        if(is_magic_square(v))
        {
            magic_squares.pb(v);
        }
    } while(next_permutation(ALL(v)));
}

int diff(vi a, vi b)
{
    int res = 0;
    FOR(i, 9) res += abs(a[i] - b[i]);
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    vi v(9);
    FOR(i, 9) cin >> v[i];
    int res = INF;
    find_magic_squares();
    FOR(i, magic_squares.size())
    {
        //print_magic_square(magic_squares[i]);
        //cout << "########" << endl;
        REMIN(res, diff(v, magic_squares[i]));
    }

    cout << res << endl;
}

