class Solution {
public:
    string addBinary(string a, string b) {
        int j = b.size();
        int i = a.size();
        if (i < j)
            return addBinary(b, a);
        string res;
        int carry = 0;
        while (--j >= 0) {
            res += carry ^ '0' ^ (a[--i] ^ b[j]);
            carry = (carry + (a[i] & 1) + (b[j] & 1)) >> 1;
        }
        while (--i >= 0) {
            res += carry ^ a[i];
            carry = (carry + (a[i] ^ '0')) >> 1;
        }
        if (carry)
            res += '1';
        reverse(res.begin(), res.end());
        return res;
    }
};