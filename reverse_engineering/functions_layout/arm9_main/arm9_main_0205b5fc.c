
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205b5fc(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_2c;
  
  uVar4 = FUN_020574f8();
  iVar5 = FUN_0205e0f0(&DAT_020ad63c,0);
  if (iVar5 == 0) {
    return;
  }
  iStack_2c = -0x8000;
  do {
    iVar6 = FUN_0205e0f0(&DAT_020ad63c,iVar5);
    if ((*(char *)(iVar5 + 0x2d) == '\0') &&
       (iVar7 = FUN_02056d50(*(undefined4 *)(iVar5 + 0x30)), iVar7 != 0)) {
      *(undefined1 *)(iVar5 + 0x2d) = 1;
    }
    if ((*(char *)(iVar5 + 0x2d) == '\0') || ((uVar4 & 1 << *(sbyte *)(iVar5 + 0x3c)) != 0)) {
      FUN_0205e044(iVar5 + 0x1c);
      sVar1 = *(short *)(&DAT_02091db0 + (uint)*(byte *)(iVar5 + 0x41) * 2);
      sVar2 = *(short *)(&DAT_02091db0 + (uint)*(byte *)(iVar5 + 0x40) * 2);
      sVar3 = *(short *)(&DAT_02091db0 + (uint)*(byte *)(*(int *)(iVar5 + 4) + 0x20) * 2);
      iVar7 = FUN_0205e05c(iVar5 + 0x1c);
      iVar7 = (int)*(short *)(&DAT_02091db0 + (iVar7 >> 8) * 2) +
              (int)sVar3 + (int)sVar2 + (int)sVar1;
      if (iVar7 < -0x8000) {
        iVar7 = iStack_2c;
      }
      else if (0x7fff < iVar7) {
        iVar7 = 0x7fff;
      }
      if (iVar7 != *(short *)(iVar5 + 0x3e)) {
        FUN_020569fc(*(undefined1 *)(iVar5 + 0x3c),iVar7);
        *(short *)(iVar5 + 0x3e) = (short)iVar7;
      }
      if ((*(char *)(iVar5 + 0x2c) == '\x02') && (iVar7 = FUN_0205e02c(iVar5 + 0x1c), iVar7 != 0)) {
        FUN_0205b2d8(iVar5);
      }
      if (*(char *)(iVar5 + 0x2f) != '\0') {
        FUN_02056a40(*(undefined1 *)(iVar5 + 0x3c));
        *(undefined1 *)(iVar5 + 0x2f) = 0;
      }
    }
    else {
      FUN_0205b1d8(iVar5);
    }
    iVar5 = iVar6;
  } while (iVar6 != 0);
  return;
}

