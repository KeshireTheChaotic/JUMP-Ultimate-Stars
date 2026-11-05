
int FUN_020545b4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  OS_DisableInterrupts();
  puVar3 = (undefined4 *)(param_2 + 0x1fU & 0xffffffe0);
  iVar1 = *(int *)(*(int *)(&DAT_020aadd4 + param_1 * 4) + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar4 = *(int **)(*(int *)(&DAT_020aadd4 + param_1 * 4) + 0x10);
    do {
      if (*piVar4 < 0) {
        *piVar4 = (param_3 & 0xffffffe0) - (int)puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = *piVar4;
        piVar4[1] = (int)puVar3;
        piVar4[2] = 0;
        OS_RestoreInterrupts();
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar2 < iVar1);
  }
  OS_RestoreInterrupts();
  return -1;
}

