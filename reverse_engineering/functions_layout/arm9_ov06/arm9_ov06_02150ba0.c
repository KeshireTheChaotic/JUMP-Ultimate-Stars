
undefined4 FUN_02150ba0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(*(int *)(DAT_02172960 + 0xdc) + 0x18) == '\b') {
    return 1;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  if (*(int *)(param_1 + 0xb0) <= *(int *)(param_1 + 0xb4)) {
    FUN_0215041c();
  }
  uVar1 = FUN_0214f9fc(param_1);
  return uVar1;
}

