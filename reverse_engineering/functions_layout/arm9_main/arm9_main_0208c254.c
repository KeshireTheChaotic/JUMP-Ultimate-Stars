
void FUN_0208c254(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  undefined4 in_r3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uStack_18;
  
  uVar1 = DAT_0214ccf0;
  uStack_18 = in_r3;
  if (cRam0214cce1 == '\0') {
    iVar4 = 0;
    do {
      (&DAT_0214ccf0)[iVar4] = *(undefined1 *)(iVar4 + 0x214ccf1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    uRam0214ccf3 = uVar1;
    return;
  }
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 1;
    *(char *)((int)&uStack_18 + iVar4) = (char)iVar3;
    iVar4 = iVar3;
  } while (iVar3 < 4);
  iVar4 = 0;
  do {
    cVar6 = '\0';
    iVar5 = 0;
    iVar3 = 0;
    do {
      if (*(char *)((int)&uStack_18 + iVar3) != '\0') {
        iVar5 = iVar5 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar2,iVar5);
    iVar3 = extraout_r1;
    for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {
      if (*(char *)((int)&uStack_18 + iVar5) != '\0') {
        if (iVar3 == 0) {
          cVar6 = *(char *)((int)&uStack_18 + iVar5) + -1;
          *(undefined1 *)((int)&uStack_18 + iVar5) = 0;
          break;
        }
        iVar3 = iVar3 + -1;
      }
    }
    (&DAT_0214ccf0)[iVar4] = cVar6;
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      cRam0214cce1 = 0;
      return;
    }
  } while( true );
}

