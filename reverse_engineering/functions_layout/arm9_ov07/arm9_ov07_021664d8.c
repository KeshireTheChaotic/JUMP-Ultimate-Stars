
void FUN_021664d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)*DAT_0214ccf8)(5,DAT_0214ccf8[1],0,(code *)*DAT_0214ccf8,param_4);
  if (iVar1 != 0) {
    iVar1 = (*(code *)*DAT_0214ccf8)(6,DAT_0214ccf8[1],0);
    if (iVar1 != 0) {
      for (iVar1 = 0; iVar1 < (int)DAT_0214ccf8[0x11]; iVar1 = iVar1 + 1) {
        iVar3 = DAT_0214ccf8[6];
        iVar2 = FUN_020698cc(iVar3 + iVar1 * 0xc);
        if (iVar2 != 0) {
          FUN_02069ba0(iVar3 + iVar1 * 0xc);
        }
      }
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166549);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166439);
  }
  return;
}

