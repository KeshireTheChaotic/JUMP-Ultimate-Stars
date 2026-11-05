
void FUN_02162734(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) < 0) {
    uVar1 = FUN_0214dd50();
    FUN_0214dd6c(uVar1,7);
    return;
  }
  if (*(int *)(param_1 + 0x38) == 0x7ff0) {
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,8);
    return;
  }
  uVar1 = FUN_0214dd50();
  FUN_0214dd60(uVar1,9);
  return;
}

