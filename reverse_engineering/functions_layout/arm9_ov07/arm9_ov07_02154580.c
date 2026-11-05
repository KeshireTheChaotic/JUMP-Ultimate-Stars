
void FUN_02154580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0207342c(0x78,2);
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x28) + 4),0);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4),0);
  func_0x021bac28(*(undefined4 *)(param_1 + 0x5c),param_2,0,0,0,0,0,0,param_4);
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(param_1 + 0x5c)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x28) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4),1);
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
  return;
}

