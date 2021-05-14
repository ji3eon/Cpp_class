#include <iostream>
using namespace std;

typedef struct Node {
	int value;
	struct Node* next;
};

class primary {
private:
	Node* head = NULL;
public:
	void print(Node *head) { //전체 원소 출력
		for (Node* p = head; p != NULL; p = p->next)
			cout << p->value;
		cout << "\n";
	}
	void push_back(Node *tail, int value) { //맨 뒤에 추가
		if (next == NULL) { //next가 NULL이면 노드의 마지막
			head = (Node*)malloc(sizeof(Node)); //새로운 노드 생성
			Node* next = Node;
		}
		else {

		}
		Node* p = (Node*)malloc(sizeof(Node));
		p->value = value;
		p->next = p;
	}
	void pop() { //맨 뒤에 삭제

	}
	void push_front() { //맨 앞에 추가 (예외처리 가능하도록 - 이중 연결시에만)

	}
	void pop_front() { //맨 앞에 삭제 (예외처리 가능하도록 - 이중 연결시에만)

	}
};

class Single_Linked_List : public primary {

};

class Single_Circular_Linked_List : public primary {

};

class Double_Linked_List : public primary {

};

class Double_Circular_Linked_List : public primary {

};

int main() {
	int n;
	cin >> n;

	switch (n) {
		if (n == 1) {
			Single_Linked_List SLL
		}
		else if (n == 2) {

		}
		else if (n == 3) {

		}
		else {

		}
	}
}