
undefined4 FUN_021cffa8(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_021cfefc();
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      (*DAT_021d7be4)(param_1,local_10,local_c,DAT_021d7be8);
      return 1;
    }
    if (iVar1 == 2) {
      return 0;
    }
  }
  return 1;
}

