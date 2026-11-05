
void FUN_021601dc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_02067628();
  if (iVar1 != 0) {
    FUN_02154ab4();
    FUN_02162338();
    if (iVar1 < 1) {
      FUN_020675c8();
      FUN_0215c400();
      FUN_02162378(0x12);
    }
    else {
      DAT_0216e7c8 = 1;
      FUN_02162378(0x11);
    }
    FUN_02157088(0x21602c5);
    FUN_021677a0(0,param_1);
  }
  return;
}

