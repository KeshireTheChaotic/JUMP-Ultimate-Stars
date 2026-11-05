
undefined4 FUN_02198cf4(void)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  
  uVar2 = OS_DisableInterrupts();
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  switch(*(undefined4 *)(DAT_021aa094 + 0x2260)) {
  default:
    OS_RestoreInterrupts(uVar2);
    return 1;
  case 1:
    OS_RestoreInterrupts();
    return 0;
  case 3:
  case 9:
  case 0xc:
    break;
  case 6:
    FUN_021988cc(0xd);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 9;
    OS_RestoreInterrupts(uVar2);
    return 3;
  case 0xd:
    OS_RestoreInterrupts();
    return 2;
  }
  if (*(char *)(DAT_021aa094 + 0x226b) == '\x01') {
    FUN_021988cc(0xd);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 9;
  }
  else {
    psVar3 = (short *)FUN_02057b10();
    DC_InvalidateRange(psVar3,2);
    sVar1 = *psVar3;
    if (sVar1 == 0) {
      iVar4 = FUN_0205822c();
      if (iVar4 == 0) {
        FUN_021988cc(1);
        *(undefined2 *)(DAT_021aa094 + 0x2280) = 0;
        OS_RestoreInterrupts(uVar2);
        return 0;
      }
    }
    else if (sVar1 == 1) {
      iVar4 = FUN_020595a8(0x2198581);
    }
    else if (sVar1 == 2) {
      iVar4 = FUN_02059518(0x2198581);
    }
    else {
      *(undefined1 *)(DAT_021aa094 + 0x226b) = 1;
      iVar4 = FUN_02059470(0x2197c81);
    }
    if (iVar4 != 2) {
      if ((iVar4 == 3) || (iVar4 != 8)) {
        FUN_021988cc(0xb);
        OS_RestoreInterrupts(uVar2);
        return 7;
      }
      OS_RestoreInterrupts(uVar2);
      return 4;
    }
    FUN_021988cc(0xd);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 9;
  }
  OS_RestoreInterrupts(uVar2);
  return 3;
}

