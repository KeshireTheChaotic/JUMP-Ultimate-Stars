
void FUN_021796c8(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_021a75d8;
  do {
    if (*(int *)(puVar1 + 4) != 0) {
      FUN_021758a4(4,*(int *)(puVar1 + 4),0);
    }
    puVar1 = puVar1 + 0xc;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x9a);
  MIi_CpuClear32(0,&DAT_021a75d8,0x738);
  return;
}

