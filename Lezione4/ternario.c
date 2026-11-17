int main() {
    /* Con operatore ternario */
    int max = (a > b) ? a : b;

    /* Con if-else equivalente */
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
}