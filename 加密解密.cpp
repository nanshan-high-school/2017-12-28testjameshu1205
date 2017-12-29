#include <iostream>
using namespace std;
int main() {
	int i, j, k = 0, l = k + 1;
	char word[k];

	cout << "請輸入需要加密還是解密:\n1.加密\n2.解密\n";
	cin >> i;

	cout << "請輸入要位移幾格:";
	cin >> j;


	if (i == 1) {
		for (cout << "請輸入字串(最多一百字):"; k<100; k++) {
			if (word[k] == '\0') {
				break;
			}
			cin >> word[k];
			word[k] += j;
			cout << (char)word[k];
		}return 0;
	}
	else if (i == 2) {
		for (cout << "請輸入字串(最多一百字):"; k<100; k++) {
			if (word[k] == '\0') {
				break;
			}
			cin >> word[k];
			word[k] -= j;
			cout << (char)word[k];
		}
		return 0;
	}
}