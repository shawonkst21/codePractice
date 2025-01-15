class Solution {
public:
    bool isSet(int &x, int bit) {
        return x & (1 << bit);
    }
    bool isUnset(int x, int bit) {
        return (x & (1 << bit)) == 0;
    }

    int minimizeXor(int num1, int num2) {
        int x = 0;

        int cnt = __builtin_popcount(num2);

        for(int bit = 31; bit >= 0 && cnt > 0; bit--) {
            if((num1&(1<<bit))!=0) {
                x|=(1<<bit);
                cnt--;
            }
        }

        for(int bit = 0; bit < 32 && cnt > 0; bit++) {
            if((num1&(1<<bit))==0) {
                x|=(1<<bit);
                cnt--;
            }
        }

        return x;
        
    }
};

