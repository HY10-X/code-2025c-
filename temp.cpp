#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<int, std::string> studentMap;

    // 插入元素
    studentMap[1001] = "Alice";
    studentMap[1002] = "Bob";

    // 查找元素
    std::cout << "Student with ID 1001: " << studentMap[1001] << std::endl;

    // 检查元素是否存在并安全地访问它
    if (studentMap.find(1002) != studentMap.end()) {
        std::cout << "Student with ID 1002: " << studentMap[1002] << std::endl;
    }

    // 删除元素
    studentMap.erase(1001);

    // 遍历所有元素
    for (const auto& pair : studentMap) {
        std::cout << "ID: " << pair.first << ", Name: " << pair.second << std::endl;
    }

    return 0;
}