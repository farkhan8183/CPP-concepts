#define eight
#include<iostream>
using namespace std;

#ifdef one
int main() {
	for (int row = 1;row <= 5;row++)
	{
		for (int col = 1;col <= row;col++) {
			cout << "*" << " ";
		}
		cout << endl;
	}
}
#endif // one

#ifdef two
int main() {
	for (int row = 1;row <= 5;row++)
	{
		for (int col = 1;col <= row;col++) {
			cout << row << " ";
		}
		cout << endl;
	}
}
#endif // two

#ifdef three	//note
int main() {
	for (int row = 1;row <= 5;row++)
	{
		for (int col = 1;col <= row;col++) {
			cout << col << " ";
		}
		cout << endl;
	}
}
#endif // three

#ifdef four
int main() {
	for (int row = 1;row <= 5;row++)
	{
		for (int col = 5;col >= row;col--) {
			cout << col << " ";
		}
		cout << endl;
	}
}
#endif // four

#ifdef five
int main() {
	for (int row = 1; row <= 5; row++) {
		for (int col = row;col >= 1;col--)//every col is startin form current row num n ends at 1
		{
			cout << col << " ";
		}
		cout << endl;
	}
}
#endif // five

#ifdef six
int main() {
	for (int row = 1;row <= 5;row++) {
		for (int col = 1;col <= row;col++) {
			cout << static_cast < char> ('a' + row - 1) << " "; //static_cast<char> is type casting(converting data type so it can print character value rather than digits.
		}
		cout << endl;
	}
}
#endif // six

#ifdef seven
int main() {
	for (int row = 5;row >= 1;row--) {
		for (int col = 1;col <= row;col++) {
			cout << "* ";
		}
		cout << endl;
	}
}
#endif // seven

#ifdef eight
int main() {
	for (int row = 5;row >= 1;row--) {
		for (int col = 1;col <= row;col++) {
			cout << col << " ";
		}
		cout << endl;
	}
}
#endif // eight


#ifdef testfour
int main() {
	for (int r = 1;r <= 5;r++) {
		for (int c = 5;c >= r;c--) {
			cout << c << " ";
		}
		cout << endl;
	}
}
#endif // test 

