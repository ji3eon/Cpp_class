#include <iostream>
using namespace std;

class Node {
private:
	int value;
	Node* next = NULL;
	Node* head = NULL;
	Node* tail = NULL;

public: 
	void print(Node *head) { //��ü ���� ���
		for (Node* p = head; p != NULL; p = p->next)
			cout << p->value<<" -> ";
		cout << "\n";
	}
	void push_back(Node *tail, int value) { //�� �ڿ� �߰�
		Node* p = (Node*)malloc(sizeof(Node)); //���ο� ��� ����
		p->value = value; //���� �ְ�
		if (head == NULL) { //head�� NULL�̸� ������ ��� ���� -> ��� ����
			Node* head = p;
		}
		else { //head�� NULL�� �ƴϸ�(=��尡 �ϳ��� ������ ���)
			Node* next = p; //next�� ���� �������� ������ ��带 ����Ű���� ��
		}
		Node* tail = p; //tail�� �׻� ���Ḯ��Ʈ ������ ��带 ����Ű���� ����
	}
	void pop(Node *tail,int value) { //�� �ڿ� ����
		Node* delp;
		if (tail != NULL) { //��尡 �ϳ��� ������ ���
			delp = tail;
			free(delp);
			tail=
		}
		else {
			cout << "���̻� ������ ���� �����ϴ�.";
		}
	}
	
};

class Single_Linked_List : public Node {

};

class Single_Circular_Linked_List : public Node {

};

class Double_Linked_List : public Node{
	virtual void push_front(Node* front,int value) { //�� �տ� �߰� 
		Node* p = (Node*)malloc(sizeof(Node)); //���ο� ��� ����
		p->value = value; //FIXME : value�� private���� ����Ǿ��־ ���� �ʿ�

	}
	virtual void pop_front() { //�� �տ� ���� 

	}
};

class Double_Circular_Linked_List : public Node{
	virtual void push_front() { //�� �տ� �߰�

	}
	virtual void pop_front() { //�� �տ� ����

	}
};

int main() {
	int n;
	cout<<"����_������ 1��"
	cin >> n;


	
	switch (n) {
		int num;
		if (n == 1) {
			cout << "��ü���� ����� 1��" << "\n�ǵڿ� �߰��� 2��" << "\n�ǵ� ������ 3��" << "�� �����ּ���";
			num=
			Single_Linked_List SLL;
		}
		else if (n == 2) {

		}
		else if (n == 3) {

		}
		else {

		}
	}
}