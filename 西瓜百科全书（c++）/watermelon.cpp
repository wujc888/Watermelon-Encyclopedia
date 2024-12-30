#include "watermelon.h"
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#define RESET "\x1B[0m"
#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
using namespace std;

void Watermelon::hide(){
	HANDLE            hOut;
	CONSOLE_CURSOR_INFO curInfo;
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	curInfo.dwSize=1;
	curInfo.bVisible=0;
	SetConsoleCursorInfo(hOut,&curInfo);
}

void Watermelon::set(){
	HANDLE hOut;
	COORD pos{0,0};
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut,pos);
}
struct Question {
    string question;
    string options[4];
    char correctAnswer; // 正确答案的字母（A, B, C, D）
};
struct Question2{
    string question2;
    string options2[4];
    char correctAnswer2; // 正确答案的字母（A, B, C, D）
};

void Watermelon::printTypes() {
	system("cls"); 
    cout << "西瓜（学名：Citrullus lanatus）是葫芦科，又叫寒瓜、夏瓜，属一年生蔓生藤本植物。\n";
    cout << "西瓜是一种广泛栽培的食用植物，原产于非洲热带的干旱沙漠地带，后传入中国。\n\n";	
}

void Watermelon::printNutrition() {
	system("cls"); 
    cout << "营养价值：\n";
    cout << "西瓜含有大量水分、糖分、多种氨基酸、维生素、矿物质等营养成分。\n";
    cout << "它不仅能够清热解暑、除烦止渴，还有利尿、降血压等功效。\n\n";
	
}

void Watermelon::printCultivation() {
	system("cls"); 
    cout << "种类：\n";
    cout << "西瓜的种类繁多，常见的有黑皮瓜、花皮瓜、无籽瓜、黄肉瓜等。\n";
    cout << "不同种类的西瓜在口感、甜度、水分含量等方面有所不同。\n\n";
    
}

void Watermelon::funFact() {
	system("cls"); 
    cout << "种植技巧：\n";
    cout << "1. 土壤选择：选择排灌方便、土层深厚、土质疏松、肥力中等或中上等的地块种植,且周围温度尽量是25~30度。\n";
    cout << "   在整地前，每亩施充分腐熟的有机肥3000～5000斤，复合肥200～300斤，撒施后进行深翻土地，整平耙细。\n";
    cout << "2. 种子处理：选用饱满、无虫害的西瓜种子。为了提高发芽率，可以将种子放入温水中浸泡4-6小时，捞出沥干水分，露白后即可播种。\n";
    cout << "3. 播种时间：春季气温稳定在15℃以上时播种。采用点播法，每穴放1-2粒种子，覆盖2-3厘米厚的细土，保持土壤湿润。\n";
    cout << "4. 田间管理：西瓜分枝能力强，需要及时整枝压蔓，一般采用双蔓整枝或三蔓整枝的方法，保留主蔓和两条或三条健壮的侧蔓。\n";
    cout << "   在西瓜生长期间，要合理施肥和浇水。根据西瓜生长需要适时追肥，保持土壤湿润，避免积水。\n";
    cout << "5. 病虫害防治：西瓜病虫害较多，要提前预防。可以采用物理防治和化学防治相结合的方法进行防治。\n";
    cout << "   在发病初期，可以使用杀菌剂或杀虫剂进行防治，如多菌灵、百菌清、吡虫啉等。\n";
    cout << "6. 采收时机：西瓜的成熟时间因品种和种植时间而异。可以通过观察西瓜的外观、敲打西瓜听声音等方法来判断西瓜是否成熟。\n";
    cout << "   成熟的西瓜表皮光滑，花纹清晰，果柄处的茸毛脱落，用手敲打西瓜时，发出‘砰砰’的声音。\n\n";
    
}
void Watermelon::show()
{
	HANDLE h_GAME =GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor_info;
	GetConsoleCursorInfo(h_GAME,&cursor_info);
	cursor_info.bVisible=true;
	SetConsoleCursorInfo(h_GAME,&cursor_info);
}

void Watermelon::picture() {
	system("cls"); 
    cout << RED; // 使用红色作为替代，因为ANSI没有纯黑色
    cout << "                                /\\ "<<endl;
    cout << "                               /  \\ "<<endl;
    cout << "                              /  · \\ "<<endl;
    cout << "                             /      \\ "<<endl;
    cout << "                            / ·    · \\ "<<endl;
    cout << "                            **********"<<endl;
    cout << RESET; // 重置颜色

	cout << GREEN;
    cout << "                            **********\n"<<endl;
    cout << RESET; // 重置颜色
}



void Watermelon::zhishi2(string a){
	system("cls"); 
	srand(time(0));
	if(a=="")
	cout<<"欢迎您参加西瓜古诗竞赛！本次题目共8道，每道10分，共80分。\n"; 
	else
	cout<<a<<"，欢迎您参加西瓜古诗竞赛！本次题目共8道，每道10分，共80分。\n"; 
    vector<Question2> questions2= {
    	{"下列哪句古诗中明确提到了西瓜这一水果？", {"A. “小荷才露尖尖角，早有蜻蜓立上头。”", "B. “碧蔓凌霜卧软沙，年来处处食西瓜。”", "C. “接天莲叶无穷碧，映日荷花别样红。”", "D. “采菊东篱下，悠然见南山。”"}, 'B'},//木桩 
        {"西瓜是哪个季节的水果？", {"A. 春季", "B. 夏季", "C. 秋季", "D. 冬季"}, 'B'},
        {"哪位宋代诗人以西瓜为题，写下了“多自淮乡得，天然碧玉团”这样的诗句？", {"A. 苏轼", "B. 杨万里", "C. 范成大", "D. 陆游"}, 'C'},
        {"下列古诗中，哪一句描述了西瓜的清凉解暑之功？", {"A. “寒瓜方卧垅，秋菽欲满田。”", "B. “绿玉攒眉处，黄酥点额时。”", "C. “清风徐来，水波不兴。”", "D. “红纱帐里透芳香，碧玉盘中缀锦囊。”"}, 'A'},
        {"“黑籽红瓤裹白纱，碧皮绿蔓走天涯。”这句诗描绘了哪种水果？", {"A. 桃子", "B. 梨", "C. 西瓜", "D. 葡萄", },'C'}, // 注意：这里的90%是简化说法，实际可能有所不同
        {"下列哪句诗中的意象与西瓜的圆润外形相似？", {"A. “团圆饼子囫囵吞，肚里文章未著痕。”", "B. “明月几时有？把酒问青天。”", "C. “千磨万击还坚劲，任尔东西南北风。”", "D. “独在异乡为异客，每逢佳节倍思亲。”"}, 'B'},
        {"哪位诗人通过“碧蔓凌霜卧软沙”这样的诗句，展现了西瓜在田野中的生长状态？", {"A. 李白", "B. 杜甫", "C. 文天祥", "D. 范成大"}, 'D'}, // 注意：西瓜有多种营养，这里仅选一项作为示例
        {"下列哪句诗可以用来形容西瓜切开后红瓤黑籽的诱人景象？", {"A. “碧玉盘中缀锦囊，猩红纱帐透芳香。”", "B. “红纱帐里透芳香，碧玉盘中缀锦囊。”", "C. “碧玉妆成一树高，万条垂下绿丝绦。”", "D. “红瓤黑籽满盘中，甘甜可口沁心脾。”"}, 'D'}, // 注意：具体时间可能因环境而异
        {"下列哪句诗与西瓜的甜美口感最为贴切？", {"A. “甘之如饴，美可常珍。”", "B. “酸涩苦辛咸淡甘，味之七品入舌尖。”", "C. “入口甘香冰玉寒，余味绕颊齿牙间。” ","D. “珍馐美味满桌前，不及此瓜甜似绵。”"}, 'C'}// 注意：冷冻可能会影响口感，但技术上可行
    };
	int s=0;
	char ans;
	vector<int> temp;
	for (int i = 0; i < 8; ++i)
	{
		temp.push_back(i + 1);
		    	
	}
	random_shuffle(temp.begin(), temp.end());//turn num order
    for(int i=0;i<8;i++){
    	int a=temp[i];
    	cout<<i+1<<". "<<questions2[a].question2<<endl;
    	for(int i=0;i<4;i++){
    	cout<<questions2[a].options2[i]<<endl;
    	}
    	cin>>ans;
    	if(toupper(ans)==questions2[a].correctAnswer2){
    		cout<<"恭喜您！答对了！\n"; 
			s+=10; 
		}else{
			cout<<"很遗憾，答错了。正确答案是"<<questions2[a].correctAnswer2<<endl; 
		}
		cout<<endl; 
	}
	cout << "游戏结束！您的最终分数是: " <<s<< endl;
	cout<<endl;
	}
	
void Watermelon::zhishi(string a){
	system("cls"); 
	srand(time(0));
	if(a=="")
	cout<<"欢迎您参加西瓜知识竞赛！本次题目共10道，每道10分，共100分。\n"; 
	else
	cout<<a<<"，欢迎您参加西瓜知识竞赛！本次题目共10道，每道10分，共100分。\n"; 
    vector<Question> questions = {
    	{"西瓜是哪个季节的水果？", {"A. 春季", "B. 夏季", "C. 秋季", "D. 冬季"}, 'B'},//木桩 
        {"西瓜是哪个季节的水果？", {"A. 春季", "B. 夏季", "C. 秋季", "D. 冬季"}, 'B'},
        {"西瓜的哪个部分最甜？", {"A. 外皮", "B. 种子", "C. 果肉中心", "D. 靠近外皮"}, 'C'},
        {"西瓜皮可以食用吗？", {"A. 可以", "B. 不可以", "C. 只有绿色的皮可以", "D. 只有黄色的皮可以"}, 'A'},
        {"西瓜含有多少水分？", {"A. 50%", "B. 70%", "C. 90%", "D. 100%"}, 'C'}, // 注意：这里的90%是简化说法，实际可能有所不同
        {"西瓜的种子可以种植吗？", {"A. 可以", "B. 不可以", "C. 只有黑色的种子可以", "D. 只有白色的种子可以"}, 'A'},
        {"西瓜有哪些营养价值？", {"A. 富含维生素C", "B. 富含脂肪", "C. 富含糖分无营养", "D. 以上都不是"}, 'A'}, // 注意：西瓜有多种营养，这里仅选一项作为示例
        {"西瓜切开后放置多久不宜食用？", {"A. 1小时", "B. 2小时", "C. 半天", "D. 一天"}, 'C'}, // 注意：具体时间可能因环境而异
        {"西瓜可以冷冻保存吗？", {"A. 可以", "B. 不可以", "C. 只能冷藏", "D. 冷藏冷冻都可以"}, 'A'}, // 注意：冷冻可能会影响口感，但技术上可行
        {"西瓜的英文是什么？", {"A. Watermelon", "B. Melon", "C. Pineapple", "D. Orange"}, 'A'},
        {"西瓜属于那个科？",{"A. 茄科","B. 葫芦科","C. 豆科","D. 菊科"},'B'}, 
        {"西瓜属于哪种类型的水果？",{"A. 浆果类","B. 瓜类","C. 核果类","D. 柑橘类"},'B'},
        {"西瓜皮可以用来做什么？",{"A. 只能扔掉","B. 可以腌制成咸菜","C. 可以做成果皮糖","D. B和C都可以"},'D'},
		{"西瓜籽可以食用吗？",{"A. 可以，且营养丰富","B. 不可以，会在肚子里长出西瓜","C. 不可以，因为有毒","D. 可以，但营养价值不高"},'D'}
    };
	int s=0;
	char ans;
	vector<int> temp;
	for (int i = 0; i < 12; ++i)
	{
		temp.push_back(i + 1);
		    	
	}
	random_shuffle(temp.begin(), temp.end());//turn num order
    for(int i=0;i<10;i++){
    	int a=temp[i];
    	cout<<i+1<<". "<<questions[a].question<<endl;
    	for(int i=0;i<4;i++){
    	cout<<questions[a].options[i]<<endl;
    	}
    	cin>>ans;
    	if(toupper(ans)==questions[a].correctAnswer){
    		cout<<"恭喜您！答对了！\n"; 
			s+=10; 
		}else{
			cout<<"很遗憾，答错了。正确答案是"<<questions[a].correctAnswer<<endl; 
		}
		cout<<endl; 
	}
	cout << "游戏结束！您的最终分数是: " <<s<< endl;
	cout<<endl;
	}
void Watermelon::migong(){
system("cls"); 
hide();
int SIZE = 10;
srand (time(0));
int a=rand()%(7-1+1)+1;
int watermelonX = a, watermelonY =a;
// 迷宫地图，0表示通路，1表示墙壁
char maze[SIZE][SIZE] = {
    "##########",
    "#    #  ##",
    "# ## ### #",
    "##       #",
    "## #  ## #",
    "##  #  # #",
    "#     ## #",
    "#   #   ##",
    "# #    # #",
    "##########"
};

// 玩家位置
int playerX = 1, playerY = 1,x=0;
if(watermelonX==playerX&&watermelonY==playerY) {
	watermelonY++;
	watermelonX+=3;
}
    bool gameOver = false;
	maze[watermelonX][watermelonY]=' ';
    while (!gameOver){
    	set();
    	cout<<"欢迎来玩西瓜迷宫！请用WASD控制上左下右，P是您的位置，W是西瓜，#是墙壁。请将输入法切换为英文。快去吃西瓜吧！\n"; 
    	for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == playerX && j == playerY) {
                cout << 'P'; // 'P'表示玩家
            } else if (i == watermelonX && j == watermelonY) {
                cout << 'W'; // 'W'表示西瓜
            } else {
                cout << maze[i][j];
            }
        }
        cout<<endl; 
    	}
        // 检查键盘输入
        if (kbhit()) {
            char input = getch();
            int newX = playerX, newY = playerY;
    		switch (input) {
        		case 'w': newX--;  break; // 上
        		case 's': newX++;  break; // 下
       	 		case 'a': newY--;  break; // 左
        		case 'd': newY++;  break; // 右
       		}
       	

    // 检查新位置是否在迷宫内且不是墙壁
    if (maze[newX][newY]==' '&& newX < SIZE && newY < SIZE ) {
        playerX = newX;
        playerY = newY;
        x++;
    }
	}

        // 检查是否胜利
        if (playerX == watermelonX && playerY == watermelonY) {
            
        	cout << endl;
    
            cout << "恭喜！您找到了西瓜！您一共走了" << x<<"步\n\n";
            gameOver = true;
        }
    
}
show();
}
void Watermelon::hit(){
srand(static_cast<unsigned int>(time(0)));
	system("cls");
	cout<<"欢迎来玩打西瓜游戏！'-'为西瓜。矩阵共10行（0~9），10列（0~9）。请在对话框中输入坐标打西瓜。" ; 
	Sleep(5000);
    // 初始化西瓜的位置
    int playerX, playerY,cnt=0;
    bool gameOver = false;
    while (!gameOver) {
    	time_t t1,t2;
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
		for(int i=3;i>0;i--){
			cout<<i;
			Sleep(1000); 
			system("cls");
		}
		cout<<"开始！"; 
		cnt++;
		int watermelonX = rand() % 10;
    	int watermelonY = rand() % 10; 
		Sleep(500); 
		system("cls");
        // 打印游戏地图
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (i == watermelonX && j == watermelonY) {
                    cout << "-"; // 西瓜的位置
                } else {
                    cout << "_"; // 空地
                }
            }
            cout << endl;
        }

        // 接受玩家输入
        cout << "请在7秒内输入您的移动位置（x y）: ";
        time(&t1);
        cin >> playerX >> playerY;
		time(&t2);
		int c=t2-t1;
        if(c>7){
        	cout<<"对不起，您没有在规定时间内输入。本题作废" ;
        	Sleep(3000);
			continue; 
		}
		
        // 检查输入是否有效
        if (playerX < 0 || playerX >= 10 || playerY < 0 || playerY >= 10) {
            cout << "移动错误" << endl;
            Sleep(2000);
            continue; // 跳过本次循环的剩余部分，重新打印地图和接受输入
        }

        // 检查是否击中西瓜
        if (watermelonX == playerX && watermelonY == playerY) {
            cout << "\n恭喜！您击中了西瓜！您用" <<cnt<<"次击中了西瓜\n\n";
            gameOver = true; // 设置游戏结束标志
        } else {
            cout << "未击中！请重试。" << endl;
            Sleep(500);
        }
    }
}
void Watermelon::poemmenu(){
	cout<<"\n-------------------------------------------------\n";
    cout<<"请选择您想要了解的古诗：\n";
    cout<<"1. 文天祥《西瓜吟》"<<endl;
	cout<<"2. 顾逢《西瓜》"<<endl;
	cout<<"3. 曾丰《值侯修学趣儒人稍急因遗莲花莲实西瓜于吾宗》"<<endl;
	cout<<"4. 范成大《西瓜园》"<<endl;
	cout<<"0. 返回上一级\n";
    cout<<"请输入您的选择：";
}
void Watermelon::shengming(string v1){
	system("cls");
	cout<<"本程序由西瓜小吴制作！\n";
	cout<<"版本号："<<v1<<endl; 
	cout<<"\n本程序是免费的，如果您支付了相关费用，那么您就被骗了！\n";
	cout<<"您可以尽情的使用、改编、转载等，但严禁售卖！违者必究！\n";	
	cout<<endl;
	cout<<"感谢您的支持！\n\n";
	cout<<"-------------------------------------------------\n";
}
void Watermelon::where() {
	system("cls"); 
    cout << "中国西瓜部分产地\n";
    cout << "东明西瓜：山东省菏泽市东明县是全国最大的县一级西瓜种殖生产基地，面积和产量高居全国第一。\n";
    cout << "东台西瓜：江苏省盐城市东台市也是被命名中国西瓜之乡的城市，种植规模为江苏省第一。\n";
	cout << "汴梁西瓜：河南开封出产的西瓜被称为汴梁西瓜，皮薄汁多、瓢沙脆甜。\n";
	cout << "宁夏中卫西瓜：因中卫地区士壤环境独特，所生长的西瓜中含有健康元素硒，故被称之为硒砂瓜。\n\n";
}
void Watermelon::getnew(){
	system("cls");
	cout<<"更新软件：\n1. https://github.com/wujc888/Watermelon-Encyclopedia\n2. https://kkgithub.com/wujc888/Watermelon-Encyclopedia"<<endl; 
	cout<<"-------------------------------------------------\n";
}
void Watermelon::pwt(){	
	int a[110]={0};
	srand(time(0));
	int b=rand()%(5-2+1)+2,n;
	int x=rand()%(8-1+1)+1;	
	if(x%b==0){
		x++;
	} 
	bool a1=false;
	while(!a1){
	int b=rand()%(5-2+1)+2,n;
	int x=rand()%(8-1+1)+1;	
	if(x%b==0){
		x++;
	} 	
	system("cls");	
	cout<<"欢迎来玩猪八戒吃西瓜游戏！\n游戏规则：请输入一个正整数，这个数代表西瓜的个数。猪八戒会走"<<b<<"步去吃西瓜。西瓜的编号从‘1’开始排序，呈环形摆放，首尾相接。\n如果你能保护好"<<x<<"号金西瓜，那么你就赢了！\n";
	cout<<"说明：猪八戒从刚刚吃掉的西瓜开始走，走"<<b<<"步后才是要吃的西瓜。\n注意：\n1. 第一次是从西瓜环外跨到‘1’号西瓜，记作1步。\n2. 输入的数要比"<<x<<"大，否则本题作废。\n"; 
	cout<<"请输入西瓜的个数：";
	cin>>n;
	if(n<x){
	cout<<"\n输入错误!错误原因：输入的数比"<<x<<"小。\n本题作废！\n";
	Sleep(4000);
	continue;
	}else
	a1=true;
}
	int cnt=0,i=0,k=0,c=1;  //cnt表示目前出局的人数 表示总共有n人，数到数字m时出局 
	while(cnt!=n-1) //因为要求N个人的出局顺序，因此当cnt（用来统计已经出局的人）未达到n时，需要循环不断报数 
	{
		i++;   //i是每个人的编号 
		if(i>n) i=1;  //这里需要特别注意：i的值是不断累加的，一旦发现i的值>N，那么i需要重新从第1个人开始
		              //数组要从第一个元素重新开始一个一个往后判断 
		if(a[i]==0)   //只有元素值为0的人 才需要报数，元素值为非0的代表已经出局了，不用报数 
		{
			k++;
			if(k==b)     //代表已经某个人已经报了M这个数，需要出局 
			{
				a[i]=1;  //编号为i的这个人出局 
				cnt++;   //出局的人数+1 
				k=0;   //清空k，让下一个人重新从1开始报数   
			}
		}
		
	}
	if(a[x]==0){
	cout<<"恭喜！您保住了金西瓜！\n\n";
	}else{
	cout<<"很遗憾，金西瓜被猪八戒吃了\n\n";	
	}
}

