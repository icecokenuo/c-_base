//#include <iostream>
//using namespace std;
//
//int main() //Ϊ������main �޷�ִ�������������˸�����,����ʱ�ǵ�ɾ��.
//{
//	// ѭ���ṹ
//	// while
//	// ��������Ϸ(while��Ӧ��)
//	int num = rand() % 100 + 1; // ���� 0 + 1~99 + 1������� ,α�����
//	// #include <ctime>
//	// srand((unsigned int)time(NULL);   // ����ʱ�����ɵ��������. 
//	int val = 0; // �����������
//
//	while (1)
//	{
//		cin >> val;
//		if (val > num)
//		{
//			cout << "high" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "low" << endl;
//		}
//		else
//		{
//			cout << "good" << endl;
//			break;
//		}
//	}
//
//	// do-while
//	// ˮ�ɻ���
//	num = 100;
//	do {
//		int a = num / 100; // ��λ
//		int b = num / 10 % 10; // ʮλ
//		int c = num % 10; // ��λ
//		if (a * a * a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//
//	// for
//	// ������С��Ϸ
//	for (int i = 1; i < 101; i++){
//		if (i % 7 == 0) {
//			cout << i << endl;
//		}
//
//	}
//
//	// Ƕ��ѭ��
//	// �˷��ھ���
//	for (int i = 1; i < 10; i++) {
//		for (int j = 1; j < i; j++) {
//			cout << j << " * " <<  i << " = " << j * i << " ";  // 
//		}
//		cout << endl;
//	}
//
//	// break ������ǰѭ��; continue ������ǰѭ���ı���ѭ��; goto ��ת����־���;
//	// goto 
//	cout << " 1 " << endl;
//	cout << " 2 " << endl;
//	goto Falg;
//	cout << " 3 " << endl;
//Falg:
//	cout << " 4 " << endl;
//
//
//	system("pause");
//
//	return 0;
//}