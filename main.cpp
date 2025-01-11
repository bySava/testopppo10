double my_pow(double base, unsigned int exponent) {
    double result = 1.0; // Инициализация результата как 1.0
    for (unsigned int i = 0; i < exponent; i++) {
        result *= base; // Умножение результата на основание в каждом цикле
    }
    return result; // Возвращаем окончательное значение
}