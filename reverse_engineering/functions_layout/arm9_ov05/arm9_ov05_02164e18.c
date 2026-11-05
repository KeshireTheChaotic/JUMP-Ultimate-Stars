
void FUN_02164e18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,2);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x78) + 4));
  func_0x021bac28(*(undefined4 *)(iVar2 + 0x84),0x5d,0,0,0,0,0,0,param_4);
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0x84)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x78) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x78) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 4),1);
  return;
}

