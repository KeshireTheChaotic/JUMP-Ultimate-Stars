
void FUN_02156fb4(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uStack_44;
  short asStack_3c [20];
  
  uVar13 = 0;
  do {
    iVar10 = param_1 + uVar13 * 0x14;
    uVar1 = *(undefined1 *)((uVar13 & 0xff) + 0x2169d28);
    iVar12 = 0;
    do {
      *(char *)(iVar10 + iVar12 + 0x178) = (char)iVar12;
      sVar5 = FUN_02072244(uVar1,iVar12);
      iVar11 = iVar12 + 1;
      asStack_3c[iVar12] = sVar5;
      iVar12 = iVar11;
    } while (iVar11 < 0x14);
    iVar12 = 0;
    do {
      iVar11 = iVar12;
      while (iVar11 = iVar11 + 1, iVar11 < 0x14) {
        bVar2 = *(byte *)(iVar10 + iVar12 + 0x178);
        bVar3 = *(byte *)(iVar10 + iVar11 + 0x178);
        if (asStack_3c[bVar2] < asStack_3c[bVar3]) {
          *(byte *)(iVar10 + iVar12 + 0x178) = bVar3;
          *(byte *)(iVar10 + iVar11 + 0x178) = bVar2;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x14);
    iVar11 = param_1 + uVar13 * 0x28;
    iVar12 = 0;
    do {
      iVar8 = iVar10 + iVar12;
      iVar9 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      *(short *)(iVar11 + iVar9 + 0x1c8) = asStack_3c[*(byte *)(iVar8 + 0x178)];
    } while (iVar12 < 0x14);
    iVar12 = 0;
    uStack_44 = 0;
    do {
      cVar4 = '\0';
      iVar8 = iVar12;
      while (iVar8 = iVar8 + 1, iVar8 < 0x14) {
        if (*(short *)(iVar11 + iVar12 * 2 + 0x1c8) == *(short *)(iVar11 + iVar8 * 2 + 0x1c8)) {
          cVar4 = cVar4 + '\x01';
        }
      }
      *(char *)(iVar10 + iVar12 + 0x128) = (char)uStack_44;
      if (cVar4 == '\0') {
        uStack_44 = iVar12 + 1U & 0xff;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x14);
    for (iVar12 = 0; iVar12 < 0x14; iVar12 = iVar12 + 1) {
      iVar8 = FUN_02156fa0(uVar13 & 0xff,*(undefined1 *)(iVar10 + iVar12 + 0x178));
      if (iVar8 == 0) {
        *(char *)(param_1 + uVar13 + 0x124) = (char)iVar12;
        break;
      }
    }
    uVar6 = 0;
    iVar12 = param_1 + uVar13;
    do {
      uVar7 = uVar6;
      while (uVar7 = uVar7 + 1, (int)uVar7 < 0x14) {
        if (*(short *)(iVar11 + uVar6 * 2 + 0x1c8) == *(short *)(iVar11 + uVar7 * 2 + 0x1c8)) {
          bVar2 = *(byte *)(iVar10 + uVar7 + 0x178);
          bVar3 = *(byte *)(iVar10 + uVar6 + 0x178);
          if ((bVar2 < bVar3) || (uVar7 == *(byte *)(iVar12 + 0x124))) {
            *(byte *)(iVar10 + uVar6 + 0x178) = bVar2;
            *(byte *)(iVar10 + uVar7 + 0x178) = bVar3;
            if (uVar7 == *(byte *)(iVar12 + 0x124)) {
              *(char *)(iVar12 + 0x124) = (char)uVar6;
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 0x14);
    uVar13 = uVar13 + 1;
    if (3 < (int)uVar13) {
      return;
    }
  } while( true );
}

