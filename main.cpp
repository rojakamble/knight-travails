// Knight Tour problem
#include </Users/roja/Documents/knights/stdc++.h>
#include<algorithm>
#include<sys/time.h>

using namespace std;

long gettime(){
    struct timeval start;
    gettimeofday(&start,NULL);
    return start.tv_sec*1000000+start.tv_usec;
}

#define N 6


/* Start from 0,0 and explore all tours using */
#define xPos 0
#define yPos 0


int solveKTUtil(int x, int y, int movei, int sol[N][N],
				int xMove[], int yMove[]);

/* A function to check if i,j are
valid indexes for N*N chessboard */
int isSafe(int x, int y, int sol[N][N])
{
	return (x >= 0 && x < N && y >= 0 && y < N
			&& sol[x][y] == -1);
}


/* A function to print
solution matrix sol[N][N] */
void printtourSolution(int sol[N][N])
{
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++)
			cout << " " << setw(2) << sol[x][y] << " ";
		cout << endl;
	}
}

/* This function solves the Knight Tour problem using
Backtracking. This function mainly uses solveKTUtil()
to solve the problem. It returns false if no complete
tour is possible, otherwise return true and prints the
tour.
Please note that there may be more than one solutions,
this function prints one of the feasible solutions. */
int solveKT()
{
	int sol[N][N];

	/* Initialization of solution matrix */
	for (int x = 0; x < N; x++)
		for (int y = 0; y < N; y++)
			sol[x][y] = -1;

	/* xMove[] and yMove[] define next move of Knight.
	xMove[] is for next value of x coordinate
	yMove[] is for next value of y coordinate */
	 int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };


	
	// Since the Knight is initially at the first block
	sol[xPos][yPos] = 0;

	/* Start from 0,0 and explore all tours using
	solveKTUtil() */
	if (solveKTUtil(xPos, yPos, 1, sol, xMove, yMove) == 0) {
		cout << "Solution does not exist";
		return 0;
	}
	else
		printtourSolution(sol);

	return 1;
}

/* A recursive unction to solve Knight Tour
problem */
int solveKTUtil(int x, int y, int movei, int sol[N][N],
				int xMove[8], int yMove[8])
{
	int k, next_x, next_y;
	if (movei == N * N)
		return 1;

	/* finding all next moves from
	the current coordinate x, y */
	for (k = 0; k < 8; k++) {
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		if (isSafe(next_x, next_y, sol)) {
			sol[next_x][next_y] = movei;
			if (solveKTUtil(next_x, next_y, movei + 1, sol,
							xMove, yMove)
				== 1)
				return 1;
			else
				
			// backtracking the move
				sol[next_x][next_y] = -1;
		}
	}
	return 0;
}



// Driver Code
int main()
{
    long start = gettime();
	// Function Call
	solveKT();
	long end = gettime();
	cout << "\n";
	cout << "Start Position: " << xPos << ", " << yPos << "\n";
	cout << "Time for execution for "<< N <<" size: " << end-start << " microsec";
	return 0;
}



