#ifndef UTILS_H
#define UTILS_H

#include <cmath>
#include <limits>
#include <random>

// 常量定义
const double EPSILON = 1e-6;

// 向量类
class Vec3 {
public:
    double x, y, z;

    Vec3() : x(0), y(0), z(0) {}
    Vec3(double x, double y, double z) : x(x), y(y), z(z) {}

    // 向量加法
    Vec3 operator+(const Vec3& v) const {
        return Vec3(x + v.x, y + v.y, z + v.z);
    }

    // 向量减法
    Vec3 operator-(const Vec3& v) const {
        return Vec3(x - v.x, y - v.y, z - v.z);
    }

    // 向量点积
    double dot(const Vec3& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // 向量归一化
    Vec3 normalize() const {
        double length = std::sqrt(x * x + y * y + z * z);
        return Vec3(x / length, y / length, z / length);
    }
};

// 其他工具函数可以在这里添加

#endif // UTILS_H