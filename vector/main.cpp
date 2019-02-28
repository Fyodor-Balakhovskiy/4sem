#include <cmath>
#include <assert.h>
#include <iostream>
#include <vector>
#include "Vector2.hpp"

int main()
{
    Vector2 vec_1(3,5);
    std::cout << "vec_1 = " << vec_1 << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "write firstly x and then y, separating them by spaces or enters:"
    << std::endl;
    std::cin >> vec_1;
    std::cout << "vec_1 = " << vec_1 << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    Vector2 vec_2(4,7);
    std::cout << "vec_2 = " << vec_2 << std::endl;
    Vector2 vec_3;
    std::cout << "vec_3 = " << vec_3 << std::endl;
    vec_3 = vec_1 + vec_2;
    std::cout << "vec_3 = vec_1 + vec_2 = " << vec_3 << std::endl;
    vec_3 += vec_1;
    std::cout << "vec_3 = 2*vec_1 + vec_2 = " << vec_3 << std::endl;
    vec_3 -= vec_1;
    std::cout << "vec_3 = vec_1 + vec_2 = " << vec_3 << std::endl;
    vec_3 = vec_1 - vec_2;
    std::cout << "vec_3 = vec_1 - vec_2 = " << vec_3 << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    double skalar_mult = vec_1 * vec_2;
    std::cout << "skalar_mult = vec_1 * vec_2 = " << skalar_mult << std::endl;
    double vec_mult_mod = vec_1 ^ vec_2;
    std::cout << "vec_mult_mod = vec_1 ^ vec_2 = " << vec_mult_mod << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    vec_3 = vec_1 * 2;
    std::cout << "vec_3 = vec_1 * 2 = " << vec_3 << std::endl;
    vec_3 = 2 * vec_1;
    std::cout << "vec_3 = 2 * vec_1 = " << vec_3 << std::endl;
    vec_3 = vec_1 / 2.0;
    std::cout << "vec_3 = vec_1 / 2 = " << vec_3 << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "vec_2 = " << vec_2 << std::endl;
    double length = vec_2.len();
    std::cout << "vec_2.len() = " << length << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "vec_2 = " << vec_2 << std::endl;
    vec_3 = vec_2.norm();
    std::cout << "vec_2.norm() = " << vec_3 << std::endl;
    vec_3 = vec_2.ortgonal();
    std::cout << "vec_2.ortgonal() = " << vec_3 << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "vec_2 = " << vec_2 << std::endl;
    vec_3 = - vec_2;
    std::cout << "vec_3 = - vec_2 = " << vec_3 << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    std::cout << "vec_2 = " << vec_2 << std::endl;
    double phi = M_PI / 3;
    vec_2.rotate(phi);
    std::cout << "M_PI = " << M_PI << std::endl;
    std::cout << "vec_2 = " << vec_2 << std::endl;
    vec_3 = vec_2.get_rotated(phi);
    std::cout << "vec_3 = vec_2.get_rotated(phi) =" << vec_3 << std::endl;
    std::cout << std::endl << std::endl << std::endl;

    return 0;
}