
void FUN_021cfac4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_021d6740;
  do {
    *puVar1 = 0x1000000;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  DAT_021d6738 = 0;
  DAT_021d6734 = 0;
  DAT_021d50e4 = 0;
  DAT_021d50e8 = 0;
  DAT_021d673c = 0;
  return;
}

