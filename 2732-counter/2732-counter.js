/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    let v=n;
    return function() {
        return (v++);
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */