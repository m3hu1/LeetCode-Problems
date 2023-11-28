// m3hu1
/**
 * @param {string} moves
 * @return {boolean}
 */
var judgeCircle = function(M) {
    return M.replaceAll('R').length == M.replaceAll('L').length && 
           M.replaceAll('U').length == M.replaceAll('D').length
};