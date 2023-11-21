// m3hu1
/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    let maxLength = Math.max(a.length, b.length)
    let solutionStr = ""
    let cf = 0
    a = a.split('').reverse()
    b = b.split('').reverse()
    for (let i = 0; i < maxLength; i++) {
       
        if (a[i] == '1' && b[i] == '1') {
            if (cf == 1) {
                solutionStr = '1' + solutionStr 
            }
            else solutionStr = '0' + solutionStr
            cf = 1
        } else if (a[i] == '1' || b[i] == '1') {
            if (cf == 1) {
                solutionStr = '0' + solutionStr
                cf = 1
            } else {
                solutionStr = '1' + solutionStr 
            }
        } else {
            solutionStr = `${cf}` + solutionStr
            cf = 0
        }
    }
    if (cf == 1) {
        solutionStr = '1' + solutionStr 
    }
    return solutionStr
};