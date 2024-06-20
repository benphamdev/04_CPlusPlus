#include<bits/stdc++.h>

using namespace std;
using  ll = long long;

#define ms(s, n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) !=t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define FORd(i, a, b) for(int i=(a)-1;i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef unsigned long long ull;
typedef long double ld;
typedef pair <int,int> pi;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <pi> vpi;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;

//A WINNER WHO NEVER GIVE UP !!!
//NO PAIN, NO GAIN !!!

//struct node{
//	int data;
//	node* left;
//	node* right;
//};
//
//node *makeNode(int x){
//	node *newNode = new node;
//	newNode->data = x;//(*newNode).data = x;
//	newNode->left = NULL;
//	newNode->right = NULL;
//	return newNode;
//}

struct node {
	int val;
	node *left;
	node *right;
	node(int x) {
		val = x;
		left = right = NULL;
	}
};

void makeNode(node *root, int u, int v, char c) {
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c) {
	if(root == NULL) return;
	if(root->val == u) {
		makeNode(root, u, v, c);
	} else {
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}

void inorder(node *root) {
	if(root == NULL) return;
	inorder(root->left);
	cout << root->val << " " ;
	inorder(root->right);
}
//6
//1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R
void preorder(node *root) {
	if(root != NULL) {
		cout << root->val << ' ';
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(node *root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		cout << root->val << " ";
	}
}
void test() {
//	node *root = makeNode(1);
//	root->left = makeNode(2);
//	root->right = makeNode(3);
//	root->left->left = makeNode(4);
//	root->left->right = makeNode(5);
	node *root = NULL;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int u, v;
		char c;
		cin >> u >> v >> c;
		if(root == NULL) {
			root = new node(u);
			makeNode(root, u, v, c);
		} else {
			insertNode(root, u, v, c);
		}
	}
	postorder(root);
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
//	#ifndef MOTIVATION
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
	test();
}

//6
//1 2 L 1 3 R 2 4 L 2 5 R 3 6 L 3 7 R
