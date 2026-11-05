
void FUN_0214d1dc(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar6 = 0;
  do {
    uVar5 = 0;
    uVar1 = (&DAT_0215d298)[uVar6 & 0xff];
    iVar7 = 0;
    do {
      iVar3 = FUN_02072244(uVar1,iVar7);
      cVar2 = '\0';
      iVar8 = iVar7 + 1;
      while (iVar8 < 0x14) {
        iVar4 = FUN_02072244((&DAT_0215d298)[uVar6 & 0xff],iVar8);
        iVar8 = iVar8 + 1;
        if (iVar3 == iVar4) {
          cVar2 = cVar2 + '\x01';
        }
      }
      *(char *)(uVar6 * 0x14 + param_1 + iVar7 + 0x24) = (char)uVar5;
      if (cVar2 == '\0') {
        uVar5 = iVar7 + 1U & 0xff;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 4);
  return;
}

