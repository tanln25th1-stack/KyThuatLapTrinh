
#include <string>
using namespace std;
struct Account {
	string lnk, usr, pwd, desc;
	friend ostream& operator<<(ostream& os, Account& b) {

	}
};