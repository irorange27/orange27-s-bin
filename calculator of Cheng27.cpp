#include <iostream>
#include <stdio.h>
#include <ctime>


using namespace std;
int main(){
	long double unkn1,unkn2;
	int n;
	long double a,b;
	char opt;
	cout<<"��ӭʹ�ó�27�ƿ�ѧ��������\n������ʹ��ָ�ϣ�\n���������'+''-''*''/'�ȣ�\n��һ���������־ͺ��ˣ�\n";
	cout<<"Ŀǰ�ɿ��ŵ����ݣ���(+)��(-)��(*)��(/)�˷�(^)�׳�(!)\n��������Ҫ���������:(��q�˳�)\n\n"; 
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
	cout<<"���ڽ�һ��������...\n���Բ����ڴ�...\n\n";
	system("pause");
	return 0;
}
