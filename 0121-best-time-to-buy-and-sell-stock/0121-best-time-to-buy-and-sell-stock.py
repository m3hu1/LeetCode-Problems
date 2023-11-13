class Solution(object):
    def maxProfit(self, prices):
        l,r=0,1;maxP=0 
        while r<len(prices):
            if prices[l]<prices[r]:profit=prices[r]-prices[l];maxP=max(maxP, profit)                
            else:l=r 
            r+=1
        return maxP