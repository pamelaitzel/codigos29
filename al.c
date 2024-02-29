

int main() {
    float horasTrabajadas, precioPorHora, salario;

    // Ingreso de datos por teclado
    printf("Ingrese las horas semanales trabajadas: ");
    scanf("%f", &horasTrabajadas);

    printf("Ingrese el precio por hora: ");
    scanf("%f", &precioPorHora);

    // Cálculo del salario semanal
    if (horasTrabajadas <= 40) {
        salario = horasTrabajadas * precioPorHora;
    } else {
        // Calcula las primeras 40 horas y las horas extras con el factor de 1.5
        salario = 40 * precioPorHora + (horasTrabajadas - 40) * 1.5 * precioPorHora;
    }

    // Mostrar el salario semanal
    printf("El salario semanal del empleado es: %.2f pesos\n", salario);

    return 0;
}
