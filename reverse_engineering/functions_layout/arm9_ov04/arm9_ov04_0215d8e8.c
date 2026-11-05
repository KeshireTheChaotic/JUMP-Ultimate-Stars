
void FUN_0215d8e8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0x70000005) {
    if (iVar1 == 0x70000007) {
      FUN_0215d738(iVar2);
      return;
    }
    return;
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 != 0x3f3f) {
    return;
  }
  *(undefined1 *)(iVar2 + 0xd0) = 1;
  iVar1 = FUN_020876f8();
  if (iVar1 == 0) {
    return;
  }
  FUN_02087214(0x3f3f,&DAT_021605a0,2);
  return;
}

