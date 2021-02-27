int almostSubstring(string t, string s) {
        int count=0,n=t.size();
        for(int i=0;i<n-4;i++)
        {
            string y;
            y[0]=t[i];
            y[1]=t[i+2];
            y[2]=t[i+4];
            if(!y.compare(s))
            count++;
        }
        return count;
}
