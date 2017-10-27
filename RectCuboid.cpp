#include <iostream>

#include "RectCuboid.h"

RectCuboid::RectCuboid(double length, double width, double height):
        name("Rectangle cuboid"),
        length(length),
        width(width),
        height(height) {

}

void RectCuboid::about() const {
    std::cout << "Figure: " << name << std::endl
              << "Length: " << length << std::endl
              << "Width: " << width << std::endl
              << "Height: " << height << std::endl
              << "Volume: " << get_volume() << std::endl
              << "Surface area: " << get_surface_area() << std::endl;
}

double RectCuboid::get_volume() const {
    return length * width * height;
}

double RectCuboid::get_surface_area() const {
    return 2 * length * width + 2 * length * height + 2 * width * height;
}
