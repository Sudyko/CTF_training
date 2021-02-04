#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums2char = { 0x3B, 0x02, 0x23, 0x1B, 0x1B, 0x0C, 0x1C, 0x08, 0x28, 0x1B, 0x21, 0x04, 0x1C, 0x0B };
	string str = "rootme";
	for (int i = 0; i < nums2char .size(); ++i) {
		cout << (char)((int)str[i % str.size()] ^ nums2char[i]);
	}
	return 0;
}