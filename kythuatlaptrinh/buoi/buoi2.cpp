#include<iostream>
using namespace std;
#include <string>
struct Person {
	int id;
	string name; 
	friend ostream& operator << (ostream& os, const Person& p) {
		os << "\t+Id:" << p.id << endl;
		os << "\t+Name:" << p.name << endl;
		returnos;
	}
	friend istream& operator >>(istream& in, Person& p) {
		cout << "Input person information:" << endl;
		cout << "\t+Id:";
		in >> p.id;
		cout << "\t+Name:";
		in.ignore();
		getline(in, p.name);
		return in;
	}
};
struct Node {
	Person data;
	Node* next;

 };
struct LinkedList {
	Node* head;
	void Show() {
		if (head == NULL) {
			cout << "Empty list " << endl;
			return;
		}
		Node* iteam = head;
		while (iteam != NULL) {
			cout << "Id :" << iteam->data.id << endl;
			cout << "Name:" << iteam->data.name << endl;
			iteam = iteam->next;
		}
	}
};
int main()
{
	LinkedList list = { NULL };
	do {
		system("cls");
		cout << "--HUMAN RESOURCE--" << endl;
		cout << "1.view person" << endl;
		cout << "2.Add a person" << endl;
		cout << "3.remove a person" << endl;
		cout << "4. Find a peson by name" << endl;
		cout << "5.Export to file" << endl;
		cout << "6.Import from file" << endl;
		cout << "0.Exit" << endl;
		cout << "------------------------" << endl;
		cout << "Your command:";
		int cmd;
		cin >> cmd;
		switch (cmd) {
		case 1: {
			list.Show();
			break;
		}
		case 2: {

			break;
		}
		case 3: {
			int id;
			cout << "Input iD to remove:";
			cin >> id;

			break;
		}
		case 4: {
			string name;
			cout << "Input Name TO FInd:";
			cin.ignore();
			getline(cin, name);
			bool res = false;
			if (res) {
				cout << "Found Personwith name" << name << endl;
			}
			else
				cout << "Person isn't existed" << endl;
			break;
		}
		case 5: {
			cout << "Export successfully" << endl;
			break;
		}
		case 6: {
			cout << " Import successfully " << endl;
			break;
		}
		case 0: {
			return 0;
		default:
			cout << "KHONG CO CHUC NANG NAY DAU THANG MAT LOL" << endl;
		}
		}
		cout << "Go enter de tiep tuc di thang ku...";
		cin.ignore();
		cin.get();
	} while (true);
	return 0;
}