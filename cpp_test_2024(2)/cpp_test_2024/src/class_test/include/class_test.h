#include <iostream>
#include <string>
#include <vector>

// 1.
//实现一个类，可以打印这个类在整个程序运行期间构造了几次,
class Object
{
public:
 Object()
 {
  ++count_class;
 }
 ~Object();
 static int printCount()
 {
  return count_class;

 }
private:
 static int count_class;
};
int Object :: count_class = 1;
int main()
{
 std::cout << Object::printCount() << std::endl;
 return 0 ;
}
// 2. 字符串
struct SubstringInfo {
    std::string substring;  // (子)字符串
    int length;  // 长度

    /**
     * @brief 默认构造函数
     */
     SubstringInfo() =default;

    /**
     * @brief 构造函数
     *
     * @param _str
     */
     SubstringInfo(const std::string& _str)
        : substring(_str),
          length(static_cast<int>(substring.length()))
    {}

    /**
     * @brief == 运算符重载(根据this->长度)
     *
     * @param other
     * @return
     */
    bool operator==(const SubstringInfo& other){
    return this ->length == other.length;
    }

    /**
     * @brief 返回结构体的字符串形式
     * @example
     *  [out] "[SubstringInfo]: [str: " + 字符 + ", " + "length: " + 长度 + " ]\n";
     *
     * @return 结构体的字符串形式
     */
     std::string toString(){
     return str +
}
    /**}
     * @brief << 运算符重载(friend function)
     *
     * @param os
     * @param other SubstringInfo对象
     * @return std::ostream对象
     */
     friend std::ostream& operator<<(std::ostream& os, const SubstringInfo& _self){
     os << _self.tostring();
     return os;
     }
};

