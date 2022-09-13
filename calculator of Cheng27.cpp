#include <iostream>
#include <stdio.h>
#include <ctime>


using namespace std;
int main(){
	long double unkn1,unkn2;
	int n;
	long double a,b;
	char opt;
	cout<<"欢迎使用橙27牌科学计算器！\n下面是使用指南：\n先输入符号'+''-''*''/'等；\n下一步输入数字就好了！\n";
	cout<<"目前可开放的内容：加(+)减(-)乘(*)除(/)乘方(^)阶乘(!)\n请输入您要计算的内容:(按q退出)\n\n"; 
	while(opt!='q'){
		cin>>opt;
		switch(opt){
		case '+':
			cin>>unkn1>>unkn2;
			cout<<unkn1+unkn2<<endl;
			break;
		case '-':
			cin>>unkn1>>unkn2;
			cout<<unkn1-unkn2<<endl;
			break;
		case '*':
			cin>>unkn1>>unkn2;
			cout<<unkn1*unkn2<<endl;
			break;
		case '/':
			cin>>unkn1>>unkn2;
			cout<<unkn1/unkn2<<endl;
			break;
		case '^':
			cin>>unkn1>>n;a=1;b=unkn1;
			for(int i=1;i<=n;i++){	
				unkn1*=a;
				a=b;
			}
			cout<<unkn1<<endl;
			break;	
		case '!':
		cin>>n; long double s=1;
		unkn1=0;
		for(int i=n;i>=1;i--){	    
		  s*=i;
		} 
		    unkn1=s; 
		    cout<<unkn1<<endl;
	    	break;
	}
	}
	printf("Time used=%.3lfseconds\n\n",(double)clock()/CLOCKS_PER_SEC);
	cout<<"仍在进一步开发中...\n可以不用期待...\n\n";
	system("pause");
	return 0;
}
