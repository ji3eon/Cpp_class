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
	void print(Node *head) { //��ü ���� ���
		for (Node* p = head; p != NULL; p = p->next)
			cout << p->value;
		cout << "\n";
	}
	void push_back(Node *tail, int value) { //�� �ڿ� �߰�
		if (next == NULL) { //next�� NULL�̸� ����� ������
			head = (Node*)malloc(sizeof(Node)); //���ο� ��� ����
			Node* next = Node;
		}
		else {

		}
		Node* p = (Node*)malloc(sizeof(Node));
		p->value = value;
		p->next = p;
	}
	void pop() { //�� �ڿ� ����

	}
	void push_front() { //�� �տ� �߰� (����ó�� �����ϵ��� - ���� ����ÿ���)

	}
	void pop_front() { //�� �տ� ���� (����ó�� �����ϵ��� - ���� ����ÿ���)

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