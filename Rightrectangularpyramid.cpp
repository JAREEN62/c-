#include <iostream>
using namespace std;

class rrp
{
private:
    double base_length, base_width, height, slant_height_to_base_length, slant_height_to_base_width;

public:
    rrp(double, double, double, double, double);

    void set_base_length(double);
    double get_base_length();

    void set_base_width(double);
    double get_base_width();

    void set_height(double);
    double get_height();

    void set_slant_height_to_base_length(double);
    double get_slant_height_to_base_length();

    void set_slant_height_to_base_width(double);
    double get_slant_height_to_base_width();

    double get_base_surface_area();

    double get_lateral_surface_area();

    double get_total_surface_area();

    double get_volume();

    void display_results();
};

rrp ::rrp(double base_length, double base_width, double height, double slant_height_to_base_length, double get_slant_height_to_base_width)
{
    set_base_length(base_length);
    set_base_width(base_width);
    set_height(height);
    set_slant_height_to_base_length(slant_height_to_base_length);
    set_slant_height_to_base_width(slant_height_to_base_width);
}

void rrp ::set_base_length(double base_length_param)
{
    base_length = base_length_param;
}

double rrp ::get_base_length()
{
    return base_length;
}

void rrp ::set_base_width(double base_width_param)
{
    base_width = base_width_param;
}

double rrp ::get_base_width()
{
    return base_width;
}

void rrp ::set_height(double height_param)
{
    height = height_param;
}

double rrp ::get_height()
{
    return height;
}

void rrp ::set_slant_height_to_base_length(double slant_height_to_base_length_param)
{
    slant_height_to_base_length = slant_height_to_base_length_param;
}

double rrp ::get_slant_height_to_base_length()
{
    return slant_height_to_base_length;
}

void rrp ::set_slant_height_to_base_width(double slant_height_to_base_width_param)
{
    slant_height_to_base_width = slant_height_to_base_width_param;
}

double rrp ::get_slant_height_to_base_width()
{
    return slant_height_to_base_width;
}

double rrp ::get_base_surface_area()
{
    return base_length * base_width;
}

double rrp ::get_lateral_surface_area()
{
    return (base_length * slant_height_to_base_length) + (base_width * slant_height_to_base_width);
}

double rrp ::get_total_surface_area()
{
    return get_base_surface_area() * get_lateral_surface_area();
}

double rrp ::get_volume()
{
    return (get_base_surface_area() + height) / 3;
}

void rrp ::display_results()
{
    cout << "\nBase surface area : " << get_base_surface_area() << endl;
    cout << "Lateral surface area : " << get_lateral_surface_area() << endl;
    cout << "Total surface area : " << get_total_surface_area() << endl;
    cout << "volume : " << get_volume() << endl;
}

int main()
{
    cout << "Right Rectangualar Prism !\n\n";

    double base_length, base_width, height, slant_height_to_base_length, slant_height_to_base_width;

    cout << "Enter base length : ";
    cin >> base_length;

    cout << "Enter base width : ";
    cin >> base_width;

    cout << "Enter Height : ";
    cin >> height;

    cout << "Enter slant height to base length : ";
    cin >> slant_height_to_base_length;

    cout << "Enter slant width to base width : ";
    cin >> slant_height_to_base_width;

    if (base_length > 0 && base_width > 0 && height > 0 && slant_height_to_base_length > 0 && slant_height_to_base_width > 0)
    {
        if ((base_width / 2) * (base_width / 2) + (height * height) == slant_height_to_base_length * slant_height_to_base_length)
        {
            if ((base_length / 2) * (base_length / 2) + (height * height) == slant_height_to_base_width * slant_height_to_base_width)
            {
                if (base_width == base_length)
                {
                    rrp rrp(base_length, base_width, height, slant_height_to_base_length, slant_height_to_base_width);
                    rrp.display_results();
                }
                else
                    cout<<"\nBase width must be equal to base length!\n"; 
            }
            else
                cout<< "\nHalf of base length, height and slant height to base width must satisfy Pythagorean theorem!\n";
        }
        else
            cout << "\nHalf of the base width, height and slant height to base length must satisfy pythagorean theorem!\n";
    }
    else
        cout << "\nAll the inputs must be positive!\n";
}