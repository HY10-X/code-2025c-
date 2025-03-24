#include <bits/stdc++.h>
using namespace std;
// 在字符串中找出连续最长的数字串含+-号,优先级低,跳过
int main()
{
    string s;
    getline(cin, s); // 输入字符串
    // 匹配数字串的正则表达式
    //[+-]? 可选的正号或负号;\\d+ 数字出现至少一次; (\\.\\d+)
    string pattern = "[+-]?\\d+(\\.\\d+)?";
    // 定义一个最长数字串
    string resS = "";
    for (int i = 0; i < s.length(); i++)
    {
        // 记录从第i个字符开始的子字符串
        //regex_search 默认只返回字符串中的第一个匹配项，无法自动遍历所有可能的起始位置。
        //通过循环截取子串（如 temp = s.substr(i)），可以强制从第 i 个字符开始搜索，确保覆盖所有潜在匹配起点，避免遗漏可能存在的更长子串。
        string temp = s.substr(i);
        // 在C++中，正则表达式需通过regex对象显式编译，以提高匹配效率
        regex regex(pattern);
        // smatch是match_results<std::string::const_iterator>的别名，专用于std::string的匹配结果存储。
        smatch match;
        // ​作用：在子字符串temp中搜索符合regex模式的子串，若匹配成功则进入条件体。
        // temp：待搜索的目标字符串。
        // match：存储匹配结果的容器。
        // regex：已编译的正则表达式对象。
        if (regex_search(temp, match, regex))
        {
            // match.str()：获取匹配的完整子字符串（例如匹配到"cde"则返回该子串）。
            string matchStr = match.str();
            if (matchStr.length() >= resS.length())
            {
                resS = matchStr;
            }
        }
    }
    cout << resS << endl;
}