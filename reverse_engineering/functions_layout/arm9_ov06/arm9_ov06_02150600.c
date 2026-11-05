
undefined4 FUN_02150600(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_021500d8();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x4c) == 0)) {
    FUN_0215041c(param_1);
  }
  uVar2 = FUN_0214f8f8(param_1);
  DAT_020aff0c = FUN_0200d12c(uVar2,0x90);
  return 1;
}

