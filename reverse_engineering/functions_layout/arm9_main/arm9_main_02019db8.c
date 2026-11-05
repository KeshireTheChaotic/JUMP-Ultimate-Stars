
void FUN_02019db8(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_02019ddc();
    uVar1 = FUN_020296f0();
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return;
  }
  return;
}

