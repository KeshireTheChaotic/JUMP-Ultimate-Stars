
void FUN_0215e43c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  DAT_020a0f10 = DAT_020a0f10 + 1;
  if (*(char *)(iVar2 + 0xba) < '\x01') {
    return;
  }
  uVar1 = FUN_0214ce64();
  FUN_0214ce74(uVar1,6);
  FUN_0215e20c(iVar2);
  return;
}

