
void FUN_02158820(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02073f64(8,0,0x36,param_4,param_4);
  while (iVar1 = FUN_02073854(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  while (*(int *)(*(int *)(param_1 + 0x94) + 0x14) != 0) {
    (*DAT_020a0e18)();
  }
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4),1);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x1d);
  uVar2 = func_0x021bd58c(*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  return;
}

