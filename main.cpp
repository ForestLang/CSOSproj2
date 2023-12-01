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

	/* uncomment to see which values are being entered into needs
	// print the values of the needs table to check everything is entered correctly
	for(int p = 0; p < n; p++) {
		for(int r = 0; r < m; r++) {
			cout << needs[p][r] << ", ";
		}
		cout << "\n";
	}
	*/

	// create an array for the safe order to be saved in
	int safe[n];
	int pnum = 0; // a int for keeping track of which process is being looked at
	// start loop for entering things into safe[]
	for(int s = 0; s < n; s++) {
		//start loop that ckecks if it is safe to allocate the resources to process pnum
		int safeAlloc = 0;
		for(int r = 0; r < m; r++) {
			if(avalible[r] + have[pnum][r] >= totalNeeded[pnum][r])
				safeAlloc++;
			else {  // exits loop and set safeAlloc to a low value
				r = m + 1;
				safeAlloc = -1;
			}
		}
		// if it is safe, safeAlloc == m
		if(safeAlloc == m) {
			safe[s] = pnum;
			// vVv uncomment to see which values are being entered into safe[] vVv
			// cout << "safe[" << s << "] == P" << safe[s] << "\n";
			// increase avalible[] values by have[pnum][]
			for(int i = 0; i < m; i++) {
				avalible[i] += have[pnum][i];
			}
		}
		else {
			s--;
		}

		// increase pnum
		pnum++;
		if(pnum == n)
			pnum = 0;
		// check it the new value of pnum is in safe[]
		for(int i = 0; i <= 0; i++) {
			while(pnum == safe[i]) {
				// if it is. increment it again
				pnum++;
				if(pnum == n)
					pnum = 0;
			}
		}
	}

	// print values of safe
	cout << "the provided data is a safe system\n";
	cout << "the safe sequence is P" << safe[0];
	for(int i = 1; i < n; i++) {
		cout << ", P" << safe[i];
	}
	cout << "!\n";
}
