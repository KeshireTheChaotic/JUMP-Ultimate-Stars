
int FUN_02190e38(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021a8518 == DAT_021a8510) {
    do {
      DAT_021a853c = DAT_020aab78;
      FUN_02053290(0);
      DAT_021a853c = 0;
    } while (DAT_021a8518 == DAT_021a8510);
  }
  OS_RestoreInterrupts(uVar1);
  while( true ) {
    if ((uint)(DAT_021a8544 - DAT_021a8518) < 2) {
      DAT_021a8518 = 0;
    }
    if (*(ushort *)(DAT_021a8540 + DAT_021a8518) != 0) break;
    DAT_021a8518 = 0;
  }
  *param_1 = *(ushort *)(DAT_021a8540 + DAT_021a8518) - 2;
  return DAT_021a8540 + DAT_021a8518 + 2;
}

