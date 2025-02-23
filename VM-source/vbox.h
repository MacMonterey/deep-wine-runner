/*
 * gfdgd xi
 * 依照 GPLV3 开源
 */
#ifndef VBOX_H
#define VBOX_H
#include <QString>

class vbox
{
public:
    // 虚拟机信息
    QString name;
    QString managerPath;
    QString vboxVersion;
    vbox(QString name, QString managerPath="VBoxManage");
    int Create(QString type="Windows7");
    int CreateDisk(QString path, int size);
    int CreateDiskControl(QString controlName="storage_controller_1");
    int MountDisk(QString diskPath, QString controlName="storage_controller_1", int port=0, int device=0);
    int MountISO(QString isoPath, QString controlName="storage_controller_1", int port=1, int device=0);
    int BootFirst(QString bootDrive);
    int SetNetBridge(QString netDriver);
    int SetCPU(int number, int cpuNum, int coreNum);
    int SetMemory(int memory);
    int SetRemote(bool setting);
    int SetRemoteConnectSetting(int port=5540);
    int Start(bool unShown=false);
    int Stop();
    int Delete();
    int SetDisplayMemory(int memory);
    int InstallGuessAdditions(QString controlName="storage_controller_1", int port=1, int device=0);
    int EnabledAudio();
    int EnabledClipboardMode();
    int EnabledDraganddrop();
    int ShareFile(QString name, QString path);
    int SetVBoxSVGA();
    int SetMousePS2();
    int SetKeyboardPS2();
    int OpenUSB();
    int EnabledUEFI(bool status);

private:

};

#endif // VBOX_H
