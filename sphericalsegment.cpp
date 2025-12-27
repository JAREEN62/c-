#include <iostream>
using namespace std;

class ss
{
private:
    double s_radius, b1_radius, b2_radius, height;
    double pi = 3.14159;

public:
    ss(double, double, double, double);

    void set_s_radius(double);
    double get_s_radius();

    void set_b1_radius(double);
    double get_b1_radius();

    void set_b2_radius(double);
    double get_b2_radius();

    void set_height(double);
    double get_height();

    double get_b1_area();

    double get_b2_area();

    double get_curved_surface_area();

    double get_total_surface_area();

    double get_volume();

    void display_results();
};

ss ::ss(double s_radius, double b1_radius, double b2_radius, double height)
{
    set_s_radius(s_radius);
    set_b1_radius(b1_radius);
    set_b2_radius(b2_radius);
    set_height(height);
}

void ss ::set_s_radius(double s_radius_param)
{
    s_radius = s_radius_param;
}

double ss ::get_s_radius()
{
    return s_radius;
}

void ss ::set_b1_radius(double b1_radius_param)
{
    b1_radius = b1_radius_param;
}

double ss ::get_b1_radius()
{
    return b1_radius;
}

void ss ::set_b2_radius(double b2_radius_param)
{
    b2_radius = b2_radius_param;
}

double ss ::get_b2_radius()
{
    return b2_radius;
}

void ss ::set_height(double height_param)
{
    height = height_param;
}

double ss ::get_height()
{
    return height;
}

double ss ::get_b1_area()
{
    return pi * (b1_radius * b1_radius);
}

double ss ::get_b2_area()
{
    return pi * (b2_radius * b2_radius);
}

double ss ::get_curved_surface_area()
{
    return 2 * pi * s_radius * height;
}

double ss ::get_total_surface_area()
{
    return get_b1_area() + get_b2_area() + get_curved_surface_area();
}

double ss ::get_volume()
{
    return (pi * height * (3 * (b1_radius * b1_radius) + 3 * (b2_radius * b2_radius) + (height * height))) / 6;
}

void ss ::display_results()
{
    cout << "\nBase 1 area : " << get_b1_area() << endl
         << "\nBase 2 area : " << get_b2_area() << endl
         << "\nCurved surface area : " << get_curved_surface_area() << endl
         << "\nTotal surface area : " << get_total_surface_area() << endl
         << "\nVolume : " << get_volume() << endl;
}

int main()
{
    cout << "Spherical Segment Calculator 3.0!\n\n";

    double s_radius, b1_radius, b2_radius, height;

    cout << "Enter sphere radius : ";
    cin >> s_radius;

    cout << "Enter base 1 radius : ";
    cin >> b1_radius;

    cout << "Enter base 2 radius : ";
    cin >> b2_radius;

    cout << "Enter height : ";
    cin >> height;

    if (s_radius > 0 && b1_radius > 0 && b2_radius > 0 && height > 0)
    {
        if (b1_radius <= s_radius)
        {
            if (b2_radius <= s_radius)
            {
                if (b1_radius != s_radius && b2_radius != s_radius)
                {
                    if (4 * (s_radius * s_radius) * (height * height) == ((b1_radius - b2_radius)*(b1_radius - b2_radius) + (height * height)) * ((b1_radius + b2_radius)*(b1_radius + b2_radius) + (height * height)))
                    {
                        ss ss(s_radius, b1_radius, b2_radius, height);
                        ss.display_results();

                    }
                    else
                    {
                        cout<<"\n***Given height doesn't fit the current sphere radius and two base radii!***";
                    }
                }
                else
                {
                    cout << "\n***Two Base radii cannot be both equal to sphere radius!***";
                }
            }
            else
            {
                cout << "\n***Base 2 radius can not  be greater that sphere radius!***";
            }
        }
        else
        {
            cout << "\n***Base 1 radius can not  be greater that sphere radius!***";
        }
    }
    else
    {
        cout << "\n ***All the inputs must me positive!***";
    }
}