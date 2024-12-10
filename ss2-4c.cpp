#include <stdio.h>

int main() {
    
    int side = 5;

    int perimeter = 4 * side;      
    int area = side * side;       

    printf("Cạnh của hình vuông: %d cm\n", side);
    printf("Chu vi của hình vuông: %d cm\n", perimeter);
    printf("Diện tích của hình vuông: %d cm^2\n", area);

    return 0;
}
