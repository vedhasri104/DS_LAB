#include <stdio.h>

struct Complex {
    float real, imag;
};

struct Complex add(struct Complex c1, struct Complex c2) {
    return (struct Complex){c1.real + c2.real, c1.imag + c2.imag};
}

struct Complex multiply(struct Complex c1, struct Complex c2) {
    return (struct Complex){
        c1.real * c2.real - c1.imag * c2.imag, 
        c1.real * c2.imag + c1.imag * c2.real
    };
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add(c1, c2);
    product = multiply(c1, c2);

    printf("Addition: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Multiplication: %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}