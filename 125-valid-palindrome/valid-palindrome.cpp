class Solution {
public:
    bool isPalindrome(string s) {

        // Convert to lowercase and remove non-alphanumeric characters
        string clean = "";

        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }

        // Two pointers
        int n = clean.length();
        int i = 0;
        int j = n - 1;

        // Compare
        while (i < j) {
            if (clean[i] != clean[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};