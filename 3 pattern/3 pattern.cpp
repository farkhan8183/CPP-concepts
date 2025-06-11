#define one
#include<iostream>
using namespace std;

#ifdef one		//note
int main() {
	for (int row = 1;row <= 5;row++) {
		for (int col = 1;col <= 5 - row;col++) {
			cout << "  ";		//use 2 spaces as 2 space= 1 star.
		}
		for (int col = 1;col <= row;col++) {
			cout << "x ";
		}
		cout << endl;
	}
	
}
#endif // one

#ifdef two
int main() {
	int n;
	cout << "enter no of rows;";
	cin >> n;
	for (int row = 1;row <= n;row++) {
		for (int col = 1;col <= n - row;col++) {
			cout << "  ";		
		}
		for (int col = 1;col <= row;col++) {
			cout << "x ";
		}
		cout << endl;
	}

}
#endif // two


#ifdef three
int main() {
	for (int row = 1;row <= 4;row++) {
		for (int col = 1;col <= 4 - row;col++) {
			cout << " ";
		}
		for (int col = 1;col <= row;col++) {
			cout << row;
		}
		cout << endl;
	}

}
#endif // three

#ifdef four
int main() {
	int n;
	cout << "enter no of rows:";
	cin >> n;
	for (int row = 1;row <= n;row++) {
		for (int col = 1;col <= n - row;col++)
			cout << "  ";
		for (int col = 1; col <= row;col++)
			cout << col << " ";
		cout << endl;
	}
	
}
#endif // four

#ifdef five
int main() {
	for (int row = 1;row <= 5;row++) {
		for (int col = 1;col <= 5 - row;col++) 
			cout << "  ";
		
		for (char col = 'A';col <=static_cast<char>('A'+row-1);col++) //see starting n ending points.
			cout<<col<<" ";
		
		cout<<endl;
	}
}
#endif // five
//omg ran!!

#ifdef six
int main() {
	for (int row = 1;row <= 5;row++) {
		for (int col = 1;col <= 5 - row;col++)
			cout << "  ";

		for (int col=row;col>=1;col--)
			cout << col << " ";

		cout << endl;
	}
}
#endif

















