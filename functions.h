#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>
using namespace std;

namespace func
{

    // 保存每个员工信息的结构体
    struct staff
    {
        string name;
        bool operator==(staff rhs)
        {
            return (name == rhs.name);
        }
    };

    // 保存所有员工的信息
    vector<staff> allStaff;

    // 保存指定为领导的员工信息
    vector<staff> leaders;

    // 添加员工
    void addStaff(staff newStaff);

    // 删除最后一个员工
    void removeStaff();

    // 按编号删除员工
    void removeStaff(int index);

    // 按员工信息删除员工
    void removeStaff(staff outStaff);

    // 按编号查找员工
    staff findStaff(int index);

    // 按员工信息查找编号
    int findStaff(staff target);

    // 添加领导
    void addLeader(staff newStaff);

    // 删除最后一个领导
    void removeLeader();

    // 按编号删除领导
    void removeLeader(int index);

    // 按领导信息删除领导
    void removeLeader(staff outStaff);

    // 按编号查找领导
    staff findLeader(int index);

    // 按领导信息查找领导
    int findLeader(staff target);

    // 对员工随机排序
    void shuffleStaff();


}

#endif // FUNCTIONS_H
