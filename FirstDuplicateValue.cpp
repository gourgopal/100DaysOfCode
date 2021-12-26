#include <vector>
using namespace std;

int firstDuplicateValue(vector<int> array) {
	for (int x : array) {
		int absValue = abs(x);
		if (array[absValue-1] < 0) return absValue;
		array[absValue-1] *= -1;
	}
	return -1;
}
