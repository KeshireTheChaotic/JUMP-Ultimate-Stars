
void FUN_0215a534(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) {
    FUN_0207342c(0x78,0);
    FUN_0215a56c(uVar2);
  }
  return;
}

