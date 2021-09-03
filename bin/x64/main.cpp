

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
	cout<<"1.安装应用"<<endl;
	cout<<"2.仅安装运行库"<<endl;
	cout<<"3.重新启动"<<endl; 
	cout<<"4.查看教程"<<endl;
	cout<<"5.查看更新日志"<<endl;
	cout<<"6.关于本软件"<<endl; 
	cout<<"选择一个选项并输入序号:";/*show the menu*/
	int a;
	cin>>a;
	if(a==2){ //If the user schooses just install the runtime
		install_runtimes();//call *install_runtimes()*
		MessageBox(NULL,"安装部署已全部完成，系统将重新启动以应用所有更改","提示",MB_OK);
		system("shutdown -r -t 0");
	}else if(a==1){ 
		install_apps();//call *install_apps()*
		MessageBox(NULL,"安装部署已全部完成，系统将重新启动以应用所有更改","提示",MB_OK);
		system("shutdown -r -t 0");
	}else if(a==3){
		MessageBox(NULL,"系统将要重新启动","提示",MB_OK);
		system("shutdown -r -t 0");
	}else if(a==4){
		system("readme.txt");
		return 0;
	}else if(a==5){
		system("version.txt");
		return 0;
	}else if(a==6){
		MessageBox(NULL,"版本5.0.5421.32 内部版本 5311.32\n完整版本号:5.0.5421.32.bluesky_rtm.1132974-2020_amd64fre_client-professional-zh-cn","About",MB_OK);
	}
	return 0;
} 

