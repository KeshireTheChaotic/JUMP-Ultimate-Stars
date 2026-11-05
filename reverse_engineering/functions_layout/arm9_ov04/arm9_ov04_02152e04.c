
void FUN_02152e04(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffeefff) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,0);
  FUN_021530d4(uVar3);
  return;
}

