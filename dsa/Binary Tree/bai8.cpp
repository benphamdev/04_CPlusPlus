#include <bits/stdc++.h>
// C
#include <climits>
#include <cmath>
#include <cstring>
#include <ctime>
// C++
#include<algorithm>
#include<bitset>
#include<complex>
#include<deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

using namespace std;
using  ll = long long;

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

void levelOrder(node *root) {
	queue<node*> q;
	q.push(root);
	cout << root->data << " ";
	while (!q.empty()) {
		node *top = q.front();
		q.pop();
		if(top->left != NULL) {
			q.push(top->left);
			cout << top->left->data << " ";
		}
		if(top->right != NULL) {
			q.push(top->right);
			cout << top->right->data  << " ";
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
	levelOrder(root);
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