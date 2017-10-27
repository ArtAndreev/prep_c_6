#include <iostream>
#include <cmath>

#include "Sphere.h"

const double PI = atan(1) * 4;

Sphere::Sphere(double radius): name("Sphere"),
                               radius(radius) {

}

void Sphere::about() const {
    std::cout << "Figure: " << name << std::endl
              << "Radius: " << radius << std::endl
              << "Volume: " << get_volume() << std::endl
              << "Surface area: " << get_surface_area() << std::endl;
}

double Sphere::get_volume() const {
    return 4.0 / 3.0 * PI * radius * radius * radius;
}

double Sphere::get_surface_area() const {
    return 4 * PI * radius * radius;
}
