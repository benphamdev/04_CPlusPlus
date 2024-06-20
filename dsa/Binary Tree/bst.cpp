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

struct node {
	int val;
	node *left;
	node *right;
	node(int x) {
		val = x;
		left = right = NULL;
	}
};

//void makeNode(node *root, int u, int v, char c) {
//	if(c == 'L') root->left = new node(v);
//	else root->right = new node(v);
//}

node *makeNode(node *root, int key){
	return new node(key);
}

bool search(node *root, int key) {
	if(root == NULL) return false;
	if(root->val == key) return true;
	else if(root->val < key)
		return search(root->right, key);
	else
		return search(root->left, key);
}

node *insert(node *root, int key){
	if(root == NULL){
		return makeNode(root, key);
	}
	if(key < root->val){
		root->left = insert(root->left, key);
	}
	else{
		root->right = insert(root->right, key);
	}
	return root;
}

node *minNode(node *root){
	node *temp = root;
	while(temp != NULL && temp->left != NULL){
		temp = temp->left;
	}
	return temp;
}

node *deleteNode(node *root, int key){
	if(root == NULL) return root;
	if(key < root->val){
		root->left = deleteNode(root->left, key);
	}
	else if(key > root->val){
		root->right = deleteNode(root->right, key);
	}
	else{
		if(root->left == NULL){
			node *temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right = NULL){
			node *temp = root->left;
			delete root;
			return temp;
		}
		else{
			node *tmp = minNode(root);
			root->val = tmp->val;
			root->right = deleteNode(root->right, tmp->val);
		}
	}
}

void inorder(node *root){
	if(root != NULL){
		inorder(root->left);
		cout << root->val << " ";
		inorder(root->right);
	}
}

void test() {
	node *root = NULL;
//	int n;
//	cin >> n;
//	for(int i = 0; i < n; i++) {
//		int u, v;
//		char c;
//		cin >> u >> v >> c;
//		if(root == NULL) {
//			root = new node(u);
////			makeNode(root, u, v, c);
//			makeNode(root, v);
//		} else {
////			insertNode(root, u, v, c);
//			insert(root, v);
//		}
//	}

	root = insert(root, 50); 
  
    // Inserting value 30 
    insert(root, 30); 
  
    // Inserting value 20 
    insert(root, 20); 
  
    // Inserting value 40 
    insert(root, 40); 
  
    // Inserting value 70 
    insert(root, 70); 
  
    // Inserting value 60 
    insert(root, 60); 
  
    // Inserting value 80 
    insert(root, 80); 
  
    // Print the BST 
    inorder(root);
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	test();
}

//6
//50 30 L 50 70 R 30 20 L 30 40 R 70 60 L 70 80 R
