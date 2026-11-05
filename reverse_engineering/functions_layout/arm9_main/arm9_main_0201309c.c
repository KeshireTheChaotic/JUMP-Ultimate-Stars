
void FUN_0201309c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_02012384();
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x30) = param_2;
    return;
  }
  uVar1 = FUN_02023f38(param_2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}

