#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
// 1.
/**
 * @brief 实现一个函数, 当该函数在当前程序运行期间被调用，可以返回当前是第几次被调用 
 * 
 */
void getCout(){
static  int a=0;
a++;
cout << a;
}

// 2.
/**
 * @brief 计算二维数组每行的和
 *
 * @param arr2D 二维数组
 *
 * @return 二维数组每行的和
*/
std::vector<int> addRows(const std::vector<std::vector<int>>& arr2D);
//设置数组
int arr2D[2][2] = {{231,524},{542,542}};
//第一次获得列
for(int i = 0 ; i < 2; i++)
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



// 3.
/**
 * @brief 计算二维数组每列的和
 *
 * @param arr2D 二维数组
 *
 * @return 二维数组每列的和
 */
std::vector<int> addCols(const std::vector<std::vector<int>> arr2D);
int main() {
 int i , j ;
 int sum =0,m,n,arr2D[100][100];
 cout<<"每行有多少元素"<<endl;
 cin>>m;
 cout <<"每列有多少元素" << endl;
 cin >> n;
 //向arr2D中输入元素
 for ( i= 0;i<m; i++) {
  for( j=0; j< n;j++) {
   //输入元素
   cout << "输入元素"  << endl;
   cin >> arr2D[i][j];
  }

 }
 for( i=0;i<m;i++)
 {
  for(  j=0;j<n;j++)
  {
   //计算和
   sum += arr2D[j][i];

  }
  cout<<"第"<<i+1<<"列的和   "<<sum<<endl;
 }
 return 0 ;
}







// 4.
/**
 * @brief 计算二维数组中最大的值 max_val + calculate(max_val)
 *
 * @param arr2D 二维数组
 *
 * @return
 */
float addRet(const std::vector<std::vector<int>>& arr2D);

// 5. 
/**
 * @brief 计算两个日期差
 *
 * @param time1,time2 
 *
 * @return 两个日期的差，单位为妙
 */
int timeDiff(std::string time1, std::string time2);



// 6. 
/**
 * @brief 实现一个函数，对传入数组进行 小->大  大->小 进行排序
 * 
 * @param arr
 * 
 * @return void
 */
