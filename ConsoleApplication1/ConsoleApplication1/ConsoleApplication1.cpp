#include <iostream>
#include"../Project1/math.h"
using namespace std;
int main() {
	int x;
	int y;

	cin >> x >> y;
	cout << add1(x, y) << endl;
	cout << subtract(x, y) << endl;
	cout << multiply(x, y) << endl;
	cout << divide(x, y) << endl;
}