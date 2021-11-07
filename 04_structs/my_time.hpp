/* divides m by n and returns non-negative remainder */
int div (long long &m, int n) {
    int rem = m % n;
    m /= n;
    if (rem < 0) {
        rem += n;
        m--;
    }
    return rem;
}

struct my_time {
    int day, hour, minute, second;

    my_time(long long t = 0) {
        second = div(t, 60);
        minute = div(t, 60);
        hour   = div(t, 24);
        day = t;
    }

    long long to_second() {
        long long res = day;
        res = res * 24 + hour;
        res = res * 60 + minute;
        res = res * 60 + second;
        return res;
    }
};

bool operator < (my_time &t, my_time &u) {
    return t.to_second() < u.to_second();
}

my_time operator - (my_time &t, my_time &u) {
    return my_time(t.to_second() - u.to_second());
}
