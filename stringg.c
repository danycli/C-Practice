 int len = strlen(needle)+1;
    int check = 0;
    char match [len];
    for(int i =0; i<len-1; i++){
        match[i] = haystack[i];
    }
        for(int i = 0; i<len-1; i++){
            if(match[i] == needle[i]){
                check = 0;
            }else{
                check = 1;
            }
        }
        if(check == 0){
            return 0;
        }else{
            return -1;
        }
        //Just for the streak
        //Another strak day