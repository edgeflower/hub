#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void Sort(std::vector<int> arr, bool ascending = true );
void printVector(std::pmr::vector<int>& arr) {
    for(std::vector<int> :: iterator it = arr.begin(); it != arr.end(); it++)
    {
        std::cout << *it << "" ;
        //取arr中的第一个元素
        int x = arr[0];
        //取arr中最后一个元素
        int y = sizeof (arr) - 1 ;
        //sort排序
        std::sort( x ,y );
        //输出
        cout << *it << "" ;
    }
}
//vector 赋值
void test()
{
    vector <int>arr;

    int n;
    cout << "输入数列的元素个数"<< endl;
    //容器元素的输入
    cin >> n;
    for (int i = 0;i < n; i++ ) {
        //往vector容器中注入元素
        arr.push_back(i);
    }
    printVector(arr);

}

int main() {
    test();
    return 0;

}
