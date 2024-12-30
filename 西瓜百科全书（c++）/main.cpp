#include <iostream>
#include <string>
#include "watermelon.h" 
using namespace std;
void displayMenu() {
    cout<<"��ѡ������Ҫ���ҵ����ݣ�\n";
    cout<<"1. ���Ͽ�����\n"; 
    cout<<"2. ������Ϸ��\n";
    cout<<"3. �����ʴ���\n";
    cout<<"4. �������\n"; 
    cout<<"5. ��Ȩ����\n";
    cout<<"0. �˳�\n";
    cout<<"����������ѡ��";
}
void firstmenu() {
	cout<<"-------------------------------------------------\n";
    cout<<"��ѡ������Ҫ�˽�����ݣ�\n";
    cout<<"1. ����\n";
    cout<<"2. Ӫ����ֵ\n";
    cout<<"3. ����\n";
    cout<<"4. ��ֲ����\n";
    cout<<"5. �й��������ϲ���\n";
    cout<<"6. ����ͼ\n";
    cout<<"7. ���Ϲ�ʫ\n"; 
    cout<<"0. ������һ��\n";
    cout<<"����������ѡ��";
}

void secondmenu() {
	cout<<"-------------------------------------------------\n";
    cout<<"��ѡ������Ҫ�����Ϸ��\n";
    cout<<"1. �����Թ�\n";
    cout<<"2. ������\n";
    cout<<"3. ��˽������\n";
    cout<<"0. ������һ��\n";
    cout<<"����������ѡ��";
}
void thirdmenu() {
	cout<<"-------------------------------------------------\n";
    cout<<"��ѡ������Ҫ������ʴ���\n";
    cout<<"1. ����֪ʶ����\n";
    cout<<"2. ���Ϲ�ʫ����\n";
    cout<<"0. ������һ��\n";
    cout<<"����������ѡ��";
}
int main() {
	const string v="v1.4.8";
    Watermelon watermelon;
    int choice,c1,c2,c3,cp;
    string user;
	cout<<"��ӭ�������ϵİٿ�ȫ�飡\n��ǰ�汾��"<<v<<endl;
	cout<<"-------------------------------------------------\n";
	cout<<"�������������(����ENTER����)��";
	getline(cin,user); 
	system("cls");
	if(user!=""){
	cout<<"���ã�"<<user<<endl;	
	cout<<"-------------------------------------------------\n";
	}	
    do {
        displayMenu();
		cin >> choice;
		cout<<endl;
        switch (choice) {
            case 1:
                do{
                	firstmenu();
                	cin>>c1;
                	switch(c1){
                		case 1:
                			watermelon.printTypes(); break; 
                		case 2:
                			watermelon.printNutrition(); break; 
						case 3:
                			watermelon.printCultivation(); break; 
						case 4:
                			watermelon.funFact(); break; 
                		case 5:
							watermelon.where(); break;
						case 6:
							watermelon.picture(); break;
						case 7:
							do{
			                	watermelon.poemmenu();
			                	cin>>cp;
			                	switch(cp){
                			case 1:
	                			system("cls"); 
	                			cout<< "1.����������\n\n�Ρ�������\n�γ����嵶����Ʋ���ƿ��\nǧ���ӣ�ң�һ�Ż�ˮ����\n���ʶٳ��̻�������ݱ�����ѩ����\n\n����ʫ������п����ϵ�˲��������Ʒ��ʱ��������ܡ�ʫ���á����嵶�����п��硰����ƿ��������ϣ�¶�������硰��ӣ�ҡ���Ĺ��Ѻ͡���ˮ������Ĺ�ȿ�����º󣬷·������������̻����������ݼ��򷢳���ѩ����������������ϵ�������������\n\n"; 
								break; 
	                		case 2:
	                			system("cls"); 
	                		    cout<<"2.�����ϡ�\n\n�Ρ��˷�\n�ദ����ã���Ȼ�����š�\n��������Ө��������������\n��������ˣ�����������\n�����޴��֣�ѩƬ�ر��̡�\n\n����ʫ���������ϵ�������������ʫ���ڻ���õ���������Ȼ�ġ������š����п�����徧Ө�������������ݶ��е����䡣���ϵ������ܹ��������յ����ȣ����˵ľ�������ø����ˡ��������������ʫ�˶��������ϵ�ϲ������Ϊ���Ŷ�û��������ζ�����ϣ�ֻ����ѩƬһ���ı��̲�����֮��ȡ�\n\n"; 
								break; 
							case 3:
								system("cls"); 
	                		    cout<<"3.��ֵ����ѧȤ�����Լ�����������ʵ���������ڡ�\n\n�Ρ�����\n�鷿�ſ���ӢӢ����ζ��Ȼ����ܰ��\n�����������ȴ������Ӧ�������ࡣ\n\n�ɫ�¶���ˮ����ζ����������������Ʈ����������ɢ���^�ֽ�������\n����ʫ������������ϵ���̬��ζ������������ʫ�˵���С�ǰ�������������ϵ������͹�ʵ������ر���Ϊ���鷿�ſ���ӢӢ��������������ζ��Ȼ�����ţ�ʫ���á������������ȴ�����������ϵ���������󣬲�����˶ԡ������ࡱ������ָѧ�������ˣ��Ĺ�����˼�����������������ϵ��������������Լ���������������Ǵ��������������á�\n\n";
								break; 
							case 4:
								system("cls"); 
	                		    cout<<"4.������԰��\n\n�Ρ����ɴ�\n����ӯ԰���ճ������Ϲ�Բ�����롣\n����һƬ��������񵶿�����ȿ��\n\n����ʫ�����һ����������԰�ľ��󡣵�һ��'����ӯ԰���ճ�'��������������԰������ïʢ�ľ��󡣵ڶ���'���Ϲ�Բ������'����������������԰�е�λ�ã�����Բ����������������'����һƬ������'��������ϸ����Ǵ����������У������������յ����ȡ����һ��'���񵶿�����ȿ'�ñ������ַ��������п�����ʱ�������龰����ɫ����Ƥ����񣬶���ɫ�Ĺ�ȿ�����˴��ѡ�\n\n"; 
								break; 
							case 0:
	                			cout<< "\n�����˳���...\n\n"; break; 
							default:
	                			cout<< "\n��Ч��ѡ�����������г���������Ч��ѡ�\n\n"; 					
						}
					}while(cp!=0);
                	break;				
						case 0:
                			cout<< "�����˳���...\n"; break; 
						default:
                			cout<< "\n��Ч��ѡ�����������г���������Ч��ѡ�\n\n"; 					
					}
				}while(c1!=0);
				system("cls"); 
                break;
            case 2:
                do{
                	secondmenu();
                	cin>>c2;
                	switch(c2){
                		case 1:
                			watermelon.migong();
							break; 
                		case 2:
                			watermelon.hit();
							break; 
						case 3:
							watermelon.pwt(); 
							break; 
						case 0:
                			cout<< "�����˳���...\n"; break; 
						default:
                			cout<< "\n��Ч��ѡ�����������г���������Ч��ѡ�\n\n"; 					
					}
				}while(c2!=0);
				system("cls"); 
                break;
            case 3:
                do{
                	thirdmenu();
                	cin>>c3;
                	switch(c3){
                		case 1:
                			watermelon.zhishi(user);
							break; 
                		case 2:
                			watermelon.zhishi2(user);
							break; 
						case 0:
                			cout<< "�����˳���...\n"; break; 
						default:
                			cout<< "\n��Ч��ѡ�����������г���������Ч��ѡ�\n\n"; 					
					}
				}while(c3!=0);
				system("cls"); 
                break;
			case 4:
				watermelon.getnew();
				break;
			case 5:
				watermelon.shengming(v);
				break;		    
            case 0:
                cout<< "�����˳���...\n";
                break;    
            default:
                cout<< "��Ч��ѡ�����������г���������Ч��ѡ�\n\n";
                cout<<"-------------------------------------------------\n";
        }
    } while (choice !=0);

    return 0;
}
