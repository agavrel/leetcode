#include <vector>
#include <string>
#include <cstdint>
#include <array>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int operator()(ListNode* head)  {
        return getDecimalValue(head);
    }
    int getDecimalValue(ListNode* head) {
        int n = head->val;

        while (head = head->next)
            n = (n << 1) | head->val;

        return n;
    }
};