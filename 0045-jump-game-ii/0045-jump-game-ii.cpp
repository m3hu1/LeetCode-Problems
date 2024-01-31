class Solution {
public:
    
    
    int search(int A[],int* p, int n){
		if(n<=1)
			return 1;

        if(p[0]==1)
            return 0;
        else
            p[0]=1;
        int step, max = n;
        for(int i=A[0];i>=1;i--){
            step = search(A+i,p+i,n-i);
            if(step!=0){
                if(step<=max)
                    max = step;
            }
                
        }
        return 0;
    }
    
    int jump(int A[], int n) {
        int* p = new int[n];
        memset(p,0,sizeof(int)*n);
        int i,j;
        for(i=0;i<n;i++){
            for(j=1;j+i<=A[i];j++){
                if(A[i]>=A[j+i]+j)
                    A[j+i]=0;
            }
        }
        return search(A,p,n);   
    }
    
    
};