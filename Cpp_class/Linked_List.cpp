#include <iostream>
using namespace std;

class Node {
private:
	int value;
	Node* next = NULL;
	Node* head = NULL;
	Node* tail = NULL;

public: 
	void print(Node *head) { //전체 원소 출력
		for (Node* p = head; p != NULL; p = p->next)
			cout << p->value<<" -> ";
		cout << "\n";
	}
	void push_back(Node *tail, int value) { //맨 뒤에 추가
		Node* p = (Node*)malloc(sizeof(Node)); //새로운 노드 생성
		p->value = value; //값을 넣고
		if (head == NULL) { //head가 NULL이면 생성된 노드 없음 -> 노드 생성
			Node* head = p;
		}
		else { //head가 NULL이 아니면(=노드가 하나라도 생성된 경우)
			Node* next = p; //next가 가장 마지막에 생성된 노드를 가리키도록 함
		}
		Node* tail = p; //tail은 항상 연결리스트 마지막 노드를 가리키도록 설정
	}
	void pop(Node *tail,int value) { //맨 뒤에 삭제
		Node* delp;
		if (tail != NULL) { //노드가 하나라도 생성된 경우
			delp = tail;
			free(delp);
			tail=
		}
		else {
			cout << "더이상 삭제할 노드는 없습니다.";
		}
	}
	
};

class Single_Linked_List : public Node {

};

class Single_Circular_Linked_List : public Node {

};

class Double_Linked_List : public Node{
	virtual void push_front(Node* front,int value) { //맨 앞에 추가 
		Node* p = (Node*)malloc(sizeof(Node)); //새로운 노드 생성
		p->value = value; //FIXME : value가 private으로 선언되어있어서 수정 필요

	}
	virtual void pop_front() { //맨 앞에 삭제 

	}
};

class Double_Circular_Linked_List : public Node{
	virtual void push_front() { //맨 앞에 추가

	}
	virtual void pop_front() { //맨 앞에 삭제

	}
};

int main() {
	int n;
	cout<<"단일_선형은 1번"
	cin >> n;


	
	switch (n) {
		int num;
		if (n == 1) {
			cout << "전체원소 출력은 1번" << "\n맨뒤에 추가는 2번" << "\n맨뒤 삭제는 3번" << "을 눌러주세요";
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