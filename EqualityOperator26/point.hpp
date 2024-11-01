
#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

struct Point {
    int x;
    int y;

    bool operator==(const Point& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

#endif  POINT_HPP
