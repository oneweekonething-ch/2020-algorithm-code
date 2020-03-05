//
// Created by panda on 2020/3/4.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    short swap_check = 1;
    cout << "输入需要排序的数字的个数：";
    cin >> n;
    vector<int> numbers;
    cout << "输入 " << n << " 数字" << endl;

    int num;
    //输入数字
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    //排序
    for (int i = 0; (i < n) && (swap_check == 1); i++) {
        swap_check = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                swap_check = 1;
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    //输出
    cout << endl << "排序后：";
    for (int i = 0; i < numbers.size(); ++i) {
        if (i != numbers.size() - 1) {
            cout << numbers[i] << ",";
        } else {
            cout << numbers[i] << endl;
        }
    }

    return 0;
}