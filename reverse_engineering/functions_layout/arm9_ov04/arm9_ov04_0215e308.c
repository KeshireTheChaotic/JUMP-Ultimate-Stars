
void FUN_0215e308(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffeefff) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,1);
  FUN_020869ec(*(undefined4 *)(iVar1 + 0xc0));
  return;
}

