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