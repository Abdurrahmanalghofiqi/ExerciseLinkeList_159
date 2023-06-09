#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
	Node* LAST;

public:
	CircularLinkedList() {
		LAST = NULL;
	}

	void addNode();
	bool search(int rollno, Node** previous,Node** Abdurrahman);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void CircularLinkedList::addNode() {
	 //write your answer here

}

bool CircularLinkedList::search(int rollno, Node** previous, Node** Abdurrahman) {
	*previous = LAST->next;
	*Abdurrahman = LAST->next;

	while (*Abdurrahman != LAST) {
		if (rollno == (*Abdurrahman)->rollNumber) {
			return true;
		}
		*previous = *Abdurrahman;
		*Abdurrahman = (*Abdurrahman)->next;
	}
	if (rollno == LAST->rollNumber) {
		return true;
	}
	else {
		return false;
	}
}

bool CircularLinkedList::listEmpty() {
	return LAST == NULL;
}
bool CircularLinkedList::delNode() { //write your answer here

}

void CircularLinkedList::traverse() {
	if (listEmpty()) {
		cout << "\nList is Empty\n";
	}
	else {
		cout << "\nRecords in Empty\n";
		Node* AbdurrahmanNode = LAST->next;
		while (AbdurrahmanNode != LAST) {
			cout << AbdurrahmanNode->rollNumber << "  " << AbdurrahmanNode->name << endl;
			AbdurrahmanNode = AbdurrahmanNode->next;
		}
		cout << LAST->rollNumber << "   " << LAST->name << endl;
	}
}

int main() {
	CircularLinkedList obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. Add a record to the list" << endl;
			cout << "2. Delete a record from the list" << endl;
			cout << "3. View all the record in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-5): ";

			char ch;
			cin >> ch;

			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}
			case '4': {
				return 0;
			}
			default: {
				cout << "Invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}