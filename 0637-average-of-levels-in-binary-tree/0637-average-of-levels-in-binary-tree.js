// m3hu1
var averageOfLevels = function(root) {

    let queue=[root]
    let result=[]
    while(queue.length>0){
        let levelSize=queue.length
        let levelSum = 0
        for(let i=0;i<levelSize;i++){
            let item = queue.shift()
            levelSum+=item.val
            if(item.left){
                queue.push(item.left)
            }
            if(item.right){
                queue.push(item.right)
            }
        }
        let average = levelSum/levelSize
        result.push(average)
    }
    return result
};