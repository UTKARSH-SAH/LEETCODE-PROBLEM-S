var fibGenerator = function*() {
    let x = 0, y = 1;
    while(true) {
        yield x;
        yield y;
        x = x + y;
        y = x + y;
    }
};