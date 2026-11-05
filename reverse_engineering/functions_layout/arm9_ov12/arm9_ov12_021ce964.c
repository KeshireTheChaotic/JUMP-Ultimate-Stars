
void FUN_021ce964(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  DAT_021d66ac = OS_DisableInterrupts();
  piVar2 = &DAT_021d66b0;
  puVar3 = &DAT_021d66bc;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    iVar1 = *piVar2;
    while (iVar1 != 0) {
      *piVar2 = *(int *)(iVar1 + 8);
      if (*piVar2 != 0) {
        *(undefined4 *)(*piVar2 + 4) = 0;
      }
      FUN_021cf870();
      iVar1 = *piVar2;
    }
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    piVar2 = piVar2 + 1;
  }
  OS_RestoreInterrupts(DAT_021d66ac);
  return;
}

