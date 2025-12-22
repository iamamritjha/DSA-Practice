class Solution {
public:
    void printNumbers(int n) {
        if (n == 0) return;          // base case

        printNumbers(n - 1);         // first print 1..n-1
        printf("%d\n", n);            // then print n
    }
};

class Solution {
public:
    int NnumbersSum(int N) {
        if (N <= 0) return 0;           // base case
        return N + NnumbersSum(N - 1);   // recursive case
    }
};
