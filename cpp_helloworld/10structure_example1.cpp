//#include <iostream>
//using namespace std;
//#include <string>
//#include <ctime>
//
//// ѧ��
//struct student {
//
//	string name; // ѧ������
//	int scores; // ѧ������
//};
//
//// ��ʦ
//struct teacher {
//
//	string name; // ��ʦ����
//	struct student stuArray[5]; // ѧ������
//};
//
//// ��ֵ����
//void allocateSpace(struct teacher tArray[], int len) {
//
//	string tName = "teacher_";
//	string sName = "student_";
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//
//		tArray[i].name = tName + nameSeed[i];
//
//		// ͨ��ѭ������ʦ����ѧ������Ϣ��ֵ
//		for (int j = 0; j < 5; j++) {
//
//			tArray[i].stuArray[j].name = sName + nameSeed[i];
//			int random = rand() % 61 + 40; // 40~100
//			tArray[i].stuArray[j].scores = random;
//		}
//	}
//	
//
//}
//
//// ��ӡ��Ϣ
//void printInfo(struct teacher tArray[], int len) {
//
//	for (int i = 0; i < len; i++) {
//
//		cout << "��ʦ������: " << tArray[i].name << endl;
//
//		for (int j = 0; j < 5; j++) {
//
//			cout << "\tѧ������: " << tArray[i].stuArray[j].name << 
//				" ���Է���: " << tArray[i].stuArray[j].scores << endl;
//				
//		}
//	}
//}
//
//int main() {
//
//	// ���������
//	srand((unsigned int)time(NULL));
//	// Step1. ������ʦ����
//	teacher tArray[3];
//
//	// Step2. ͨ����������ʦ����Ϣ��ֵ,������ʦ����ѧ������Ϣ��ֵ
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//
//	// Step3. ��ӡ��Ϣ
//	printInfo(tArray,len);
//
//
//	system("pause");
//
//	return 0;
//}