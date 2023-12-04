/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    let values = Object.keys(obj)

    if(values.length === 0){
        return true
    }else {
        return false
    }

};