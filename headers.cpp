
/*
	ॐ सर्व मंगल मांगल्ये,
	शिवे सर्वार्थ साधिके|
	शरण्ये त्र्यंबके गौरी,
	नारायणि नमोऽस्तुते।।
	(जय दुर्गे माँ)

	सरस्वति महाभागे विद्ये कमललोचने।
	विद्यारूपे विशालाक्षी विद्यां देहि नमोस्तुते||
	(जय सरस्वती माँ)

	ॐ नमो भगवते वासुदेवाय नमः||
	(जय विष्णु जी)

	ॐ त्र्यम्बकं यजामहे,
	सुगन्धिं पुष्टिवर्धनम् ।
	उर्वारुकमिव बन्धनान्,
	मृत्योर्मुक्षीय मामृतात् ॥
	(जय शिव जी)

	Bhagavad Gita
	कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
    मा कर्मफलहेतुर्भूर्मा ते सङ्गो||
	(कर्म पर ही तुम्हारा अधिकार है, कर्म के फलों में कभी नहीं... 
	इसलिए कर्म को फल के लिए मत करो।)

	मय्येव मन आधत्स्व मयि बुद्धिं निवेशय ।
	निवसिष्यसि मय्येव अत ऊर्ध्वं न संशयः ॥
	(अपने मन को केवल मुझ पर स्थिर करो और अपनी बुद्धि मुझे समर्पित कर दो।
	इस प्रकार से तुम सदैव मुझ में स्थित रहोगे। इसमें कोई संदेह नहीं हैं।)

	
*/

/* 
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
						Author: Keshav Bhalotia
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 */
#include <bits/stdc++.h>
using namespace std;

typedef  long long int lli;
typedef long long ll;
typedef  pair<int,int> pii;
typedef  pair<lli,lli> plli;
typedef  vector<int> vi;
typedef  vector<lli> vlli;
typedef  vector<plli,plli> vplli;
typedef vector<string> vs;
#define PI  3.141592653589
typedef   vector<pii> vpii;
typedef   vector<vlli>  vvlli;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define INF 	1e18
#define MOD 	1000000007
#define MOD1	 998244353
#define INF 	1e18
#define nline 	"\n"
#define pb 		push_back
#define ppb 	pop_back
#define ff 		first
#define ss 		second
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define tin(x) for(auto &i:x) cin>>i;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m

vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/*...............................................................
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
void google(int t) {cout << "Case #" << t << ": ";}
.....................................................*/

void solve(){
    
	lli n;
	cin>>n;


   


    cout<<nline;

}

signed main(){
	fastio();
	int t=1;
	cin>>t;
	for(int i=1;i<=t;i++){
        // cout<<"t = "<<i <<' ';
		solve();
	}
}
