
void FUN_02162158(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  FUN_020517fc(DAT_0216e7f0 + 0x480,0,0x10);
  iVar3 = FUN_02167538(param_1,0x20);
  if (iVar3 < 0xb) {
    if ((9 < iVar3) || (iVar3 == 0)) goto LAB_02162194;
LAB_021621d2:
    *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 3 | 4;
    FUN_02051890(param_1,DAT_0216e7f0 + 0x480,0x10);
  }
  else {
    if (0x1a < iVar3) {
      if (iVar3 == 0x20) goto LAB_02162194;
      goto LAB_021621d2;
    }
    if (iVar3 != 0x1a) goto LAB_021621d2;
LAB_02162194:
    *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 3;
    pcVar5 = (char *)(DAT_0216e7f0 + 0x480);
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        cVar1 = FUN_02161a70(*(undefined1 *)(param_1 + iVar4));
        cVar2 = FUN_02161a70(*(undefined1 *)(param_1 + iVar4 + 1));
        *pcVar5 = cVar1 * '\x10' + cVar2;
        iVar4 = iVar4 + 2;
        pcVar5 = pcVar5 + 1;
      } while (iVar4 < iVar3);
    }
  }
  if (iVar3 < 6) {
    if (4 < iVar3) {
LAB_0216222e:
      *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 0xfc | 1;
      return;
    }
    if (iVar3 == 0) {
      *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 0xfc;
      return;
    }
  }
  else if (iVar3 < 0xe) {
    if (9 < iVar3) {
      if (iVar3 == 10) goto LAB_0216222e;
      if (iVar3 == 0xd) goto LAB_02162246;
    }
  }
  else if (iVar3 == 0x1a) {
LAB_02162246:
    *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 0xfc | 2;
    return;
  }
  *(byte *)(DAT_0216e7f0 + 0x4e6) = *(byte *)(DAT_0216e7f0 + 0x4e6) & 0xfc | 3;
  return;
}

