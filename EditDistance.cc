#include <iostream>
#include <cstring>
using namespace std;

int minDistance(char* word1,char* word2){
	if(word1==NULL|| *word1=='\0')
		return strlen(word2);
	if(word2==NULL|| *word2=='\0')
		return strlen(word1);
	if(*word1==*word2){
		return minDistance(word1+1,word2+1);
	}
	int d,u,i;
	d=minDistance(word1+1,word2);
	u=minDistance(word1+1,word2+1);
	i=minDistance(word1,word2+1);
	return min(d,u,i)+1;
}

int main(){
	char* word1="saturday";
	char* word2="sunday";
	int result=minDistance(word1,word2);
	cout<<result<<endl;
	return 0;
}
