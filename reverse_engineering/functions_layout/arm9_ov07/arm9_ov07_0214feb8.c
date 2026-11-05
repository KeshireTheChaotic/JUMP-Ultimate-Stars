
void FUN_0214feb8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar3 + 0xab) == '\0') {
    FUN_0207342c(0x78,2);
    FUN_0214f814(iVar3);
    return;
  }
  FUN_0207342c(0x78,0);
  func_0x021b6214(*(undefined4 *)(param_1 + 4),0);
  *(undefined1 *)(iVar3 + 0xa8) = 0;
  FUN_0214fd84(iVar3);
  uVar1 = FUN_0214dd50();
  uVar2 = FUN_0214fa20(*(undefined4 *)(*(int *)(param_1 + 4) + 0x124));
  FUN_0214dd80(uVar1,uVar2);
  uVar1 = FUN_0214dd50();
  FUN_0214dd6c(uVar1,6);
  DAT_020afeb0 = 0;
  DAT_020afeb4 = 0;
  FUN_0214f7dc(iVar3);
  return;
}

