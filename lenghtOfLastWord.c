int lengthOfLastWord(char* s) {
    int c=0, n=strlen(s), pos=0;
    while(pos<n){
        if(s[pos]!=' '){
            int count=0;
            while(pos<n&&s[pos]!=' '){
                count++;
                pos++;
            }
            c=count;
        }
        else{
            pos++;
        }
    }
    return c;
}
