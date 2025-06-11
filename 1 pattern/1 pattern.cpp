#define ten
#include<iostream>
using namespace std;

#ifdef one
int main() {
    for (int j = 1; j <= 5; j++) { // for handling rows
        for (int i = 1; i <= 5; i++) { // for handling columns
            cout << "*" << " ";
        }
        cout << endl;
    }
}
#endif
//same in case of number pattern
#ifdef two
int main() {
    for (int row = 1; row <= 5; row++) {
        for (int column = 1; column <= 5; column++) {
            cout << "10 ";
        }
        cout << endl;
    }
}
#endif

#ifdef three
int main() {
    for (int rows=1;rows<= 5;rows++) {
        for (int col=1;col<= 5;col++) {
            cout << rows << " ";
        }
        cout << endl;
    }
}
#endif // three

#ifdef four
int main() {
    for (int rows = 1;rows <= 5;rows++) {
        for (int col = 1;col <= 5;col++) {
            cout << col << " ";
        }
        cout << endl;
    }
}
#endif // four

//reverse order
#ifdef five
int main() {
    for (int rows = 1;rows <= 5;rows++) {
        for (int col = 5;col >= 1;col--) {
            cout << col << " ";
        }
        cout << endl;
    }
}
#endif // five

#ifdef six
int main() {
    for (int row = 1;row <= 5;row++) {
        for (int col = 1;col <= 5;col++) {
            cout << col * col << " ";
        }
        cout << endl;
    }
}

#endif // six

#ifdef seven
int main() {
    for (int row = 1;row <= 5;row++) {
        for (int col = 1;col <= 5;col++) {
            cout << col * col << " ";
        }
        cout << endl;
    }
}
}

#endif // 

#ifdef eight    //notes..
int main() {
    for (int row = 1;row <= 5;row++) {
        char name = 'a' + row - 1;
        for (int col = 1;col <= 5;col++) {
            cout << name << " ";
        }
        cout << endl;
    }
}
#endif // eight

#ifdef nine
int main() {
    for (int row = 1;row <= 5;row++) {
        for (int col = 1;col <= 5;col++) {
            char name = 'a' + col - 1;
            cout << name<< " ";
        }
        cout << endl;
    }
}
#endif // nine
#ifdef ten
int main() {
    int count = 1;
    for (int row = 1;row <= 5;row++) {
        for (int col = 1;col <= 5;col++) {
            cout << count << " ";
            count = ++count;
        }
        cout << endl;
    }
}
#endif // ten








