

#include <iostream> 

#include <cstdlib> 

#include <ctime> 

 

 

using namespace std; 

int main() 

{ 

	const int ROW = 30, COL = 30; 

	char candy; 

	bool flag = false; 

	char grid[ROW][COL]; 

 

	int randnum; 

	srand(time(0)); 

	for (int row = 0;row < ROW;row++) 

	{ 

 

 

		for (int col = 0;col < COL;col++) 

		{ 

			while (flag == false) { 

 

 

				randnum = rand() % 120 + 1; 

				 

				if (randnum == 82 || randnum == 89 || randnum == 71 || randnum == 66 || randnum == 79){ 

					candy = static_cast<char>(randnum); 

					grid[row][col] = candy; 

					flag = true; 

				} 

			} 

			flag = false; 

			 

		} 

	} 

	for (int row = 21;row < 30;row++) 

	{ 

 

		for (int col = 21;col < 30;col++) { 

			cout << grid[row][col] << " "; 

		} 

		cout << endl; 

	} 

	system("pause"); 

	return 0; 

 

} 























#include <iostream> 

using namespace std; 

int main() 

{ 

	int tr = 0; 

	const int ROW = 26, COL = 26; 

	char candy; 

	bool rflag = true, cflag = true; 

	char grid[ROW][COL]; 

 

	 

	for (int row = 21;row < COL;row++) 

	{ 

 

		for (int col = 21;col < COL;col++) { 

			cin >> grid[row][col]; 

		} 

		 

	} 

	for (int row = 21;row < ROW ;row++) 

	{ 

 

		for (int col = 21;col < COL ;col++) { 

			cout<< grid[row][col]; 

		} 

		cout << endl; 

	} 

	for (int row = 21;row < ROW;row++) 

	{ 

 

		for (int col = 21;col < COL ; col ++) { 

			if (row < ROW - 2 && col < COL - 2) { 

 

 

				for (int x = 1;x <= 3;x++) { 

					if (grid[row][col] != grid[row][col + x]) { 

						rflag = false;//to check that wheather 3 same candies are in same row 

					} 

				} 

				if (rflag == true) { 

					for (int x = 1;x <= 2;x++) { 

						if (grid[row][col] != grid[row + 1][col + x]) { 

							cflag = false; 

 

						} 

 

					} 

 

				} 

				if (cflag == true && rflag == true) { 

					cout << "there is a wrapped candy VALUE " << grid[row][col] << endl; 

				} 

				rflag == true; 

				cflag == true; 

			} 

		} 

		 

	} 

	system("pause"); 

	return 0; 

 

} 

