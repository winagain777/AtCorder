#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1000000007;
const long long INF = 1LL << 60;
 
int main()
{
    ll n, m;
    cin >> n >> m;
 
    for (int a = 0; a <= n; a++)
    {
        ll nm = m - 2 * a;
        ll nn = n - a;
        //以下鶴亀算
        nm = nm - 3 * nn;
        ll c = nm / 1;
        ll b = nn - c;
        if (0 <= c && c <= nn && 0 <= b && b <= nn)
        {
            cout << a << " " << b << " " << c << endl;
            return 0;
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}
