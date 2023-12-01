// Forest Lang
// A file to store the povided values in as variables to be given to the file with main()
// not a .txt file because I don't want to waste time debugging a read function
// may become a .txt file if I have time. However, finals are fast approaching

const int n = 5; // number of processes
const int m = 3; // number of types of resources

// amount of each resource avalible
//		   R1 R2 R3
int avalible[m] = {3, 3, 2};

// total amount of each resource each process wants (access format: [process, resource])
//			   R1 R2 R3
int totalNeeded[n][m] = { {7 ,5 ,3},   //P0
			  {3 ,2 ,2},   //P1
			  {9, 0, 2},   //P2
			  {2, 2, 2},   //P3
			  {4, 3, 3} }; //P4

// amount of each resource each process needs (access format: [process, resource])
//		    R1 R2 R3
int have[n][m] = { {0, 1, 0},   // P0
		   {2, 0, 0},   // P1
		   {3, 0, 2},   // P2
		   {2, 1, 1},   // P3
		   {0, 0, 2} }; // P4

