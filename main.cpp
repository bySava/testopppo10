double my_pow(double base, unsigned int exponent) {
        if (exponent == 0) {
        return 1.0; // Возведение в степень 0
    }
    
    double half = my_pow(base, exponent / 2); // Рекурсивный вызов для половинной степени
    
    if (exponent % 2 == 0) {
        return half * half; // Если степень четная
    } else {
        return half * half * base; // Если степень нечетная
    }
}