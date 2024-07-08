/* Plantee e implemente en Lenguaje C el programa Fibonacci, de forma que lea un
 valor N > 0 y muestre el valor del término N de dicha sucesión. */

int fibonacci(int n) {
    int resultado;

    if (n == 0 || n == 1)
        return n;
    resultado = fibonacci(n - 1) + fibonacci (n - 2);
    return resultado;
}   // Superpoco eficiente, 2 llamadas reculsivas, es casí cuadrático

int main() {

    int fib, n;

    printf("Que término quieres de Fibonacci? ");
    scanf("%d", &n);

    fib = fibonacci(n);

    printf("El termino %d de Fibonacci es %d\n", n, fib);
    
    return 0;
}