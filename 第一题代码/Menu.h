/*此头文件主要用于打印主菜单，进行用户交互*/

/*引入相关标准库*/
#include <stdio.h>
#include <windows.h>

/* 宏定义设置睡眠时间*/
#define SleepTime 1222

void getMenu()
/*主菜单打印*/
{
    printf("\n|======================|\n");
    printf("|====通讯录管理系统菜单====|\n");
    printf("|====您有如下选项：=======|\n");
    printf("|=======0.退出菜单=======|\n");
    printf("|=====1.录入联系人功能====|\n");
    printf("|=====2.删除联系人功能====|\n");
    printf("|=====3.显示联系人功能====|\n");
    printf("|=====4.查询联系人功能====|\n");
    printf("|=====5.保存联系人功能====|\n");
    printf("|=====6.加载联系人功能====|\n");
    printf("|=====7.恢复出厂设置======|\n");
    printf("|===请输入对应数字选择功能==|\n");
    printf("|=======================|\n");
}

void exitMenu()
/*退出模块打印*/
{
    printf("您已成功退出！\n");
    printf("祝您愉快！再见！\n");
}

void getSleep()
/* 进程睡眠函数*/
{
    /* 调用<windows.h>中的Sleep函数进行睡眠*/
    Sleep(SleepTime);
}

void continueMenu()
/* 中间提示函数
 * 为了给用户更好的交互体验，
 * 对功能转换时加入睡眠和信息提示*/
{
    /* 调用睡眠函数，打印提示信息*/
    getSleep();
    printf("\n接下来将再次进入菜单界面\n");
    getSleep();
}


