
undefined * FUN_0215477c(int param_1)

{
  int iVar1;
  
  FUN_02004b94(&DAT_0216e690,param_1,0x3f);
  if (*(char *)(param_1 + 5) == 'x') {
    return &DAT_0216e690;
  }
  iVar1 = FUN_0215702c();
  if ((*(char *)(param_1 + 5) == 'y') && (iVar1 != 0)) {
    return &DAT_0216e690;
  }
  DAT_0216e695 = s_jefgis_0216a458[iVar1];
  return &DAT_0216e690;
}

