//
// Created by panda on 2020/3/13.
//
#include <iostream>
#include "../basedata/ListNode.h"

/**
 * C++中NULL和nullptr的区别
 * https://blog.csdn.net/qq_18108083/article/details/84346655
 */

using namespace std;


ListNode *reverseList(ListNode *head);
ListNode *reverseList_recursively(ListNode *head);

int main() {

    cout << "NULL:" << NULL << endl;
//    cout << "nullptr:" << nullptr << endl;
    int n;
    ListNode *tempH = nullptr, *tempP = nullptr, *temp = nullptr;
    cout << "请输入需要反转的链表个数：";
    cin >> n;
    cout << "输入 " << n << " 数字" << endl;

    int num;
    while (n > 0) {
        cin >> num;
        if (!tempH) {
            tempP = new ListNode(num);
            tempH = tempP;
        } else {
            temp = new ListNode(num);
            tempP->next = temp;
            tempP = temp;
        }
        n--;
    }

    ListNode *nodePrint = tempH;
    while (nodePrint) {
        cout << "node value:" << nodePrint->val << endl;
        nodePrint = nodePrint->next;
    }

    cout << "*** reverseList ***" << endl;

    ListNode *reN = reverseList_recursively(tempH);
    while (reN) {
        cout << "node value:" << reN->val << endl;
        reN = reN->next;
    }

    return 0;
}


ListNode *reverseList(ListNode *head) {
    ListNode *tempN = nullptr;
    ListNode *PreN = nullptr;
    while (head) {
        tempN = head->next;
        head->next = PreN;
        PreN = head;
        head = tempN;
    }
    return PreN;
}


ListNode* reverseList_recursively(ListNode* head) {
    if (head==NULL || head->next==NULL) return head;
    ListNode *h = reverseList_recursively(head->next);
    head->next->next = head;
    head->next = NULL;
    return h;

}