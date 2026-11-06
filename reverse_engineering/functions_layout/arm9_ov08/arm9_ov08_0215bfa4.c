
void FUN_0215bfa4(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  iVar4 = FUN_02156c1c();
  if (iVar4 < 1) {
    if (iVar4 == 0) {
      return;
    }
  }
  else if (iVar4 - 0x10U < 4) {
                    /* WARNING: Switch is manually overridden */
    switch(iVar4 - 0x10U) {
    case 0:
      if ((*(char *)(DAT_0216e77c + 0x14) != '\0') || (*(char *)(DAT_0216e77c + 10) != '\0')) {
        FUN_02162378(3);
        if (*(char *)(DAT_0216e77c + (uint)*(byte *)(DAT_0216e77c + 0x14) * 3 + 10) == '\0') {
          *(byte *)(DAT_0216e77c + 0x14) = *(byte *)(DAT_0216e77c + 0x14) - 1;
        }
        FUN_020517fc(DAT_0216e77c + 8 + (uint)*(byte *)(DAT_0216e77c + 0x14) * 3,0);
        if ((*(char *)(DAT_0216e77c + 0x14) == '\0') && (*(char *)(DAT_0216e77c + 10) == '\0')) {
          FUN_02156c0c(0);
        }
        FUN_02156bfc(1);
        FUN_02156bec(0);
      }
      break;
    case 1:
      if ((*(byte *)(DAT_0216e77c + 0x14) < 3) &&
         (*(char *)(DAT_0216e77c + (uint)*(byte *)(DAT_0216e77c + 0x14) * 3 + 10) != '\0')) {
        FUN_02162378(1);
        *(char *)(DAT_0216e77c + 0x14) = *(char *)(DAT_0216e77c + 0x14) + '\x01';
        FUN_02156bec(0);
      }
      break;
    case 2:
      *(undefined1 *)(DAT_0216e77c + 0x15) = 0;
      FUN_02162378(7);
      FUN_02157088(0x215bf25);
      return;
    case 3:
      iVar4 = FUN_0215bb7c();
      if (iVar4 == 0) {
        *(undefined1 *)(DAT_0216e77c + 0x15) = 2;
        FUN_02162378(9);
      }
      else {
        FUN_02162378(6);
        *(undefined1 *)(DAT_0216e77c + 0x15) = 1;
      }
      *(undefined1 *)(DAT_0216e77c + 0x14) = 3;
      **(uint **)(DAT_0216e77c + 4) = **(uint **)(DAT_0216e77c + 4) & 0xc1fffcff | 0x200;
      FUN_0215bd58();
      FUN_0215bc54();
      FUN_02157088(0x215bf25);
      return;
    }
    goto LAB_0215c18c;
  }
  if ((*(char *)(DAT_0216e77c + 0x14) != '\x03') || (iVar5 = FUN_0215bf40(0x1a), iVar5 == 0)) {
    FUN_02162378(1);
    iVar7 = DAT_0216e77c + 8;
    iVar5 = (uint)*(byte *)(DAT_0216e77c + 0x14) * 3;
    pcVar6 = (char *)(iVar7 + iVar5 + 2);
    cVar1 = *(char *)(iVar7 + iVar5 + 2);
    cVar3 = (char)iVar4;
    if (cVar1 == '\0') {
      *pcVar6 = cVar3;
    }
    else {
      pcVar8 = (char *)(iVar7 + iVar5 + 1);
      cVar2 = *(char *)(iVar7 + iVar5 + 1);
      if (cVar2 == '\0') {
        *pcVar8 = cVar1;
        *pcVar6 = cVar3;
        iVar4 = FUN_0215bf40(0x1a);
        if ((iVar4 != 0) && (*(byte *)(DAT_0216e77c + 0x14) < 3)) {
          *(byte *)(DAT_0216e77c + 0x14) = *(byte *)(DAT_0216e77c + 0x14) + 1;
        }
      }
      else {
        *(char *)(iVar7 + iVar5) = cVar2;
        *pcVar8 = *pcVar6;
        *pcVar6 = cVar3;
        if (*(byte *)(DAT_0216e77c + 0x14) < 3) {
          *(byte *)(DAT_0216e77c + 0x14) = *(byte *)(DAT_0216e77c + 0x14) + 1;
        }
      }
    }
    FUN_02156c0c(1);
    if (*(byte *)(DAT_0216e77c + 0x14) < 3) {
      FUN_02156bec(1);
    }
    else {
      FUN_02156bec(0);
    }
    if ((*(char *)(DAT_0216e77c + 0x14) == '\x03') && (iVar4 = FUN_0215bf40(0x1a), iVar4 != 0)) {
      FUN_02156bfc(0);
    }
  }
LAB_0215c18c:
  FUN_0215bd98();
  FUN_0215bd58();
  return;
}

