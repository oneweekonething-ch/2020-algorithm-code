//
// Created by panda on 2020/3/13.
//

#ifndef INC_2020_ALGORITHM_CODE_LISTNODE_H
#define INC_2020_ALGORITHM_CODE_LISTNODE_H


struct ListNode {
    int val;  //当前结点的值
    ListNode *next;  //指向下一个结点的指针
    ListNode(int x) : val(x), next(NULL) {}  //初始化当前结点值为x,指针为空
};


#endif //INC_2020_ALGORITHM_CODE_LISTNODE_H
