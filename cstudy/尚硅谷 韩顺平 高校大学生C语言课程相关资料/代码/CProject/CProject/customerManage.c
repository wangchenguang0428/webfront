//#include <stdio.h>
//#include <string.h>
//
////定义结构体数据类型
//struct Customer {
//	int id; //编号
//	int age; //年龄
//	char name[10]; //名字
//	char gender; // 'f' 女  'm' 男
//	char phone[16]; //电话号码
//	char email[20]; //邮箱
//};
//
//int loop = 1; //控制是否退出主菜单
//char key; 
//int customerNum  = 1; //表示当前有多少个客户
//char choice = ' '; //表示用户选择的是Y/N
////客户结构体数组
//struct Customer customers[100]; //最多有100个客户, 超过100个，可以扩展
//
////显示一个Customer 变量的信息
////这里我们接收的是结构体指针，提高效率
//void getCustomerInfo(struct Customer *customer) {
//	printf("\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, (*customer).gender,(*customer).age, (*customer).phone,(*customer).email);
//}
//
//
////添加客户
//void add() {
//	customers[customerNum].id = customerNum + 1;//编号按照自增规则
//	printf("\n---------------------添加客户---------------------");
//	printf("\n姓名：");
//	scanf("%s", customers[customerNum].name);
//	getchar();
//	printf("\n性别：");
//	scanf("%c", &(customers[customerNum].gender));
//	getchar();
//	printf("\n年龄：");
//	scanf("%d", &(customers[customerNum].age));
//	getchar();
//	printf("\n电话：");
//	scanf("%s", customers[customerNum].phone);
//	getchar();
//	printf("\n邮箱：");
//	scanf("%s", customers[customerNum].email);
//	getchar();
//	printf("\n---------------------添加完成---------------------");
//	customerNum++; // 自增，必须
//
//
//}
//
////根据输入的id, 返回index ,如果没有，就返回-1
//int findIndex(int id) {
//	int index = -1;
//	int i;
//	for( i = 0; i < customerNum ; i++ ){
//		if(customers[i].id == id) {//找到
//			index = i;
//		}
//	}
//	return index;
//}
//
////说明
////1. 返回int ,如果 1 就说明删除成功
////2. 返回0, 表示删除失败
////3. 接收的是要删除的客户id
//int del(int id) {
//	int index = findIndex(id);
//	int i;
//	if(index == -1) {//说明不存在id 这个客户
//		return 0; //表示删除失败
//	} else {
//		//说明存在，就要删除, 删除的本质就是将编号为id 的这个客户移除
//		//1. customers数组从index +1 位置 开始，整体前移
//		for( i = index + 1; i < customerNum; i++) {
//			customers[i-1] = customers[i];
//		}
//		//2. customerNum - 1
//		customerNum--;
//		return 1;
//	}
//}
//
////显示删除客户的界面，然后调用
//*
//---------------------删除客户---------------------
//请选择待删除客户编号(-1退出)：1
//确认是否删除(Y/N)：y
//---------------------删除完成---------------------
//
//*/
//void delView() {
//	int id = 0;
//	char choice = ' ';
//	printf("\n---------------------删除客户---------------------");
//	printf("\n请选择待删除客户编号(-1退出)：");
//	scanf("%d", &id); 
//	getchar();
//	if(id == -1) {
//		printf("\n---------------------你放弃删除了---------------------");
//		return;
//	}
//	
//	printf("\n确认是否删除(Y/N)：");
//	scanf("%c", &choice);
//	getchar();
//
//	if(choice == 'Y') {
//		if(!del(id)) {
//			printf("\n---------------------删除失败，id不存在---------------------");
//		} else {
//			printf("\n---------------------删除成功!!---------------------");
//		}
//	}
//}
//
////显示客户信息列表
//void listCustomers() {
//	int i = 0; 
//	printf("---------------------------客户列表---------------------------");
//	printf("\n编号\t姓名\t性别\t年龄\t电话\t邮箱");
//	for ( i = 0; i < customerNum; i++) {//表示客户的编号
//		getCustomerInfo(&customers[i]);
//	}
//
//}
//
//
////显示主菜单
//void mainMenu() {
//	do {
//
//		printf("\n\n\n-----------------客户信息管理软件-----------------");
//		printf("\n                    1 添 加 客 户");
//		printf("\n                    2 修 改 客 户");
//		printf("\n                    3 删 除 客 户");
//		printf("\n                    4 客 户 列 表");
//		printf("\n                    5 退          出");
//		printf("\n请选择(1-5)：");
//		scanf("%c", &key);
//		getchar(); //过滤回车
//                         
//		switch(key) {
//			case '1':
//					add();
//					break;
//			case '2':
//					printf("修 改 客 户");
//					break;
//			case '3':
//					delView();
//					break;
//			case '4':
//					listCustomers();
//					break;
//			case '5':
//					do {
//						printf("\n确认是否退出(Y/N)：");
//						scanf("%c", &choice);
//						getchar();
//					} while(choice != 'Y' && choice != 'N'); //如果输入的不是'Y' , 并且不是'N'
//					if(choice == 'Y') {
//						loop = 0;
//					} // 如果输入的是N ,不做处理，进行显示菜单
//					break;
//			default :
//					printf("\n 你输入有误， 请重新输入...");
//					break;
//		}
//	}while(loop);
//
//	printf("\n 你退出了客户管理系统");
//	getchar();
//}
//void main() {
//	//为了测试显示客户信息,我们可以先初始化一个客户, 后面我们是通过界面来添加
//	customers[0].id = 1;
//	customers[0].age = 10;
//	strcpy(customers[0].email, "yy@sohu.com");
//	customers[0].gender = 'f';
//	strcpy(customers[0].name, "zs");
//	strcpy(customers[0].phone, "110");
//	
//
//	mainMenu(); //调用函数，显示菜单
//}