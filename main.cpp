// Forest Lang
// A file to write banker's algorithm in

#include "in.cpp"
#include <iostream>
using namespace std;

int main() {
	// an array of the amount of each resource that each process still needs
	int needs[n][m];
	// put values into the array
	for(int p = 0; p < n; p++) {
		for(int r = 0; r < m; r++) {
			needs[p][r] = totalNeeded[p][r] - have[p][r];
		}
	}
	// print the values of the needs table to check everything is entered correctly
	for(int p = 0; p < n; p++) {
		for(int r = 0; r < m; r++) {
			cout << needs[p][r] << ", ";
		}
		cout << "\n";
	}
	
}
