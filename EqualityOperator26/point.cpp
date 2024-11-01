#include <iostream>
struct Point {
    int x;
    int y;

    bool operator==(const Point& other) const;
};

bool Point::operator==(const Point& other) const {
    return (x == other.x && y == other.y);
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}