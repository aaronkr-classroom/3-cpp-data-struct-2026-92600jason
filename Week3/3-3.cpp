#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	cout << "문자 입력: " << endl;
	vector<string> words;
	string x;

	while (cin >> x) {
		words.push_back(x);
	}

	typedef vector<string>::size_type vec_sz;
	vec_sz size = words.size();

	if (size == 0) return 1;

	sort(words.begin(), words.end());

	int count = 1;
	for (vec_sz i = 1; i < size; i++) {
		if (words[i] == words[i - 1]) {
			count++;
		}
		else {
			cout << words[i - 1] << " " << count << endl;
			count = 1;
		}
	}
	cout << words[size - 1] << ": " << count << endl;

	return 0;
}