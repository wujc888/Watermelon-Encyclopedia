#include <iostream>
#include "watermelon.h" 
using namespace std;
void displayMenu() {
    cout<<"请选择您想要了解的内容：\n";
    cout<<"1. 关于西瓜的介绍\n"; 
    cout<<"2. 西瓜画\n";
    cout<<"3. 西瓜古诗\n";
    cout<<"4. 西瓜知识竞赛\n";
    cout<<"5. 西瓜迷宫\n";
    cout<<"6. 打西瓜游戏\n";
    cout<<"7. 猪八戒吃西瓜游戏\n";
    cout<<"8. 软件更新\n"; 
    cout<<"9. 版权声明\n";
    cout<<"0. 退出\n";
    cout<<"请输入您的选择：";
}
void firstmenu() {
	cout<<"-------------------------------------------------\n";
    cout<<"请选择您想要了解的内容：\n";
    cout<<"1. 介绍\n";
    cout<<"2. 营养价值\n";
    cout<<"3. 种类\n";
    cout<<"4. 种植技巧\n";
    cout<<"5. 中国部分西瓜产地\n";
    cout<<"6. 返回上一级\n";
    cout<<"请输入您的选择：";
}
void poemmenu(){
	cout<<"-------------------------------------------------\n";
    cout<<"请选择您想要了解的古诗：\n";
    cout<<"1. 文天祥《西瓜吟》"<<endl;
	cout<<"2. 顾逢《西瓜》"<<endl;
	cout<<"3. 曾丰《值侯修学趣儒人稍急因遗莲花莲实西瓜于吾宗》"<<endl;
	cout<<"4. 范成大《西瓜园》"<<endl;
	cout<<"5. 返回上一级\n";
    cout<<"请输入您的选择：";
}

int main() {
	string v="v1.3.8";
    Watermelon watermelon;
    int choice,c2,c3;
	cout<<"欢迎来到西瓜的百科全书！\n当前版本是"<<v<<endl;
	cout<<"-------------------------------------------------\n";	
    do {
        displayMenu();
		cin >> choice;
		cout<<endl;
        switch (choice) {
            case 1:
                do{
                	firstmenu();
                	cin>>c2;
                	switch(c2){
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
                			cout<< "正在退出中...\n"; break; 
						default:
                			cout<< "\n无效的选择，请重新运行程序并输入有效的选项。\n\n"; 					
					}
				}while(c2!=6);
				system("cls"); 
                break;
            case 2:
                watermelon.picture();
                break;
            case 3:
                do{
                	poemmenu();
                	cin>>c3;
                	switch(c3){
                		case 1:
                			system("cls"); 
                			cout<< "1.《西瓜吟》\n\n宋·文天祥\n拔出金佩刀，斫破苍玉瓶。\n千点红樱桃，一团黄水晶。\n下咽顿除烟火气，入齿便作冰雪声。\n\n这首诗描绘了切开西瓜的瞬间美景与品尝时的美妙感受。诗人用“金佩刀”来切开如“苍玉瓶”般的西瓜，露出里面如“红樱桃”般的瓜籽和“黄水晶”般的瓜瓤。吃下后，仿佛能立刻消除烟火气，而牙齿间则发出冰雪般的声音，形容西瓜的清凉与甜美。\n\n"; 
							break; 
                		case 2:
                			system("cls"); 
                		    cout<<"2.《西瓜》\n\n宋·顾逢\n多处淮乡得，天然碧玉团。\n破来肌体莹，嚼处齿牙寒。\n清敌炎威退，凉生酒量宽。\n东门无此种，雪片簇冰盘。\n\n这首诗赞美了西瓜的清凉与美丽。诗人在淮乡得到了这种天然的“碧玉团”，切开后瓜体晶莹，吃在嘴里牙齿都感到寒冷。西瓜的清凉能够抵御夏日的炎热，让人的酒量都变得更宽了。最后两句则表达了诗人对这种西瓜的喜爱，认为东门都没有这种美味的西瓜，只有像雪片一样的冰盘才能与之相比。\n\n"; 
							break; 
						case 3:
							system("cls"); 
                		    cout<<"3.《值侯修学趣儒人稍急因遗莲花莲实西瓜于吾宗》\n\n宋·曾丰\n珠房颗颗绿英英，兴味超然芹藻馨。\n不必铁槌挝碎却，苦心应念子衿青。\n\n绀色毬儿护水晶，味甘如蜜冷如冰。香风飘满葵丘戍，散与鸮林解郁蒸。\n这首诗不仅描绘了西瓜的形态与味道，还寄托了诗人的情感。前两句描述了西瓜的藤蔓和果实，形象地比喻为“珠房颗颗绿英英”，并赞美其兴味超然。接着，诗人用“不必铁槌挝碎却”来形容西瓜的易碎与珍贵，并表达了对“子衿青”（可能指学生或儒人）的关心与思念。后两句则描绘了西瓜的甜美与清凉，以及它在夏日里给人们带来的舒适与愉悦。\n\n";
							break; 
						case 4:
							system("cls"); 
                		    cout<<"4.《西瓜园》\n\n宋·范成大\n绿蔓盈园夏日长，西瓜滚圆卧中央。\n清凉一片消烦暑，碧玉刀开见红瓤。\n\n这首诗描绘了一幅夏日西瓜园的景象。第一句'绿蔓盈园夏日长'描述了夏天西瓜园里藤蔓茂盛的景象。第二句'西瓜滚圆卧中央'形象地描绘了西瓜在园中的位置，它们圆润地躺在那里。第三句'清凉一片消烦暑'表达了西瓜给人们带来的清凉感，帮助消除夏日的炎热。最后一句'碧玉刀开见红瓤'用比喻的手法描述了切开西瓜时看到的情景，绿色的外皮像碧玉，而红色的瓜瓤则令人垂涎。\n\n"; 
							break; 
						case 5:
                			cout<< "正在退出中...\n"; break; 
						default:
                			cout<< "\n无效的选择，请重新运行程序并输入有效的选项。\n\n"; 					
					}
				}while(c3!=5);
				system("cls"); 
                break;
            case 4:
                watermelon.zhishi();
                break;
            case 5:
				watermelon.migong();
				break;
			case 6:
				watermelon.hit();
				break;
			case 7:
				watermelon.pwt();
				break;
            case 8:
				watermelon.getnew();
				break;
            case 9:
                watermelon.shengming();
                break;    
            case 0:
                cout<< "正在退出中...\n";
                break;    
            default:
                cout<< "无效的选择，请重新运行程序并输入有效的选项。\n\n";
                cout<<"-------------------------------------------------\n";
        }
    } while (choice !=0);

    return 0;
}
