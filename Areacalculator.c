#include<stdio.h>
#include<math.h>

void main(){
    int choice;
    double side1, side2, radius, res;
    printf("Enter the shape of area you want to calculate\n1 -> circle\n2 -> rectangle\n3 -> square\n4 -> triangle");
    printf("\nPlease enter your choice : ");
    scanf("%d", &choice);
    if (choice > 4){
        printf("Your choice is wrong.Choice correctly");
    } else {
        switch (choice)
        {
        case 1:
            printf("\nPlease Enter the Radius : ");
            scanf("%lf", &radius);
            res = M_PI * radius;
            printf("The area of the circle is : %.2lf", res);
            break;
        case 2:
            printf("Please enter the length : ");
            scanf("%lf", &side1);
            printf("Please enter the width : ");
            scanf("%lf", &side2);
            res = side1 * side2;
            printf("The area of the rectangle : is %.2lf", res);
            break;
        case 3:
            printf("Please enter the side of the square : ");
            scanf("%lf", &side1);
            printf("The area of the square is : %.2lf", side1 * side1);
            break;
        case 4:
            printf("Please enter the base length of the triangle : ");
            scanf("%lf", &side1);
            printf("Please enter the height of the triangle : ");
            scanf("%lf", &side2);
            res = ((side1 * side2) / 2);
            printf("The area of the triangle is : %.2lf", res);
            break;
        default:
            break;
        }
    }
} 