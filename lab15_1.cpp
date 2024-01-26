#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
    char *c = &b, *y = &b;
    int *x = &a, **z = &x;
    cout << a << " " << b << " " << *c << " " << x << " " << &y << " " << z << endl;
    cout << &a << " " << &y << " " << &c << " " << &x << " " << &y << " " << &z << endl;
    b = 'F';
    cout << a << " " << b << " " << *c << " " << x << " " << &y << " " << z << endl;
    *y = 'W';
    cout << a << " " << b << " " << *c << " " << x << " " << &y << " " << z << endl;
    *x = 6;
    cout << a << " " << b << " " << *c << " " << x << " " << &y << " " << z << endl;
    **z = 7;
    cout << a << " " << b << " " << *c << " " << x << " " << &y << " " << z << endl;
	return 0;
}
