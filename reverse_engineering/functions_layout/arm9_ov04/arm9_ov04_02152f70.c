
void FUN_02152f70(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == 0x70000004) {
    iVar1 = (**(code **)*param_2)();
    if (iVar1 == 2) {
      *(undefined1 *)(iVar3 + 0xbe) = 1;
      FUN_020876ac();
    }
    iVar1 = (**(code **)*param_2)();
    if (iVar1 != 1) {
      return;
    }
    iVar1 = FUN_020876f8();
    if (iVar1 == 0) {
      return;
    }
    uVar2 = (**(code **)(*param_2 + 4))();
    *(byte *)(iVar3 + 0xbf) = *(byte *)(iVar3 + 0xbf) | (byte)(1 << (uVar2 & 0xff));
    (**(code **)(*param_2 + 4))();
    FUN_0215308c(iVar3);
    return;
  }
  if (iVar1 != 0x70000005) {
    if (iVar1 == 0x70000007) {
      FUN_020282f4(*(undefined4 *)(*(int *)(iVar3 + 4) + 4));
      FUN_02152cc4(iVar3,0);
      return;
    }
    return;
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 != 0x2f2f) {
    return;
  }
  *(undefined1 *)(iVar3 + 0xbc) = 1;
  iVar1 = FUN_020876f8();
  if (iVar1 == 0) {
    return;
  }
  FUN_021530d4(iVar3);
  return;
}

