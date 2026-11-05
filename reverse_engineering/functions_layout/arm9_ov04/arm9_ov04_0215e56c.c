
void FUN_0215e56c(int param_1,int *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = (**(code **)(*param_2 + 8))();
  switch(uVar1) {
  case 0x70000004:
    (**(code **)*param_2)();
    return;
  case 0x70000005:
    break;
  case 0x70000006:
    return;
  case 0x70000007:
    FUN_0215e20c(iVar4);
    return;
  default:
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 0xff00) == 0x1e00) {
    uVar2 = (**(code **)*param_2)();
    uVar1 = (**(code **)(*param_2 + 4))();
    iVar3 = FUN_0214f624();
    FUN_02051890(uVar1,(uVar2 & 0xff) * 0xc + iVar3);
  }
  iVar3 = (**(code **)*param_2)();
  if (iVar3 == 0x1f1f) {
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x44) + 4));
    *(undefined1 *)(iVar4 + 0xba) = 1;
    return;
  }
  return;
}

