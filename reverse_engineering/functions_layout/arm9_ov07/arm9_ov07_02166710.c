
void FUN_02166710(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0219bc20();
  if (((iVar1 == 0) && (DAT_0214ccf8[0x12] == 1)) &&
     (iVar1 = (*(code *)*DAT_0214ccf8)(10,DAT_0214ccf8[1],0), iVar1 != 0)) {
    iVar1 = func_0x0219ad18(DAT_0214ccf8[5]);
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x216679d);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166761);
  }
  return;
}

