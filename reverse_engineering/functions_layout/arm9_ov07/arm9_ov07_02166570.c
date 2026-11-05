
void FUN_02166570(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)*DAT_0214ccf8)(7,DAT_0214ccf8[1],0);
  if (iVar1 != 0) {
    iVar1 = (*(code *)*DAT_0214ccf8)(8,DAT_0214ccf8[1],0);
    if (iVar1 != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x21665b9);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2166859);
  }
  return;
}

