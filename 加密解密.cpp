#include <iostream>
using namespace std;
int main() {
	int i, j, k = 0, l = k + 1;
	char word[k];

	cout << "�п�J�ݭn�[�K�٬O�ѱK:\n1.�[�K\n2.�ѱK\n";
	cin >> i;

	cout << "�п�J�n�첾�X��:";
	cin >> j;


	if (i == 1) {
		for (cout << "�п�J�r��(�̦h�@�ʦr):"; k<100; k++) {
			if (word[k] == '\0') {
				break;
			}
			cin >> word[k];
			word[k] += j;
			cout << (char)word[k];
		}return 0;
	}
	else if (i == 2) {
		for (cout << "�п�J�r��(�̦h�@�ʦr):"; k<100; k++) {
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