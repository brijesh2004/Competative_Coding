public:
    int minChar(string str){
        //Write your code here
  
  int s=0;
int count=0;

int e=str.length()-1;
int temp=e;
while(s<e){
    if(str[s]==str[e]){
        s++;
        e--;
    }
    else{
        count++;
        s = 0;
        temp--;
        e=temp;
    }    
}
return count;
    }
};