
void FUN_02164924(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02164ca4(*(short *)(param_1 + 2));
    FUN_02164cb8(9);
    return;
  }
  uVar1 = *(ushort *)(param_1 + 4) - 10;
  if (uVar1 < 4) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar1) {
    case 0:
      if (*(int *)(DAT_0216e828 + 0x44) == 2) {
        if (*(int *)(DAT_0216e828 + 0x40) == 4) {
          iVar2 = FUN_021648f0();
          if (iVar2 != 0) {
            return;
          }
          if (DAT_0216e824 != (code *)0x0) {
            (*DAT_0216e824)(0x8000000,s_DWCi_MOV_WH_StateInStartParentKe_0216c0a8);
          }
          FUN_02164cb8(9);
          return;
        }
        if (*(int *)(DAT_0216e828 + 0x40) == 6) {
          return;
        }
      }
      else if (*(int *)(DAT_0216e828 + 0x44) == 4) {
        iVar2 = FUN_0205a7fc(DAT_0216e828 + 0x13e0,0xd,7,0x44,1);
        if (iVar2 == 0) {
          FUN_02164cb8(5);
          return;
        }
        FUN_02164ca4();
        FUN_02164cb8(9);
        return;
      }
      FUN_02164cb8(4);
      return;
    case 1:
      return;
    }
  }
  if (DAT_0216e824 == (code *)0x0) {
    return;
  }
  (*DAT_0216e824)(0x8000000,s_unknown_indicate__state____d_0216c060);
  return;
}

