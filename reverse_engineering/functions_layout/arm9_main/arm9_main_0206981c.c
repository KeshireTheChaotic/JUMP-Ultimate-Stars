
undefined4 FUN_0206981c(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_10;
  
  iVar1 = FUN_02069c44(param_1 + 0x10);
  if (iVar1 == 0) {
    return 1;
  }
  FUN_0206a968(&iStack_20);
  if (iStack_10 == 0) {
    return 0;
  }
  lVar2 = FUN_02069cac(param_1 + 0x10);
  if (lVar2 == CONCAT44(uStack_1c,iStack_20)) {
    return 1;
  }
  return 0;
}

