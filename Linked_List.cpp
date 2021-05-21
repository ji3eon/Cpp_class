#include <iostream>
using namespace std;

class Node {
private:
	int value;
	Node* next;
	Node* prev; //이중 연결
public:
	Node() {
		value = 0;
		next = nullptr;
		prev = nullptr;
	}

	Node(int _value, Node* _next, Node* _prev = nullptr) {
		value = _value;
		next = _next;
		prev = _prev;
	}

	int getValue() {
		return this->value;
	}

	Node* getNext() {
		return this->next;
	}

	Node* getPrev() {
		return this->prev;
	}

	void setValue(int _value) {
		this->value = _value;
	}

	void setNext(Node* _next) {
		this->next = _next;
	}

	void setPrev(Node* _prev) {
		this->prev = _prev;
	}
};
	

class SingleLinkedList {
private:
	Node* head;
public:
	SingleLinkedList() { head = nullptr; }

	bool isEmpty() {
		return this->head == nullptr;
	}

	Node* createNode(int value) {
		return new Node(value, nullptr);
	}

	void push_back(int value) {
		Node* newNode = createNode(value);

		if (isEmpty()) {
			this->head = newNode;
		}
		else {
			for (Node* pNode = this->head; true; pNode = pNode->getNext()) {
				if (pNode->getNext() == nullptr) {
					pNode->setNext(newNode);
					break;
				}
			}
		}
	}

	void pop_back() {
		if (isEmpty()) {
			cout << "Head is empty" << '\n';
		}
		else {
			for (Node* pNode = this->head, *prev = nullptr; true; prev = pNode, pNode = pNode->getNext()) {
				if (pNode->getNext() == nullptr) {
					delete pNode;

					if (prev == nullptr)
						this->head = nullptr;
					else
						prev->setNext(nullptr);

					break;
				}
			}
		}
	}

	void print() {
		for (Node* pNode = this->head; pNode != nullptr; pNode = pNode->getNext())
			cout << pNode->getValue() << '\n';
	}
};

class SingleCircularLinkedList {
private:
	Node* head;
public:
	SingleCircularLinkedList() { head = nullptr; }

	bool isEmpty() {
		return this->head == nullptr;
	}

	Node* createNode(int value) {
		return new Node(value, nullptr);
	}

	void push_back(int value) {
		Node* newNode = createNode(value);

		if (isEmpty()) { //노드가 하나도 없을 때 
			this->head = newNode;
			newNode->setNext(head);
		}
		else { //노드가 하나라도 있을 때
			for (Node* pNode = this->head; true; pNode = pNode->getNext()) {
				if (pNode->getNext() == head) { //가장 마지막 노드에 도달
					pNode->setNext(newNode);
					newNode->setNext(head);
					break;
				}
			}
		}
	}

	void pop_back() {
		if (isEmpty()) {
			cout << "Head is empty" << '\n';
		}
		else {
			for (Node* pNode = this->head, *prev = nullptr; true; prev = pNode, pNode = pNode->getNext()) {
				if (pNode->getNext() == head) {
					if (prev == nullptr) {
						delete pNode;
					}
					else {
						prev->setNext(head);
						delete pNode;
					}
					break;
					
				}
			}
		}

	}

	void print() {
		Node* pNode;
		for ( pNode = this->head; (pNode->getNext()) != head; pNode = pNode->getNext())
			cout << pNode->getValue() << '\n';
		cout << pNode->getValue() << '\n';
	}
};

class DoubleLinkedList {
private:
	Node* head;
public:
	DoubleLinkedList() { head = nullptr; }

	bool isEmpty() {
		return this->head == nullptr;
	}

	Node* createNode(int value) {
		return new Node(value, nullptr, nullptr);
	}

	void push_back(int value) {
		Node* newNode = createNode(value);

		if (isEmpty()) {
			this->head = newNode;
			newNode->setNext(nullptr);
			newNode->setPrev(nullptr);
		}
		else {
			for (Node* pNode = this->head; true; pNode = pNode->getNext()) {
				if (pNode->getNext() == nullptr) {
					newNode->setPrev(pNode);
					newNode->setNext(nullptr);
					pNode->setNext(newNode);
					break;
				}
			}
		}
	}
	void pop_back() {
		if (isEmpty()) {
			cout << "Head is empty" << '\n';
		}
		else {
			for (Node* pNode = this->head; true; pNode = pNode->getNext()) {
				if (pNode->getNext() == nullptr) {
					if (pNode == head) { delete pNode; }
					else {
						pNode->getPrev()->setNext(nullptr);
						delete pNode;
					}
					break;
				}
			}
		}
	}
	void push_front(int value) {
		Node* newNode = createNode(value);

		newNode->setNext(head);
		newNode->setPrev(nullptr);
		head = newNode;
	}
	void pop_front() {
		if (isEmpty()) {
			cout << "Head is empty" << '\n';
		}
		else {
			Node* pNode = this->head;
			head = pNode->getNext();
			(pNode->getNext())->setPrev(nullptr);
			delete pNode;
		}
	}
	void print() {
		for (Node* pNode = this->head; pNode != nullptr; pNode = pNode->getNext())
			cout << pNode->getValue() << '\n';
	}
};

class DoubleCircularLinkedList {
private:
	Node* head;
public:
	DoubleCircularLinkedList() { head = nullptr; }

	bool isEmpty() {
		return this->head == nullptr;
	}

	Node* createNode(int value) {
		return new Node(value, nullptr);
	}

	void push_back(int value) {
		Node* newNode = createNode(value);

		if (isEmpty()) {
			this->head = newNode;
			newNode -> setNext(head);
			newNode->setPrev(head);
		}
		else {
			for (Node* pNode = this->head; true; pNode = pNode->getNext()) {
				if (pNode->getNext() == head) {
					pNode->setNext(newNode);
					newNode->setPrev(pNode);
					newNode->setNext(head);
					break;
				}
			}
		}
	}
	void pop_back() {
		if (isEmpty()) {
			cout << "Head is empty" << '\n';
		}
		/*else {
			for (Node* pNode = this->head, *prev = nullptr; true; prev = pNode, pNode = pNode->getNext()) {
				if (pNode->getNext() == head) {
					if (prev == nullptr) { delete pNode; }
					else {
						pNode->getPrev()->setNext(head);
						delete pNode;
					}
				}break;
			}
		}*/
		else {
			for (Node* pNode = this->head; true; pNode = pNode->getNext()) {
				if(pNode-)
				else(pNode->getNext() == head) {
					pNode->getPrev()->setNext(head);
					delete pNode;
				}
			}
		}
	}
	void push_front(int value) {
		Node* newNode = createNode(value);

		if (isEmpty()) { //노드가 하나도 없을 때 
			this->head = newNode;
			newNode->setNext(head);
			newNode->setPrev(head);
		}
		else {
			newNode->setPrev(head->getPrev());
			newNode->setNext(head);
			head = newNode;
		}
	}
	void print() {
		Node* pNode;
		for (pNode = this->head; (pNode->getNext()) != head; pNode = pNode->getNext())
			cout << pNode->getValue() << '\n';
		cout << pNode->getValue() << '\n';

	}
	
};

int main() {
	/*SingleCircularLinkedList sdl;
	sdl.push_back(0);
	sdl.push_back(1);
	sdl.push_back(2);
	sdl.push_back(3);
	sdl.pop_back();
	sdl.pop_back();
	sdl.print();*/

	/*DoubleLinkedList dll;
	dll.push_back(0);
	dll.push_front(1);
	dll.push_front(2);
	dll.push_back(3);
	dll.pop_front();
	dll.print();*/

	DoubleCircularLinkedList dcl;
	dcl.push_back(0);
	dcl.push_back(1);
	dcl.push_back(2);
	dcl.push_back(3);
	dcl.pop_back();
	//dcl.push_front(4);
	dcl.print();

}