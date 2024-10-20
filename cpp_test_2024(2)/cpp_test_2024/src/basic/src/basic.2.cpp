#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
std::vector<int> addRows(const std::vector<std::vector<int>>& arr2D);
//设置数组
int arr2D[2][2] = {{231,524},{542,542}};
//第一次获得列
for(int i=0 ; i<2;i++)
{
    //第二次获得行
    for (int j=0 ; j< 2;j++)
    {

        if (i<1) {
            int b =arr2D[j][i] + arr2D[j][i+1];
            cout << b <<" ";
            i++;
        }
        else if(i=1){
            int b =arr2D[j][i] + arr2D[j][i-1];
            cout << b <<" ";
        }

    }

}

}
