
void FUN_027e6818(void)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  
  psVar1 = DAT_027f97f0;
  DAT_027f97f0[0x67] = 0;
  psVar1[0x44] = 1;
  psVar1[0x60] = psVar1[0x60] + -1;
  if (psVar1[0x60] == 0) {
    if (psVar1[0x5f] == -1) {
      psVar1[0x5f] = 4;
    }
    FUN_027e0334(psVar1[0x5f] & 0xff);
    sVar2 = FUN_027e02c0();
    psVar1[0x5e] = sVar2;
    psVar1[0x5f] = -1;
    psVar1[0x60] = 1;
  }
  if (*psVar1 == 9) {
    OS_DisableInterrupts();
    if (psVar1[0xc1] == 0) {
      psVar1[0x31] = 0;
      OS_RestoreInterrupts();
    }
    else {
      bVar4 = true;
      if ((psVar1[0x31] != 0) && (psVar1[0x32] != 0)) {
        bVar4 = false;
      }
      psVar1[0x31] = psVar1[0x31] + psVar1[0x2d];
      if (0x100 < psVar1[0x31]) {
        psVar1[0x31] = 0x100;
      }
      psVar1[0x32] = psVar1[0x2e];
      if (((bVar4) && (0 < psVar1[0x31])) && (0 < psVar1[0x32])) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      OS_RestoreInterrupts();
      if (bVar4) {
        FUN_027e79f4(0xffff);
      }
      if ((psVar1[0x49] == 1) && (psVar1[0x50] = psVar1[0x50] + -1, psVar1[0x50] == 0)) {
        psVar1[0x4f] = 1;
        psVar1[0x50] = 0x3c;
      }
    }
  }
  else if (*psVar1 == 10) {
    OS_DisableInterrupts();
    iVar3 = *(int *)(psVar1 + 0x39a);
    if (iVar3 != 1) {
      psVar1[0x30] = 0;
    }
    OS_RestoreInterrupts();
    if (iVar3 != 1) {
      FUN_027e7bf4();
    }
  }
  return;
}

