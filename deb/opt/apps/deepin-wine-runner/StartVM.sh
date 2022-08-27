#!/bin/bash
# 使用系统默认的 bash 运行
###########################################################################################
# 作者：gfdgd xi、为什么您不喜欢熊出没和阿布呢
# 版本：1.7.0
# 更新时间：2022年07月15日
# 感谢：感谢 wine 以及 deepin-wine 团队，提供了 wine 和 deepin-wine 给大家使用，让我能做这个程序
# 基于 Python3 的 tkinter 构建
###########################################################################################
VBoxManage showvminfo Windows
if test 0 == $?; then
    # 检测到虚拟机存在，启动虚拟机
    VBoxManage startvm Windows
    exit
fi
zenity --question --no-wrap --text="检查到您未创建所指定的虚拟机，是否创建虚拟机并继续？\n如果不创建将无法使用"
if test 1 == $?; then
    # 用户不想创建虚拟机，结束
    exit
fi
cd `dirname $0`
./VM/VirtualMachine