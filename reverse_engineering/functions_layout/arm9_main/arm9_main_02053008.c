
void FUN_02053008(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar2 = DAT_020aab78;
  iVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  uVar3 = OS_DisableInterrupts();
  if (DAT_020aab7c != 0) {
    iVar4 = 0;
    iVar5 = DAT_020aab7c;
    do {
      if (iVar5 == iVar2) {
        iVar8 = iVar4;
      }
      bVar9 = *(int *)(iVar2 + 0x70) == *(int *)(iVar5 + 0x70);
      if (bVar9) {
        iVar7 = iVar5;
      }
      piVar1 = (int *)(iVar5 + 0x68);
      if (bVar9) {
        iVar6 = iVar6 + 1;
      }
      iVar4 = iVar5;
      iVar5 = *piVar1;
    } while (*piVar1 != 0);
  }
  if ((iVar6 < 2) || (iVar7 == iVar2)) {
    OS_RestoreInterrupts(uVar3);
    return;
  }
  if (iVar8 == 0) {
    DAT_020aab7c = *(int *)(iVar2 + 0x68);
  }
  else {
    *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(iVar2 + 0x68);
  }
  *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar7 + 0x68);
  *(int *)(iVar7 + 0x68) = iVar2;
  FUN_020530c4();
  OS_RestoreInterrupts(uVar3);
  return;
}

