module.exports = { 
 //param A : array of integers
 //return an integer
    bulbs : function(A){
        var count=0;
        for(var i=0;i<A.length;i++){
            if(A[i]==1 && count%2==0) continue;
            else if(A[i]==0 && count%2==1) continue;
            else if(A[i]==1 && count%2==1) count++;
            else if (A[i]==0 && count%2==0) count++;
        }
        return count;

    }
};