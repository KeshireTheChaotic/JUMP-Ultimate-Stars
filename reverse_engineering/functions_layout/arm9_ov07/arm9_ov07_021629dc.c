
void FUN_021629dc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0x70000004) {
    return;
  }
  iVar2 = (**(code **)*param_2)();
  iVar1 = DAT_020afe98;
  if (iVar2 == 0x1b) {
    iVar2 = (**(code **)(*param_2 + 4))();
    if (iVar2 != iVar1) {
      uVar3 = (**(code **)(*param_2 + 4))();
      *(uint *)(iVar5 + 0xb4) = *(uint *)(iVar5 + 0xb4) | 1 << (uVar3 & 0xff);
      uVar4 = (**(code **)(*param_2 + 4))();
      *(undefined4 *)(iVar5 + 0xbc) = uVar4;
    }
    (**(code **)(*param_2 + 4))();
    return;
  }
  if (iVar2 != 0x23) {
    return;
  }
  iVar2 = (**(code **)(*param_2 + 4))();
  if (iVar2 != iVar1) {
    uVar3 = (**(code **)(*param_2 + 4))();
    *(uint *)(iVar5 + 0xb8) = *(uint *)(iVar5 + 0xb8) | 1 << (uVar3 & 0xff);
    uVar4 = (**(code **)(*param_2 + 4))();
    *(undefined4 *)(iVar5 + 0xbc) = uVar4;
  }
  (**(code **)(*param_2 + 4))();
  return;
}

