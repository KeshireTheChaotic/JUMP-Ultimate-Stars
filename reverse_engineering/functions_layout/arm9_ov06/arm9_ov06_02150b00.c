
undefined4 FUN_02150b00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(*(int *)(DAT_02172960 + 0xe0) + 0x18);
  if ((cVar1 == '\b') || (cVar1 == '\x17')) {
    return 1;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  if (*(int *)(param_1 + 0xb0) <= *(int *)(param_1 + 0xb4)) {
    FUN_0215041c();
  }
  uVar2 = FUN_0214f9fc(param_1);
  return uVar2;
}

