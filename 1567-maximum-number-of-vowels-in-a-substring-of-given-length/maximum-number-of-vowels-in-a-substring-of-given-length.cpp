class Solution {
public:
    int maxVowels(string s, int k) {
       int maxVowels = 0;
        int count = 0;

        int i = 0;
        int j = k;

        for (int x = 0; x < k; x++) {
            if (s[x] == 'a' || s[x] == 'e' ||
                s[x] == 'i' || s[x] == 'o' ||
                s[x] == 'u') {
                count++;
            }
        }

        maxVowels = count;

        while (j < s.size()) {

            if (s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                count--;
            }

            if (s[j] == 'a' || s[j] == 'e' ||
                s[j] == 'i' || s[j] == 'o' ||
                s[j] == 'u') {
                count++;
            }

            i++;
            j++;

            maxVowels = max(maxVowels, count);
        }

        return maxVowels;
    }
};