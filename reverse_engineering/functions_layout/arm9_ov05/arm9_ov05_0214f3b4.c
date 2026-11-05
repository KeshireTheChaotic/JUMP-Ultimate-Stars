
void FUN_0214f3b4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = 0;
  do {
    (*DAT_020a0e18)();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  if (*(int *)(iVar1 + 0x28) == 0) {
    FUN_02150128(*(undefined4 *)(iVar1 + 0x14),0);
  }
  else if (*(int *)(iVar1 + 0x28) == 1) {
    FUN_02159b40(*(undefined4 *)(iVar1 + 0x18),0);
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f42c);
  return;
}

