
void FUN_02161d68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0216e7f0;
  FUN_020517fc(DAT_0216e7f0 + 0x400,0,0xef);
  FUN_02051890(param_1,iVar1 + 0x440,0x20);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 1) {
    *(byte *)(iVar1 + 0x4e6) = *(byte *)(iVar1 + 0x4e6) & 0xfc | 1;
    uVar4 = 5;
  }
  else if (iVar2 == 2) {
    *(byte *)(iVar1 + 0x4e6) = *(byte *)(iVar1 + 0x4e6) & 0xfc | 2;
    uVar4 = 0xd;
  }
  else if (iVar2 == 3) {
    *(byte *)(iVar1 + 0x4e6) = *(byte *)(iVar1 + 0x4e6) & 0xfc | 3;
    uVar4 = 0x10;
  }
  else {
    *(byte *)(iVar1 + 0x4e6) = *(byte *)(iVar1 + 0x4e6) & 0xfc;
    uVar4 = 0;
  }
  *(byte *)(iVar1 + 0x4e6) = *(byte *)(iVar1 + 0x4e6) & 3;
  iVar3 = 0;
  iVar2 = iVar1 + 0x480;
  param_1 = param_1 + 0x28;
  do {
    FUN_02051890(param_1,iVar2,uVar4);
    iVar2 = iVar2 + 0x10;
    param_1 = param_1 + 0x20;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined1 *)(iVar1 + 0x4e7) = 2;
  FUN_020517fc(iVar1 + 0x4f0,0,4);
  *(undefined1 *)(iVar1 + 0x4f5) = 1;
  *(undefined1 *)(iVar1 + 0x4f6) = 1;
  FUN_02161e54();
  return;
}

