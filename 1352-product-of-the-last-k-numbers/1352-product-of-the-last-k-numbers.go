type ProductOfNumbers struct {
    prods []int
    pfx int
}


func Constructor() ProductOfNumbers {
    return ProductOfNumbers{
        pfx: 1,
    }
}


func (this *ProductOfNumbers) Add(num int)  {
    if num == 0 {
        this.pfx = 1
        this.prods = []int{}
    } else {
        this.pfx *= num
        this.prods = append(this.prods, this.pfx)
    }
}


func (this *ProductOfNumbers) GetProduct(k int) int {
    if k > len(this.prods) {
        return 0
    }

    s, e := len(this.prods) - k - 1, len(this.prods) - 1
    
    if s < 0 {
       return this.prods[e]
    }

    return this.prods[e] / this.prods[s]
}