class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        deque<int> res = {}; // like vector but support push_front
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int n = digits[i] + carry;
            carry = !(n ^ 0b1010); // if n == 10, carry = 1
            res.push_front(n % 10);
        }
        if (carry)
            res.push_front(1);
        
        vector<int> v(make_move_iterator(res.begin()), make_move_iterator(res.end())); // convert deque to vector
        return v;
    }
};