/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    var sL = 0;
    var L = 1;
    while(true) {
        yield sL;
        var sum = sL + L;
        sL = L;
        L = sum;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */