#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;




int solution(int a, int b, int c, int d) {
    int answer = 0;
    int arr[4] = {a,b,c,d};
    int cnt[7] = {0};
    
     int p = 0, q = 0, r = 0;
    
    for (int i = 0; i < 4; i++){
        cnt[arr[i]]++;
    }
    for(int i=1; i<7; i++){
         if(cnt[i]==4){
             p=i;
         return 1111*p;
         }
    }
    for(int i=1; i<7; i++){
         if(cnt[i]==3)p=i;
         if(cnt[i]==1)q=i;
    }
    if(p&&q) return (10*p+q)*(10*p+q);
   
    int paircount = 0;
    for(int i=1; i<7; i++){
        if(cnt[i]==2){
            if(paircount==0)p=i;
            else q=i;
            paircount++;
        }
    }
    if(paircount == 2){
        return (p + q) * abs(p - q);
    }
    int abscount=0;
    for(int i=1; i<7; i++){
        if(cnt[i]==2){
            p=i;
        }else if(cnt[i]==1){
            if(abscount==0) q=i;
            else r=i;
            abscount++;
        }
    }
    if (p && q && r)
        return q * r;
    for (int i = 1; i <= 6; i++) {
        if (cnt[i] == 1)
            return i;  // 가장 작은 값
    }
   
    return answer;
}