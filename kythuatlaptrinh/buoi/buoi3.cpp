#include <iostream>
using namespace std;
#include <string>
struct Author {
	int id;
	string name; 
};
struct Book {
	int id;
	string name;
	Author author;
	friend ostream& operator<<(ostream& os, const Book& b) {
		os << "Book information:" << endl;
		os << "\t+Id:" << b.id << endl;
		os << "\t+Name:" << b.name << endl;
		os << "\t+ Author name :" << b.author.name << endl;
		return os;
	}
	friend istream& operator>>(istream& in, Book& b) {
		cout << "book information:" << endl;
		cout << "\t+Id:";
		in >> b.id;
		cout << "\t+Name:";
		in.ignore();
		getline(in, b.name);
		in >> b.author.id;
		return in;
	}
};
struct Node {
	Book data;
	Node* next;
	void Create(Book b) {
		data = b;
		next = nullptr;
	}
};
struct LinkedList {
	Node* head;
	void Show() {
		if (head == NULL) {
			cout << "No book avaiable" << endl;
			return;
		}
		Node* item = head;
		while (item != NULL) {
			cout  << item->data;
			item = item->next;
		}
	}
	void AddFirst(Node* p) {
		p->next = head;
		head = p;
	}
};
int main() {
	LinkedList books = { NULL };
	do {
		system ("cls");
		cout << "----- BOOK MANAGEMENT -----" << endl;
		cout << "1. show all books " << endl;
		cout << "2. adda book " << endl;
		cout << "3. delete a book " << endl;
		cout << "4. update a book " << endl;
		cout << "5. find a book " << endl;
		cout << "6.export to files " << endl;
		cout << "7.import from file " << endl;
		 cout << "0. exit" << endl;
		 cout << "----------------------" << endl;
		 cout << "enter your choice: " << endl;
		 int choice;
		 cin >> choice;
		 switch (choice) {
		 case 1: {
			 books.Show();
			 break;
		 }
		 case 2: {
			 Book b;
			 cin >> b;
			 Node* newNode = new Node;
			 newNode->Create(b);
			 books.AddFirst(newNode);
			 break;
		 }
		 case 3: {
			 break;
		 }
		 case 4: {
			 break;
		 }
		 case 5: {
			 break;
		 }
		 case 6: {
			 break;
		 }
		 case 7: {
			 break;
		 }
		 case 0: {
			 return 0;
		 }
		 default: {
			 cout << "invalid choice , try again " << endl;
			 break;
		 }
		 }
		 system("pause");
		 cout << "press any key to continue ...";
	} while (true);
}