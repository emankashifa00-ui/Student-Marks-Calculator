#include<iostream>
using namespace std;
int main(){
	int sub1;
	int sub2;
	int sub3;
	int sub4; 
	int sub5;
	cout<<"Enter your marks for subjects:";
	cin>>sub1>>sub2>>sub3>>sub4>>sub5;
	int total=sub1+sub2+sub3+sub4+sub5;
	float percentage=(total/500.0)*100;
	int totalmarks=500;
	if(sub1<0||sub2<0||sub3<0||sub4<0||sub5<0||sub1>100||sub2>100||sub3>100||sub4>100||sub5>100){cout<<"Invalid data"<<endl<<"Try again"<<endl;
	}else{
	if(sub1>=40){cout<<"subject 1:Pass"<<endl;
	}
	else{cout<<"subject 1:Fail"<<endl;
	}
	if(sub2>=40){cout<<"subject 2:Pass"<<endl;
	}
	else{cout<<"subject 2:Fail"<<endl;}
	if(sub3>=40){cout<<"subject 3:Pass"<<endl;
	}
	else{cout<<"subject 3:Fail"<<endl;}
	if(sub4>=40){cout<<"subject 4:Pass"<<endl;
	}
	else{cout<<"subject 4:Fail"<<endl;}
	if(sub5>=40){cout<<"subject 5:Pass"<<endl;
	}
	else{cout<<"subject 5:Fail"<<endl;}
	if (sub1>=40&&sub2>=40&&sub3>=40&&sub4>=40&&sub5>=40){cout<<"Overall:PASS"<<endl;
	}else{cout<<"Overall:FAIL"<<endl;
	}
	cout<<"Total Marks:"<<totalmarks<<endl;
	cout<<"Obtained marks:"<<total<<endl;
	cout<<"Percentage:"<<percentage<<"%"<<endl;}
	return 0;
}
