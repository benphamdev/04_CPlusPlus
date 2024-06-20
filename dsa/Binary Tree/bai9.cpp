#include <bits/stdc++.h>

using namespace std;
using  ll = long long;

#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define FORd(i, a, b) for(int i=(a)-1;i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

typedef unsigned long long ull;
typedef long double ld;
typedef pair <int,int> pi;
typedef pair <ll, ll> pll;
typedef vector <int> vi;
typedef vector <ll, ll> vll;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;

pi path[] = {{-1, 0}, {0, -1},  {1, 0}, {0, 1},
	{-1, -1}, {-1, 1}, {1, -1}, {1, 1}
};
void gotoFUTURE();

// A WINNER IS A DREAMER WHO NEVER GIVES UP !!!

struct node {
	int data;
	node *left;
	node *right;
	node(int x) {
		data = x;
		left = right = nullptr;
	}
};

void makenode(node *root, int u, int v, char c) {
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}

void insertnode(node *root, int u, int v, char c) {
	if(root == nullptr) return ;
	if(root->data == u) {
		makenode(root, u, v, c);
	} else {
		insertnode(root->left, u, v, c);
		insertnode(root->right, u, v, c);
	}
}

void spiralOrder(node *root) {
	stack<node*> s1, s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()) {
		while(!s1.empty()) {
			node *top = s1.top();
			s1.pop();
			cout << top->data << " ";
			if(top->right != NULL) s2.push(top->right);
			if(top->left != NULL) s2.push(top->left);
		}
		
		while(!s2.empty()) {
			node *top = s2.top();
			s2.pop();
			cout << top->data << " ";
			if(top->left != NULL) s1.push(top->left);
			if(top->right != NULL) s1.push(top->right);
		}
	}
}

void ex() {
	int n;
	cin >> n;
	node *root = nullptr;
	for(int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		char c;
		cin >> c;
		if(root == nullptr) {
			root = new node(u);
			makenode(root, u, v, c);
		} else insertnode(root, u, v, c);
	}
	spiralOrder(root);
}

int32_t main() {
	cin.tie(0) -> sync_with_stdio(0);
	cout << fixed << setprecision(15);

	bool MULTITEST = 0;

	int OLPChuyenTin2023 = 1;
	if (MULTITEST)
		cin >> OLPChuyenTin2023;
	while (OLPChuyenTin2023 --> 0) {
		gotoFUTURE();
	}
	return 0;
}

void gotoFUTURE() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
#ifndef MOTIVATION
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ex();
}