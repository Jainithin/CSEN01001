//algorithm
Step 1-start
Step 2-enter any positive integer n
Step 3- If n term is even, the next term is: n / 2 
Step 4-If n is odd, the next term is: 3 * n + 1
Step 5-stop//

int lengthOfCollatzSequence(int n) {
    int ans = 1;
    while (n != 1) {
        if (n & 1) {
            n = 3 * n + 1;
        } else {
            n >>= 1;
        }
        ans ++;
    }
    return ans;
}