/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let isExecuted = false;
    return (...args) => (isExecuted ? undefined : ((isExecuted = true), fn(...args)));
};
