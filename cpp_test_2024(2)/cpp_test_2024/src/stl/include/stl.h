#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

class CoordinateSet {
public:
    void addCoordinates(const std::vector<std::pair<double, double>>& newCoords) {
        // 添加新坐标到集合
        coordinates.push_back(newCoords);

        // 如果坐标集合中的元素超过1个，进行计算和剔除
        if (coordinates.size() > 1) {
            double minPerimeter = std::numeric_limits<double>::max();
            double maxPerimeter = 0.0;
            int minIndex = -1;
            std::vector<std::pair<double, double>> maxCoords;

            for (size_t i = 0; i < coordinates.size(); ++i) {
                double perimeter = calculatePerimeter(coordinates[i]);
                if (perimeter < minPerimeter) {
                    minPerimeter = perimeter;
                    minIndex = i;
                }
                if (perimeter > maxPerimeter) {
                    maxPerimeter = perimeter;
                    maxCoords = coordinates[i];
                }
            }

            // 剔除最小周长的坐标
            coordinates.erase(coordinates.begin() + minIndex);

            // 返回最大周长图形的中心坐标
            std::pair<double, double> center = calculateCenter(maxCoords);
            std::cout << "Center of the maximum perimeter shape: (" << center.first << ", " << center.second << ")\n";
        }
    }

private:
    std::vector<std::vector<std::pair<double, double>>> coordinates;

    double calculatePerimeter(const std::vector<std::pair<double, double>>& coords) {
        double perimeter = 0.0;
        for (size_t i = 0; i < coords.size(); ++i) {
            size_t next = (i + 1) % coords.size();
            double dx = coords[next].first - coords[i].first;
            double dy = coords[next].second - coords[i].second;
            perimeter += std::sqrt(dx * dx + dy * dy);
        }
        return perimeter;
    }

    std::pair<double, double> calculateCenter(const std::vector<std::pair<double, double>>& coords) {
        double sumX = 0.0, sumY = 0.0;
        for (const auto& coord : coords) {
            sumX += coord.first;
            sumY += coord.second;
        }
        return {sumX / coords.size(), sumY / coords.size()};
    }
};
// 2.
// 手搓vector 实现 push_back pop_back insert front back clear empty size begin end (实现即可 不要求固定的写法)
template <class T>
class Vector {
public:
    T& operator[](int index);
    Vector();
    void pushBack(T data);
    int size(); 
    void popBack();
    void insert(int index, T data);
    bool empty();
    T front();
    T back();
    void clear();
    T* begin();
    T* end();
private:
    int m_data_number;
    T* m_top = nullptr;
    T* m_bound = nullptr;
};

