#include <iostream>

using namespace::std;

int main(int argc, char * argv[]) {
	
	int a, b;
	
	while (cin >> a >> b) {
		int i;
		for (i = 1; ; i++) {
			a *= 3;
			b *= 2;
			if (a > b)
				break;
		} 
		cout << i << endl;
	}
	
	return 0;
}
