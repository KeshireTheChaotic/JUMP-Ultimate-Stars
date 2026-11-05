
void FUN_0217806c(int param_1)

{
  if ((DAT_021a75a4 != (int *)0x0) && (param_1 != 0)) {
    FUN_02175744();
    if ((*DAT_021a75a4 != 0) && (*DAT_021a75a4 != 2)) {
      (*(code *)DAT_021a75a4[0xb])
                (param_1,*(undefined1 *)((int)DAT_021a75a4 + 0x1d),DAT_021a75a4[0xc]);
    }
    FUN_02177dcc();
  }
  return;
}

