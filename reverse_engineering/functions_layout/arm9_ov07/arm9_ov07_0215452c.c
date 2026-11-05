
void FUN_0215452c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == -0x7ffef000) {
    uVar2 = (**(code **)*param_2)();
    if ((uVar2 & 1) != 0) {
      FUN_021543d0(param_1);
      return;
    }
  }
  else {
    if (iVar1 != -0x7ffeefff) {
      return;
    }
    uVar2 = (**(code **)*param_2)();
    if ((uVar2 & 4) != 0) {
      FUN_02154580(uVar3,0x33);
    }
  }
  return;
}

