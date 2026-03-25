#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> words;
	string x;

	while (cin >> x) {
		words.push_back(x);
	}

	typedef vector<string>::size_type vec_sz;
	vec_sz size = words.size();

	if (size == 0) return 1;

	typedef string::size_type str_sz;
	str_sz max_len = words[0].size();
	str_sz min_len = words[0].size();

	for (vec_sz i = 1; i < size; i++) {
		str_sz current_len = words[i].size();

		if (current_len > max_len) {
			max_len = current_len;
		}
		if (current_len < min_len) {
			min_len = current_len;
		}
	}

	cout << "Maximum length: " << max_len << endl;
	cout << "Minimum length: " << min_len << endl;

	return 0;
}	