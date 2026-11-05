
void FUN_02151f0c(int param_1,int *param_2)

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
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,1);
  uVar3 = FUN_0214ce64();
  FUN_0214ce74(uVar3,10);
  func_0x021b65bc();
  FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),FUN_02152110);
  return;
}

