//#include <iostream>
//using namespace std;
//#include <string>
//// Ӣ�۽ṹ��
//struct hero {
//
//	// ����
//	string name;
//	// ����
//	int age;
//	// �Ա�
//	string gender;
//};
//
//// ð������
//void bubbleSort(struct hero heroArray[], int len) {
//
//	// ѭ��
//	for (int i = 0; i < len - 1; i++) {
//
//		for (int j = 0; j < len - i - 1; j++) {
//
//			if (heroArray[j].age > heroArray[j + 1].age) {
//
//				struct hero temp = heroArray[j];
//				heroArray[j] = heroArray[j + 1];
//				heroArray[j + 1] = temp;
//			}
//		}
//	}
//}
//
//// ��ӡ����
//void printHero(struct hero heroArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "����: " << heroArray[i].name << "����: " << heroArray[i].age
//			<< "�Ա�: " << heroArray[i].gender << endl;
//	}
//}
//int main() {
//
//	// 1. ���Ӣ�۽ṹ��
//	// 2. ����������5��Ӣ��
//	struct hero heroArray[5] =
//	{
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"},
//	};
//
//	int len = sizeof(heroArray) / sizeof(heroArray[0]);
//
//	/*for (int i = 0; i < len; i++) {
//		
//			cout << "������ " << arr[i].name << " �Ա� " << arr[i].sex 
//				<< " ���䣺 " << arr[i].age << endl;
//	}*/
//	// 3. �������������, ��������
//	bubbleSort(heroArray, len);
//
//	// 4. ��ӡ����
//	printHero(heroArray, len);
//
//	system("pause");
//
//	return 0;
//}