#include <stdio.h>
#include <stdbool.h>

// ♔ ♕ ♖ ♗ ♘ ♙

/* ┌ └ ┐ ┘

├ ┤ ┬ ┴
 
─ │ ┼
 
 might need these...
 
 ╟ ╢ ╧ ╤
 
*/
void showBoard (int board[8][8]) {
	printf("\n\n   0 1 2 3 4 5 6 7\n");
	printf("  ╔═╤═╤═╤═╤═╤═╤═╤═╗\n");
	for (int i = 0; i < 8; i++) {
		printf("%d ║", i); 
		bool flag = true;
		for (int j = 0; j < 8; j++) {
			if (!flag) {
                                printf("│");
                        }
                        flag = false;
			if (board[i][j] == 0) {
				if ((i + j) % 2 == 0) {
					printf(" ");
				} else {
					printf("▒");
				}
			} else if (board[i][j] == 1) {
				printf("♔");
 			} else if (board[i][j] == 2) {
				printf("♕");
			} else if (board[i][j] == 3) {
				printf("♗");
			} else if (board[i][j] == 4) {
				printf("♘");
			} else if (board[i][j] == 5) {
				printf("♖");
			} else if (board[i][j] == 6) {
				printf("♙");
			}
		}
		printf("║\n");
		if (i < 7) {
                        printf("  ╟─┼─┼─┼─┼─┼─┼─┼─╢\n") ;
                }
	}
	printf("  ╚═╧═╧═╧═╧═╧═╧═╧═╝\n");
}

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...")	;
	int board [8][8]  = { {5, 4, 3, 1, 2, 3, 4, 5}
		            , {6, 6, 6, 6, 6, 6, 6, 6}
			    , {0, 0, 0, 0, 0, 0, 0, 0}
			    , {0, 0, 0, 0, 0, 0, 0, 0}
			    , {0, 0, 0, 0, 0, 0, 0, 0}
			    , {0, 0, 0, 0, 0, 0, 0, 0}
			    , {6, 6, 6, 6, 6, 6, 6, 6}
			    , {5, 4, 3, 1, 2, 3, 4, 5}
			    } ;
	printf("Board Initialized!") ;
	
	showBoard(board);
	
	// rest of game...
	
	printf("Terminating...") ;
}
