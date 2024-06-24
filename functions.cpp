#include "functions.h"
#include <algorithm>

using namespace std;

namespace func
{

    // 添加员工
    void addStaff(staff newStaff)
    {
        allStaff.push_back(newStaff);
    }

    // 删除最后一个员工
    void removeStaff()
    {
        allStaff.pop_back();
    }

    // 按编号删除员工,编号从 0 开始
    void removeStaff(int index)
    {
        if (index >= allStaff.size()) return;
        allStaff.erase(allStaff.begin() + index);
    }

    // 按员工信息删除员工
    void removeStaff(staff outStaff)
    {
        auto it = find(allStaff.begin(), allStaff.end(), outStaff);
        if (it != allStaff.end())
        {
            allStaff.erase(it);
        }
    }

    // 按编号查找员工,编号从 0 开始
    staff findStaff(int index)
    {
        if (index >= allStaff.size()) return;
        return *(allStaff.begin() + index);
    }

    // 按员工信息查找编号
    int findStaff(staff target)
    {
        auto it = find(allStaff.begin(), allStaff.end(), target);
        if (it != allStaff.end())
        {
            return it - allStaff.begin();
        }
    }

    // 添加领导
    void addLeader(staff newStaff)
    {
        leaders.push_back(newStaff);
    }

    // 删除最后一个领导
    void removeLeader()
    {
        leaders.pop_back();
    }

    // 按编号删除领导,编号从 0 开始
    void removeLeader(int index)
    {
        if (index >= leaders.size()) return;
        leaders.erase(leaders.begin() + index);
    }

    // 按领导信息删除领导
    void removeLeader(staff outStaff)
    {
        auto it = find(leaders.begin(), leaders.end(), outStaff);
        if (it != leaders.end())
        {
            leaders.erase(it);
        }
    }

    // 按编号查找领导,编号从 0 开始
    staff findLeader(int index)
    {
        if (index >= leaders.size()) return;
        return *(leaders.begin() + index);
    }

    // 按领导信息查找编号
    int findLeader(staff target)
    {
        auto it = find(leaders.begin(), leaders.end(), target);
        if (it != leaders.end())
        {
            return it - leaders.begin();
        }
    }

    // 对员工随机排序
    void shuffleStaff()
    {
        random_shuffle(leaders.begin(),leaders.end());
    }
}
