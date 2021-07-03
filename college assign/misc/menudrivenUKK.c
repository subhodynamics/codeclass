//! Subhadeep pathak 176
//? Menu driven Program UKK sir

#include <stdio.h>
int main()
{
    int ch1 = 0, area_ch = 0, perimeter_ch = 0;
    float area = 0, perimeter = 0, a = 0, b = 0, c = 0, d = 0, h = 0, l = 0, p1 = 0, p2 = 0, pi = 3.14, r = 0;

    printf("1. Area calculation\n");
    printf("2. Perimeter calculation\n");
    printf("Enter your choice:");
    scanf("%i", &ch1);

    switch (ch1)
    {
    case 1:
        printf("11.Area of triangle\n");
        printf("12.Area of Rectangle\n");
        printf("13.Area of circle\n");
        printf("14.Area of Trapezoid\n");
        printf("Enter your choice:");
        scanf("%i", &area_ch);
        switch (area_ch)
        {

        case 11:
            printf("Enter base & height: ");
            scanf("%f%f", &b, &h);
            area = 0.5 * b * h;
            break;
        case 12:
            printf("Enter length and breadth: ");
            scanf("%f%f", &l, &b);
            area = l * b;
            break;
        case 13:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = pi * r * r;
            break;
        case 14:
            printf("Enter parallel sides p1,p2 and height h: ");
            scanf("%f%f%f", &p1, &p2, &h);
            area = ((p1 + p2) / 2) * h;
            break;
        default:
            printf("Wrong choice area menu:\n");
            break;
        }
        printf("Area is %f\n", area);
        break;
    case 2:
        printf("21.perimeter of triangle\n");
        printf("22.perimeter of Rectangle\n");
        printf("23.perimeter of circle\n");
        printf("24.perimeter of Trapezoid\n");
        printf("Enter your choice:");
        scanf("%i", &perimeter_ch);
        switch (perimeter_ch)
        {

        case 21:
            printf("Enter sides a,b,c: ");
            scanf("%f%f%f", &a, &b, &c);
            perimeter = a + b + c;
            break;
        case 22:
            printf("Enter length and breadth: ");
            scanf("%f%f", &l, &b);
            perimeter = 2 * (l + b);
            break;
        case 23:
            printf("Enter radius: ");
            scanf("%f", &r);
            perimeter = 2 * pi * r;
            break;
        case 24:
            printf("Enter sides a,b,c,d: ");
            scanf("%f%f%f%f", &a, &b, &c, &d);
            perimeter = a + b + c + d;
            break;
        default:
            printf("Wrong choice perimeter menu:\n");
            break;
        }
        printf("Perimeter is %f\n", perimeter);
        break;
    default:
        printf("Wrong choice main menu:\n");
        break;
    }

    return 0;
}