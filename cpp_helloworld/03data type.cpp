//#include <iostream>
//using namespace std;
//#include <string> // ��C++ ����ַ���, Ҫ�������ͷ�ļ�
//
//int main() 
//{
//	//  ���� short < int <= long < long long
//	// 1. ������ (-32768 ~ 32767) 2^15+-1
//	short num1 = 10;
//
//	// 2. ����  2^31+-1
//	int num2 = 10;
//
//	// 3. ������ 2^31+-1
//	long num3 = 10;
//
//	// 4. �������� 2^63+-1
//	long long num4 = 10;
//
//	cout << "num1 = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//	cout << "num3 = " << num3 << endl;
//	cout << "num4 = " << num4 << endl;
//
//	// sizeof ���ڴ��С
//	// �﷨: sizeof( �������� / ���� )
//	cout << "shortռ���ڴ�ռ�Ϊ: " << sizeof(num1) << endl;
//
//	// ʵ��(������)
//	// 1. ������ float
//	// 2. ˫���� double
//	float f1 = 3.14f; // Ĭ�������ʾ��λ��Ч����. 4�ֽ�
//
//	cout << "f1 = " << f1 << endl;
//
//	double d1 = 3.1415926;  // Ĭ�������ʾ��λ��Ч����. 8�ֽ�
//
//	cout << "d1 = " << d1 << endl;
//
//	// ��ѧ������
//	float f2 = 3e2; // 3 * 10 ^ 2;
//	float f3 = 3e-2; // 3 * 0.1 ^ 2;
//
//	// �ַ��� ռ1���ֽ�
//	// 1. �ַ��ͱ���������ʽ
//	char ch = 'a';
//	cout << ch << endl;
//
//	// 2. �ڴ��С
//	cout << "char �ַ��ͱ�����ռ�ڴ�: " << sizeof(char) << endl;
//
//	// 3. ��������
//	// char ch2 = "b"; // �����ַ��ͱ���ʱ��, Ҫ�õ�����
//	// char ch2 = 'abcdf'; // �����ַ��ͱ���ʱ��, ��������ֻ����һ���ַ�
//
//	// 4. �ַ��ͱ�����Ӧ��ASCII���� ������д洢������ASCII��
//	// a : 97, A : 65;
//	cout << (int)ch << endl;
//
//	// ת���ַ�
//	// 
//	// 1. ���з� \n
//	cout << "123\n" << endl;
//	// 2. ��б�� "\\"
//	cout << "\\" << endl;
//	// 3. ˮƽ�Ʊ�� \t  :��������
//	cout << "aaa\t123" << endl;
//	cout << "aa\t123" << endl;
//	cout << "aaaaaaa\t123" << endl;
//
//	// �ַ�����
//	// 1. C����ַ���
//	// ע������ char  �ַ����� []
//	//          �Ⱥź��� Ҫ��˫���� ���������ַ���
//	char str[] = "hello world";
//	cout << str << endl;
//
//	// 2. C++ ����ַ���
//	// ��Ҫ #include <string>
//	string str2 = "hello world";
//	cout << str2 << endl;
//
//	// ������������ bool
//	// 1. ���� bool
//	bool flag = true; // true �� 1���0
//	bool flag1 = false; // false �� 0
//	// ������ 1������ 0�����
//
//	// 2. bool �ڴ�ռ� 1�ֽ�
//	cout << "bool ��ռ�ռ��С: " << sizeof(bool) << endl;
//
//	// ���ݵ�����
//	// 1. ��������
//	int a = 0;
//	cout << "������ͱ���a��ֵ: " << endl;
//	cin >> a;
//	cout << "���ͱ���a = " << a << endl;
//
//	// 2. ������
//	float f = 3.14f;
//	cout << "��������ͱ���f��ֵ: " << endl;
//	cin >> f;
//	cout << "�����ͱ���f = " << f << endl;
//
//	// 3. �ַ�
//	// 4. �ַ���
//	// 5. bool
//	cout << "����������� flag ��ֵ" << endl;
//	cin >> flag; 
//	// ��ֵ��0��Ϊ��,�������ture,falg���Ϊ0. ture�ᱻ��Ϊ�Ǹ��ַ���.
//	// �ַ��� �ַ� ����ֵ������С��1 ���� flase
//	cout << "flag = " << flag;
//	 
//	system("pause");
//
//	return 0;
//}