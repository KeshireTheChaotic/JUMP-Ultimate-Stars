
void FUN_02151ff8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == -0x7ffef000) {
    uVar2 = (**(code **)*param_2)();
    if ((uVar2 & 1) == 0) {
      return;
    }
    func_0x021bd730(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0xb0),
                    *(int *)(*(int *)(param_1 + 4) + 0x124) + -2,0);
    return;
  }
  if (iVar1 != -0x7ffeefff) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar4 + 0x124);
  iVar5 = *(int *)(iVar4 + 0x10);
  FUN_0207342c(0x78,0,iVar1,iVar4,param_4);
  uVar3 = FUN_0214ce64();
  FUN_0214ce94(uVar3,iVar1 + -0x3f);
  FUN_0214f518(iVar1 + -0x40);
  uVar3 = FUN_0214ce64();
  FUN_0214ce74(uVar3,2);
  func_0x021b65bc();
  FUN_02028384(*(undefined4 *)(*(int *)(iVar5 + 4) + 4),FUN_02152110);
  return;
}

