
void FUN_02190dfc(void)

{
  OS_DisableInterrupts();
  DAT_021a8518 = DAT_021a8518 + *(ushort *)(DAT_021a8540 + DAT_021a8518);
  if (DAT_021a8544 <= DAT_021a8518) {
    DAT_021a8518 = 0;
  }
  OS_RestoreInterrupts();
  return;
}

