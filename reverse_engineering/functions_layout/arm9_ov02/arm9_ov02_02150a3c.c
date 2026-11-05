
void FUN_02150a3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  iVar4 = (*(int **)(param_1 + 4))[4];
  uVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = *(uint *)(iVar3 + 0x90) & 4;
  bVar5 = uVar1 == 4;
  if (bVar5) {
    uVar2 = *(uint *)(iVar3 + 0x16c);
    uVar1 = uVar2 & *(uint *)(iVar3 + 0xbc);
  }
  if (bVar5 && uVar2 == uVar1) {
    return;
  }
  FUN_0207342c(0x78,0,iVar3,0,param_4);
  *(uint *)(*(int *)(iVar4 + 0x84) + 0x4c) =
       (uint)*(byte *)(*(int *)(iVar4 + 0x88) + (int)uVar6 + 0x31);
  *(undefined1 *)(*(int *)(iVar4 + 0x84) + 0x58) = 3;
  FUN_0214d348(*(undefined4 *)(iVar4 + 0x84),6);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x10) + 4));
  return;
}

