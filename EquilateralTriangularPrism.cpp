#include <iostream>

#include <cmath>

using namespace std;

class EquilateralTriangularPrism

{

private:
    double base_side;

    double height;

public:
    EquilateralTriangularPrism(double, double);

    void set_base_side(double);

    double get_base_side();

    void set_height(double);

    double get_height();

    double get_base_surface_area();

    double get_lateral_surface_area();

    double get_total_surface_area();

    double get_volume();

    void display_results();
};

EquilateralTriangularPrism ::EquilateralTriangularPrism(double base_side_param, double height_param)

{

    set_base_side(base_side_param);

    set_height(height_param);
}

void EquilateralTriangularPrism ::set_base_side(double base_side_param)

{

    base_side = base_side_param;
}

double EquilateralTriangularPrism ::get_base_side()

{

    return base_side;
}

void EquilateralTriangularPrism ::set_height(double height_param)

{

    height = height_param;
}

double EquilateralTriangularPrism ::get_height()

{

    return height;
}

double EquilateralTriangularPrism ::get_base_surface_area()

{

    return (sqrt(3) * (base_side * 2)) / 4;
}

double EquilateralTriangularPrism ::get_lateral_surface_area()

{

    return 3 * base_side * height;
}

double EquilateralTriangularPrism ::get_total_surface_area()

{

    return get_base_surface_area() + get_lateral_surface_area();
}

double EquilateralTriangularPrism ::get_volume()

{

    return get_base_surface_area() * height;
}

void EquilateralTriangularPrism ::display_results()

{

    cout << "\nBase Surface Area : " << get_base_surface_area() << endl

         << "\nLateral Surface Area : " << get_lateral_surface_area() << endl

         << "\nTotal Surface Area : " << get_total_surface_area() << endl

         << "\nVolume : " << get_volume()

         << endl;
}

int main()

{

    cout << "\nEquilateral Triangulat Prism Calculator 2.0\n";

    double base_side;

    cout << "\nEnter the base side : ";

    cin >> base_side;

    double height;

    cout << "\nEnter the height : ";

    cin >> height;

    EquilateralTriangularPrism EquilateralTriangularPrism(base_side, height);

    EquilateralTriangularPrism.display_results();
}