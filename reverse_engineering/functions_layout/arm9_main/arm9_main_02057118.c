
int * FUN_02057118(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = OS_DisableInterrupts();
  if ((param_1 & 1) == 0) {
    iVar2 = FUN_020574c4();
    if (DAT_020aafa4 == iVar2) {
      OS_RestoreInterrupts(uVar1);
      return (int *)0x0;
    }
  }
  else {
    iVar2 = FUN_020574c4();
    if (DAT_020aafa4 == iVar2) {
      do {
        OS_RestoreInterrupts(uVar1);
        FUN_0205529c(100);
        uVar1 = OS_DisableInterrupts();
        iVar2 = FUN_020574c4();
      } while (DAT_020aafa4 == iVar2);
    }
  }
  iVar2 = DAT_020aafb4 + 1;
  piVar4 = *(int **)(&DAT_020aafc4 + DAT_020aafb4 * 4);
  DAT_020aafb4 = iVar2;
  if (8 < iVar2) {
    DAT_020aafb4 = 0;
  }
  iVar2 = *piVar4;
  piVar3 = piVar4;
  while (iVar2 != 0) {
    piVar3 = (int *)*piVar3;
    iVar2 = *piVar3;
  }
  if (DAT_020aafb0 == (undefined4 *)0x0) {
    DAT_020aafa0 = piVar4;
  }
  else {
    *DAT_020aafb0 = (int)piVar4;
  }
  DAT_020aafbc = DAT_020aafbc + -1;
  DAT_020aafa4 = DAT_020aafa4 + 1;
  DAT_020aafb0 = piVar3;
  OS_RestoreInterrupts(uVar1);
  return piVar4;
}

