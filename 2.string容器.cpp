#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
/// @brief string构造函数
void test01()
{
    // 默认构造
    string s1;
    cout << s1;
    // 使用char *,字符串str初始化
    // 字符串字面量 "hw" 代表的是存储这个字符串的内存区域的首地址。
    // 当使用 = 把 "hw" 的首地址赋给指针 str 时，
    // str 就指向了存储 "hw" 的内存区域。
    const char *str = "hw";
    string s2(str);
    cout << s2;
    // 拷贝构造函数,使用一个string对象初始化另一个string对象
    string s3(s2);
    cout << s3;
    // n个字符c初始化,连续打印n个str
    string s4(10, 'a');
    cout << s4;
}
/// @brief string的赋值操作
void test02()
{
    //
    string str1;
    str1 = "hw";
    //
    string str2;
    str2 = str1;
    // char *
    string str3;
    str3 = 'a';
    //
    string str4;
    str4.assign("hw");
    // 输出字符串前五个字符
    string str5;
    str5.assign("hhhhwwww", 5);
    // 拷贝构造
    string str6;
    str6.assign(str5);
    // 输出10个w
    string str7;
    str7.assign(10, 'w');
}
/// @brief 字符串的拼接
void test03()
{
    // 输出abc +=
    string str1 = "a";
    str1 += "bc";
    // 在str3后拼接字符
    string str2 = "I";
    str2.append("love");
    // append截取字符串,game拼接前n个字母
    string str3 = str2;
    str3.append("game abcde", 4);
    //
}
/// @brief string查找 find
void test04()
{
    /// 字符串的查找,返回从0开始的字符串位置下标,没有返回-1
    string str1 = "abcdefg";
    int position = str1.find("de");
    if (position == -1)
    {
        cout << "未找到字符";
    }
    else
    {
        cout << "找到字符串,pos=" << position << endl;
    }
    // rfind,从右往左查找,find从左往右查找
    position = str1.rfind("de");
}
/// @brief 字符串替换 replace
void test05()
{
    string str1 = "abcdefg";
    // 替换从一号位起三个字符,替换为字符串"1111"
    str1.replace(1, 3, "1111");
}
/// @brief 字符串比较,compare,主要判断字符是否相等,判断大小意义不大
void test06()
{
    string str1 = "hello";
    string str2 = "hello";
    // 按照asc2码值一一比较
    if (str1.compare(str2) == 0)
    {
        cout << "str1 等于 str2" << endl;
    }
    // 按照asc2码值
    else if (str1.compare(str2))
    {
        cout << "str1 大于 str2" << endl;
    }
    else
    {
        cout << "str1 小于 str2" << endl;
    }
}
/// @brief string字符存取
void test07()
{
    string str = "hello";
    // 1.通过[]访问单个字符
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
        /* code */
    }
    // 2.通过成员函数at方式访问单个字符
    for (int i = 0; i < str.size(); i++)
    {
        cout << str.at(i) << " ";
        /* code */
    }
    // 3.修改单个字符
    str[0] = 'x';
    // 第二种方法
    str.at(1) = 'x';
}
/// @brief 字符串插入和删除,起始下标都是从0开始
void test08()
{
    string str = "hello";
    // 插入,在指定位置后插入指定字符串
    str.insert(1, "111");
    // 删除,从第一个字符到第三个字符
    str.erase(1, 3);
}
/// @brief string子串截取
void test09()
{
    //截取从1开始到第3个字符串,下标从0开始,bcd
    string str = "abcdef";
    string subStr = str.substr(1, 3);

    //实际用法,截取用户名
    string str2="zhangsan@qq.com";
    int pos=str2.find('@');
    string name=str2.substr(0,pos);
}
int main()
{

    return 0;
}
