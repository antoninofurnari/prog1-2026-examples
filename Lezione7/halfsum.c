double half(int x) {
    return (double)x / 2;
}

int half_sum(int a, int b) {
    int somma = a + b;
    double res = half(somma);
    return res;
}

int main(void) {
    int param = 5;
    double totale = half_sum(param, 3);
    return 0;
}