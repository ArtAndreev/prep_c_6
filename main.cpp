#include <iostream>

#include "ThreeDFigure.h"
#include "Sphere.h"
#include "RectCuboid.h"

int main() {
    Sphere sphere(2);
    RectCuboid rectCuboid(1, 2, 3);

    ThreeDFigure& figure_sphere = sphere;
    ThreeDFigure& figure_rectCuboid = rectCuboid;

    figure_sphere.about();
    std::cout << figure_sphere.get_volume() << std::endl
              << figure_sphere.get_surface_area() << std::endl << std::endl;
    figure_rectCuboid.about();
    std::cout << figure_rectCuboid.get_volume() << std::endl
              << figure_rectCuboid.get_surface_area() << std::endl;

    return 0;
}
