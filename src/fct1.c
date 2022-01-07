extern int fct3(int x);

#ifdef FOO
int fct1(int x) {
    return 2*x;
}
#else
int fct1(int x) {
    if (x<0)
        return x;
    else
        return -x;
}
#endif

int fct2(int x) {
    return 2*x-fct3(x);
}
