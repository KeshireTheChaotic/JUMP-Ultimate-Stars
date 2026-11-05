
void FUN_02193bc0(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  OS_DisableInterrupts();
  iVar3 = 0;
  puVar2 = &DAT_021a9f24;
  do {
    if ((puVar2[0x5a] != '\0') && (0x3bd < param_1 - *(int *)(puVar2 + 0x50))) {
      puVar2[0x5a] = 0;
    }
    puVar2 = puVar2 + 0x5c;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  OS_RestoreInterrupts();
  for (iVar3 = DAT_020aab7c; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x68)) {
    piVar1 = *(int **)(iVar3 + 0xa4);
    if ((((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (*(char *)((int)piVar1 + 9) != '\0')) &&
       ((((char)piVar1[2] == '\x04' && (*(byte *)(piVar1[3] + 0x455) < 8)) &&
        ((0xef < param_1 - piVar1[4] && (piVar1[1] == 2)))))) {
      *(undefined1 *)(piVar1 + 2) = 0;
      piVar1[1] = 0;
      FUN_020531dc(*piVar1);
    }
  }
  return;
}

