#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
void getCout(){
    static int a=0;
    a++;
    cout << a;
}