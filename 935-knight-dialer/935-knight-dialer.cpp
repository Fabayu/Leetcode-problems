class Solution {
public:
    int knightDialer(int n) {
     long int one=1,two=1,three=1,four=1,five=1,six=1,seven=1,eight=1,nine=1,zero=1;
      long int  one1,two1,three1,four1,five1,six1,seven1,eight1,nine1,zero1;
        long mod=pow(10,9)+7;
        for(int j=2;j<=n;j++){
            one1=(eight+six)%mod;
                two1=(seven+nine)%mod;
                three1=(eight+four)%mod;
                four1=(zero+three+nine)%mod;
                // five1=()%mod;
            // five1=(star+hash)%mod;
                six1=(zero+one+seven)%mod;
            seven1=(six+two)%mod;
                eight1=(three+one)%mod;
                nine1=(two+four)%mod;
zero1= (six+four)%mod;
           
one=one1,two=two1,three=three1,four=four1,five=five1,six=six1,seven=seven1,eight=eight1,nine=nine1,zero=zero1;
        }
        int res=(one+two+three+four+five+six+seven+eight+nine+zero)%mod;
        if(n==1){
            return res;
        }
        else {
            return res-1;
        }
    }
};