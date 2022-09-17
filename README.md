# Algorithm-Project-Knight-Tour

**Knight tour problem**

Statement: Given a N*N board with the Knight placed on the first block of an empty board. Moving according to the rules of chess knight must visit each square exactly once. Printing the result in the order of each cell knight is visited using backtracking algorithm.

Constraints:
Knight visit each cell only once
Knight should be wothin boundaries of the board
Knight follows a close tour

Team size: 2
Team members: Roja Kamble, Meenasree Ananthavelu

**Open/Close tour**

Close tour => A knight's tour is said to be closed if the last square visited is also reachable from the first square by a single knight's move.

Open tour => A knight's tour in which every square on the board is visited exactly once but without being able to return to the origin in one move is called an open knight's tour.

**Backtracking algorithm**

Backtracking algorithm: Backtracking is an algorithmic that tries different solutions until finds a solution that “works”. This technique has a property to solve the problem. 

Property: These problems can only be solved by trying every possible configuration and each configuration is tried only once.

Naïve solution: A naive approach is to attempt all configurations and produce a configuration that satisfies to the problem requirements.

Backtracking works incrementally and is an improvement over the Naive solution, tests all potential configurations generated.

**How to run the project**

**Inputs to be given:**

Middle position
Board size
5x5 (2,2)
6x6 (2,2), (2,3), (3,2), (3,3)
7x7 (3,3)
8x8 (3,3), (3,4), (4,3), (4,4)
8x8 (3,2), (4,5)

Corner position (0,0) 

Different corner positions
 (0,0) Top Left
 (0, N-1) Top Right
(N-1, 0) Bottom Left
(N-1, N-1) Bottom Right

Negative scenarios:

[1]
Solution does not exist
Start Position: 2, 3
Time for execution for 5 size: 60750 microsec

[2]
Solution does not exist
Start Position: 2, 5
Time for execution for 5 size: 169805

**Code changes for the input:**

#define N 4
#define xPos 0
#define yPos 0

We implemented our project in C++ language. Code can be run into online compiler. But it will be inconsisent to measure the time complexity as the compiler takes available server during runtime for execution.
We implemented in VScode software. Where time complexity is consistent and the average time is considered to plot the graph for depiting the time complexity.
There are few commands to be used in VScode to run the code.

Macbook commands: shift+cmd+B ------> to compile the code.
Once you see the build message as "Terminal will be reused by tasks, press any key to close it." then click any key
then from the path which has been setup and our main.cpp file is present, for example, "roja@Yeshwanths-MBP knights % " for this type ./main which is finally seen as "roja@Yeshwanths-MBP knights % ./main" then click enter key. You will see the results. If there is no result and code got stuck then you have click "ctrl+c" to get the path back again and then you need to save and recompile the code and repeat the process.


**Time complexity**

Time complexity is O(N^2) as you can see in the middle position it does follow the O(N^2) curve closely, whereas, for the start position of (0,0) since we do not have enough data set to visualize the full curve, it loosely follows O(N^2) curve.

**Data sets for experiment**

1) Board size: 5x5, 6x6, 7x7, 8x8
2) Position of teh knight

**Goals**

1) Explore the knight tour for different board sizes from corner start position
2) Explore the knight tour for different board sizes from middle start position

**Results**

We were able to print the path of knight tour obtained for the defined goals.
