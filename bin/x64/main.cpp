

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<iostream>
#include<iomanip>
#include<windows.h> 
/*header files*/
using namespace std; 
//by Windows7_MEMZ
void install_runtimes(){
	system("powershell Add-AppxPackage ./Runtimes/*");
}
void install_apps(){
	system("powershell Add-AppxPackage ./Runtimes/*"); //install runtimes
	system("powershell Add-AppxPackage ./Appx/*"); //install apps
}
/***********************************
 *Program entry
 *
 */
int main(){
	cout<<"1.��װӦ��"<<endl;
	cout<<"2.����װ���п�"<<endl;
	cout<<"3.��������"<<endl; 
	cout<<"4.�鿴�̳�"<<endl;
	cout<<"5.�鿴������־"<<endl;
	cout<<"6.���ڱ����"<<endl; 
	cout<<"ѡ��һ��ѡ��������:";/*show the menu*/
	int a;
	cin>>a;
	if(a==2){ //If the user schooses just install the runtime
		install_runtimes();//call *install_runtimes()*
		MessageBox(NULL,"��װ������ȫ����ɣ�ϵͳ������������Ӧ�����и���","��ʾ",MB_OK);
		system("shutdown -r -t 0");
	}else if(a==1){ 
		install_apps();//call *install_apps()*
		MessageBox(NULL,"��װ������ȫ����ɣ�ϵͳ������������Ӧ�����и���","��ʾ",MB_OK);
		system("shutdown -r -t 0");
	}else if(a==3){
		MessageBox(NULL,"ϵͳ��Ҫ��������","��ʾ",MB_OK);
		system("shutdown -r -t 0");
	}else if(a==4){
		system("readme.txt");
		return 0;
	}else if(a==5){
		system("version.txt");
		return 0;
	}else if(a==6){
		MessageBox(NULL,"�汾5.0.5421.32 �ڲ��汾 5311.32\n�����汾��:5.0.5421.32.bluesky_rtm.1132974-2020_amd64fre_client-professional-zh-cn","About",MB_OK);
	}
	return 0;
} 

