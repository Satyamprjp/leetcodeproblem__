class Solution {
public:
    int romanToInt(string s) {
      int sum = 0;
      char prev;
      for(int i = 0 ; i < s.length(); i++)
      {
        if(s[i] == 'M')
        {
            if(prev == 'C'){
                sum += 800;
            }
            else{
                sum+= 1000;
            }
        }
        if(s[i] == 'D')
        {
            if(prev == 'C')
            {
                sum += 300;
            }
            else{
                sum += 500;
            }
        }
        else if(s[i]== 'C')
        {
            if(prev == 'X')
            {
                sum += 80;
            }
            else{
                sum += 100;
            }
        }
        else if(s[i]=='L'){
            if(prev =='X')
            {
                sum += 30;
            }
            else{
                sum +=50;
            }
        }
        else if(s[i]=='X')
        {
            if(prev == 'I')
            {
                sum += 8;
            }
            else{
                sum += 10;
            }
        }
        else if(s[i]=='V')
        {
            if(prev == 'I')
            {
                sum += 3;
            }
            else{
                sum += 5;
            }
        }
        else if(s[i]== 'I')
        {
            sum+= 1;
        }
        else{
            sum += 0;
        }
        prev = s[i];
      }  
      return sum;
    }
};