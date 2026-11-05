
void FUN_0215e36c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffef000) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar1 + 0x44) + 4));
  *(undefined1 *)(iVar1 + 0xba) = 0xff;
  FUN_0207342c(0x78,0);
  return;
}

