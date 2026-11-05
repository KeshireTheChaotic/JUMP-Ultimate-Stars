
undefined4
FUN_02176a40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_0217575c();
  if (iVar1 == 0) {
    if ((2 < *(int *)(DAT_021a7410 + 0x24)) && (*(int *)(DAT_021a7410 + 0x24) != 4)) {
      *(undefined4 *)(DAT_021a7410 + 0x78) = param_2;
      *(undefined4 *)(DAT_021a7410 + 0x7c) = param_3;
      FUN_0217643c(4);
      FUN_021780a4(DAT_021a7410 + 0xe0,DAT_021a7410 + 0x1e0,0x2176241,0,param_4,param_5,param_6,
                   param_7);
      return 1;
    }
  }
  return 0;
}

