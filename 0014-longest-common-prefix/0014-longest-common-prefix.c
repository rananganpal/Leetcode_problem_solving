char* longestCommonPrefix(char** strs, int strsSize) {
    int n=strsSize;
    if (n==0) return "";
    if (n==1) return strs[0];
    char* prefix=(char*)malloc(sizeof(char)*(strlen(strs[0])+1));
    if (prefix==NULL) return NULL;
     strcpy(prefix,strs[0]);
    for (int i=1;i<n;i++){
        int j=0;
        while (prefix[j]!='\0' && strs[i][j]!='\0' && strs[i][j]==prefix[j]) j++;
        prefix[j]='\0';
        if (strlen(prefix)==0) return prefix;
    }
    return prefix;
}