/**
 * @param {number} millis
 */
const sleep = async (millis) => new Promise( resolve => setTimeout(()=> resolve(millis), millis))

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */