
void FUN_021536e8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  OS_DisableInterrupts();
  iVar2 = 0;
  DAT_0216d1b8 = 0;
  DAT_0216d1bc = 0;
  puVar1 = &DAT_0216d1ec;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  OS_RestoreInterrupts();
  return;
}

