class Solution {
public:
    char lowerCase(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0' && ch<='9'))
            return ch;
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    bool valid(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            return 1;
        }else{
            return 0;
        }
    }
    bool chechPalindrome(string s){
        int a=0;
        int e=s.length()-1;
        while(a<=e){
            if(s[a]!=s[e]){
                return false;
            }else{
                a++;
                e--;
            }
        }
        return 1;
    }
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);;
            }
        }
        for(int i=0;i<temp.length();i++){
            temp[i]=lowerCase(temp[i]);
        }
        return chechPalindrome(temp);
    }
};
