#include<bits/stdc++.h>

using namespace std;

struct Student {
	string name, id;
	double gpa;
};

struct SV {
	Student s;
	SV *next;
};

typedef struct SV* sv;

sv makeNode() {
	Student s;
	cout << "Nhap thong tin sinh vien : \n";
	cout << "Nhap ID : ";
	cin >> s.id;
	cout << "Nhap ten : ";
	cin.ignore();
	getline(cin, s.name);
	cout <<"Nhap gpa : ";
	cin >> s.gpa;
	sv tmp = new SV();
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

bool empty(sv a) {
	return a == NULL;
}

void in(Student s) {
	cout << "ID : " << s.id << "\n";
	cout <<"Ho ten : " << s.name << "\n";
	cout << "GPA : " << fixed << setprecision(2) << s.gpa << "\n";
}

void inds(sv a) {
	cout << "Danh sach sinh vien : \n";
	cout << "----------------------\n";
	while(a != nullptr) {
		in(a->s);
		a = a->next;
	}
	cout << "\n";
}

int Size(sv a) {
	int cnt = 0;
	while(a != NULL) {
		cnt++;
		a = a->next;
	}
	return cnt;
}

void insertFirst(sv &a) {
	sv tmp = makeNode();
	if(a == NULL) {
		a = tmp;
	} else {
		tmp->next = a;
		a = tmp;
	}
}

void insertLast(sv &a) {
	sv tmp = makeNode();
	if(a == NULL) {
		a = tmp;
	} else {
		sv p = a;
		while(p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}


void insert(sv &head, int index) {
	int n = Size(head);
	if(index < 1 || index > n + 1) {
		cout << "vi tri chen khong hop le";
		return;
	}
	if(index == 1) {
		insertFirst(head);
		return;
	}
	sv temp = head;
	for(int i = 1; i <= index - 2; i++) {
		temp = temp->next;
	}
//	temp : k - 1
	sv newNode = makeNode();
	newNode->next = temp->next;
	temp->next = newNode;
}

void popFront(sv &head) {
	if(head == nullptr) return;
	sv tmp = head;
	head = head->next;
	delete tmp;
}

void popBack(sv &head) {
	if(head == NULL) return;
	sv tmp = head;
	if(tmp->next == nullptr) {
		head = nullptr;
		delete tmp;
		return;
	}
	while(tmp->next->next != nullptr) {
		tmp = tmp->next;
	}
	sv last = tmp->next;
	tmp->next = nullptr;
	delete last;
}

void deleteMid(sv &a, int pos) {
	if(pos <= 0 || pos > Size(a)) return;
	sv  prev = NULL, p = a;
	for(int i = 1; i < pos; i++) {
		prev = p;
		p = p->next;
	}
	if(prev == NULL) {
		a = NULL;
	} else {
		prev->next = p->next;
	}
}

void sortList(sv &a) {
	for(sv p = a; p->next != NULL; p = p->next) {
		sv min = p;
		for(sv q = p->next; q != NULL; q = q->next) {
			if(q->s.gpa < min->s.gpa) {
				min = q;
			}
		}
		Student tmp = min->s;
		min->s = p->s;
		p->s = tmp;
	}
}

int main() {
	sv head = NULL;

	while(1) {
		cout << "--------------------------------\n";
		cout << "1. chen sinh vien vao dau \n";
		cout << "2. chen sinh vien vao cuoi \n";
		cout << "3. chen sinh vien vao giua \n";
		cout << "4. xoa dau \n";
		cout << "5. xoa cuoi \n";
		cout << "6. xoa giua \n";
		cout << "7. duyet \n";
		cout << "8.sap xep sinh vien trong  \n";
		cout  << "0. thoat \n";
		cout << "--------------------------------\n";
		int op;
		cout << "nhap lua chon : ";
		cin >> op;
		if(op == 1) {
			insertFirst(head);
		} else if(op == 2) {
			insertLast(head);
		} else if(op == 3) {
			int k;
			cout << "Nhap k = ";
			cin >> k;
			insert(head, k);
		} else if(op == 4) {
			popFront(head);
		} else if(op == 5) {
			popBack(head);
		} else if(op == 6) {
			int k;
			cout << "Nhap k = ";
			cin >> k;
			deleteMid(head, k);
		} else if(op == 7) {
			inds(head);
		} else if(op == 8) {
			sortList(head);
		} else if(op == 0) break;
	}
}

