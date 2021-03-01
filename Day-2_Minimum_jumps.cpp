int minJumps(int arr[], int n){
   if(n <= 1) 
      return 0;
   if(arr[0] == 0) 
      return -1;
   int ladder = arr[0];
   int step = arr[0];
   int jump = 1;
   for(int level=1; level < n;++level){
        if(level == n - 1) return jump;
        if(level+arr[level] > ladder)
            ladder = level + arr[level];
        step--;
        if(step == 0){
            jump++;
        step = ladder - level;
        if(step == 0) return -1;
    }
  }
   return jump;
}
