#include "point.h"
#include <stdlib.h>

int main() {

	point a1(2, 5), a2(2, 5), b, c;	

	cout << "Entrer une valeur pour B";
	cin >> b;
	cout << b;
	cout << "\n";
	cout << a1;				
	cout << "\n";
	cout << a2;				
	cout << "\n\n";
	cout << a1 + a2;		
	cout << "\n";
	cout << a1 - a2;		
	cout << "\n\n";
	cout << (a1 /= a2);		
	cout << "\n\n";


	cout << "\n--------";
	a1 = b;
	cout << a1;				


	system("pause");
	return 0;
}
