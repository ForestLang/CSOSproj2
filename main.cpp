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
	// create an array for the safe order to be saved in
	int safe[n];
	int pnum = 0; // a int for keeping track of which process is being looked at
	int numMisses = 0; // int for making sure I maybe don't get stuck in an endless loop
	// start loop for entering things into safe[]
	for(int s = 0; s < n; s++) {
		bool safeP = false;
		//start loop that ckecks if it is safe to allocate the resources to process pnum
			// if it is safe, safeP = true
			// else: do nothing
		if(safeP)
			safe[s] = pnum;
		else {
			s--;
			numMisses++;
		}
		if(numMisses == n) {
			if(s == 0) {
				cout << "cannot find safe sequence with provided variables";
				s == n+3; //exits loop
			}
			else
				s--;
		}
	}
}
