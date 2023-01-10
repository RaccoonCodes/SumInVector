#include <iostream>
#include <vector>

using namespace std;

void printout(const vector<int>& num) {
	cout << "Your List: ";
	for (int i = 0; i < num.size();i++) {
		cout << num.at(i) << " ";
	}
}

void sumTotal(const vector<int>& num) {
	int sum = 0;
	cout << "\nSum of total in the list: ";
	for (auto& t : num) {
		sum += t;
	}
	cout << sum;
}

int main() {
	vector<int>nums;
	int number = 0;
	int termination = 0;

	cout << "Enter how many number do you want in the vector ";
	cin >> termination;

	cout << "Enter a row of number to be added on the vector ";
	while (cin>>number) {
		nums.push_back(number);
		if (nums.size() == termination)
			break;
	}
	printout(nums);
	sumTotal(nums);

}
