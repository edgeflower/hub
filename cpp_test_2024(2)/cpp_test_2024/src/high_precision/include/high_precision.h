#include <iostream>
#include <ostream>
#include <string>
#include <vector>

// 高精度
class HighPrecisionNumber {

    friend std::ostream& operator<<(std::ostream &cout, const HighPrecisionNumber &n); // 重载<<运算符

public:
    /**
     * @brief 空构造函数
     */
    HighPrecisionNumber() = default;

    /**
     * @brief 字符串构造函数
     *
     * @param s 可带符号的数字字符串，如“+312”、 “114514”、 “-10086”
     * @param base 数字进制，默认为10
     */
    HighPrecisionNumber(std::string s, uint8_t base = 10);

    /**
     * @brief 符号、进制相同的数字相加
     *
     * @param n1 数字1
     * @param n2 数字2
     * @param dst 结果
     */
    static void addSameSign(HighPrecisionNumber n1, HighPrecisionNumber n2, HighPrecisionNumber &dst);
    
    /**
     * @brief 符号、进制相同的数字相减
     *
     * @param n1 数字1
     * @param n2 数字2
     * @param dst 结果
     */
    static void minusSameSign(HighPrecisionNumber n1, HighPrecisionNumber n2, HighPrecisionNumber &dst);

    /**
     * @brief 两个相同进制的数字相加
     *
     * @param n1 数字1
     * @param n2 数字2
     * @param dst 结果
     */
    static void add(HighPrecisionNumber n1, HighPrecisionNumber n2, HighPrecisionNumber &dst);

    /**
     * @brief 两个进制相同的数字相减
     *
     * @param n1 数字1
     * @param n2 数字2
     * @param dst 结果
     */
    static void minus(HighPrecisionNumber n1, HighPrecisionNumber n2, HighPrecisionNumber &dst);

private:
    /**
     * @brief 去除数字最前面多余的零
     *
     * @param n 待处理的数字
     */
    static void removeBackZero(HighPrecisionNumber &n);

    bool sign_; //符号
    uint8_t base_; //进制
    std::vector<uint16_t> num_; //每位数字
};