
undefined4 FUN_0219312c(void)

{
  int iVar1;
  
  while( true ) {
    OS_DisableInterrupts();
    for (iVar1 = DAT_021a9d90;
        (iVar1 != 0 && ((iVar1 == DAT_021a9d30 || ((*(ushort *)(iVar1 + 0x70) & 0x10) != 0))));
        iVar1 = *(int *)(iVar1 + 0x7c)) {
    }
    OS_RestoreInterrupts();
    if (iVar1 == 0) break;
    FUN_02192fec(iVar1);
  }
  if (((DAT_021a9d90 == 0) ||
      ((DAT_021a9d90 == DAT_021a9d30 && (*(int *)(DAT_021a9d90 + 0x7c) == 0)))) &&
     (DAT_021a9d94 == 0)) {
    return 0;
  }
  return 0xffffffe6;
}

