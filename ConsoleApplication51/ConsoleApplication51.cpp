#include<iostream>
using namespace std;
class first {
private:
	int x;
public:
	first() {
		cout << "Hi iam c " << endl;
	}
};
class second :public first {
private:
	int y;
public:
	second() {
		cout << "Hi iamghffdgfghdfghdaasd 2" << endl;
	}
};
int main() {
	//first op1;
	second op2;
}