 int arrangeCoins(int n) {
        int rows = 0;
        int i = 1;
        while(n>0){
        if(n-i<0) break;
        n-=i;
        rows+=1;
        i+=1;
        }
        return rows;
    }