
void FUN_02162174(int param_1)

{
  undefined4 uVar1;
  
  func_0x021b65bc();
  if (*(int *)(param_1 + 0x9c) < 1) {
    if (*(int *)(param_1 + 0x9c) == 0) {
      FUN_0214d6bc(1);
      uVar1 = FUN_0214dd50();
      FUN_0214dd60(uVar1,1);
    }
  }
  else {
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_021621e4);
    FUN_0214d6bc(1);
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,1);
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  return;
}

