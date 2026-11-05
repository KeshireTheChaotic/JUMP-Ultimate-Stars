
undefined4 FUN_02056e74(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_020aafa8 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if (7 < DAT_020aafbc) {
    if ((param_1 & 1) == 0) {
      OS_RestoreInterrupts();
      return 0;
    }
    do {
      FUN_02057118(1);
    } while (7 < DAT_020aafbc);
  }
  DC_FlushRange(&DAT_020ab280,0x1800);
  iVar2 = FUN_020557c8(7,DAT_020aafa8,0);
  if (iVar2 < 0) {
    if ((param_1 & 1) == 0) {
      OS_RestoreInterrupts(uVar1);
      return 0;
    }
    iVar2 = FUN_020557c8(7,DAT_020aafa8,0);
    while (iVar2 < 0) {
      OS_RestoreInterrupts(uVar1);
      FUN_0205529c(100);
      uVar1 = OS_DisableInterrupts();
      iVar2 = FUN_020557c8(7,DAT_020aafa8,0);
    }
  }
  if ((param_1 & 2) != 0) {
    FUN_02056be0();
  }
  iVar3 = DAT_020aafb8 + 1;
  iVar2 = DAT_020aafb8 * 4;
  DAT_020aafb8 = iVar3;
  *(int *)(&DAT_020aafc4 + iVar2) = DAT_020aafa8;
  if (8 < iVar3) {
    DAT_020aafb8 = 0;
  }
  DAT_020aafbc = DAT_020aafbc + 1;
  DAT_020aafc0 = DAT_020aafc0 + 1;
  DAT_020aafa8 = 0;
  DAT_020aafac = 0;
  OS_RestoreInterrupts(uVar1);
  return 1;
}

