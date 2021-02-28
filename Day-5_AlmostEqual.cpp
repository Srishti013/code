int countChars(string s1, string s2){
    
    int hash[26] = {0};
    
    for(int i = 0;i<s1.length();i++){
        hash[s1[i]-'a']++;
    }
    for(int i = 0;i<s2.length();i++){
        hash[s2[i]-'a']--;
    }
    
    int count = 0;
    
  
    for(int i = 0;i<26;i++){
        if(hash[i] != 0){
            count+=abs(hash[i]);
        }
    }
    
    return count;
    
}
