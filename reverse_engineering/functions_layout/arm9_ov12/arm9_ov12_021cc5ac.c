
void FUN_021cc5ac(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar8;
  uint uVar7;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  
  iVar11 = 0;
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  pbVar10 = (byte *)(iVar9 + 0x11);
  do {
    iVar4 = (int)*(char *)(iVar9 + iVar11 + 0x68);
    if (iVar4 != 0) {
      if (iVar4 < 1) {
        iVar8 = -iVar4;
      }
      else {
        iVar8 = iVar4;
      }
      uVar7 = iVar8 - 1;
      if (iVar4 < 1) {
        iVar4 = FUN_021cf68c(uVar7 & 0xff);
        if (iVar4 == 0) {
          bVar1 = ~(byte)(1 << (uVar7 & 0xff));
          *pbVar10 = *pbVar10 & bVar1;
          *(byte *)(iVar9 + 0x12) = *(byte *)(iVar9 + 0x12) & bVar1;
        }
      }
      else {
        iVar4 = FUN_021cf6d0(uVar7 & 0xff);
        if (iVar4 == 0) {
          *pbVar10 = *pbVar10 | (byte)(1 << (uVar7 & 0xff));
        }
      }
      *(undefined1 *)(iVar9 + iVar11 + 0x68) = 0;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  piVar5 = (int *)FUN_02028920(0);
  if (((*(uint *)(*piVar5 + *(int *)(*piVar5 + 0x70) * 4 + 0x18) & 0x40) == 0) ||
     (iVar11 = FUN_02064dc0(&DAT_0400006c), iVar11 != 0)) {
    *(undefined1 *)(iVar9 + 10) = 0;
    FUN_02087a08();
  }
  else {
    *(undefined1 *)(iVar9 + 10) = 1;
    FUN_02087a08();
  }
  *(bool *)(iVar9 + 0xb) = *(char *)(iVar9 + 0x12) != '\0';
  if (*(short *)(iVar9 + 0x18) == 0) {
    func_0x0219fbf8(*(char *)(iVar9 + 10) != '\0');
  }
  *(ushort *)(iVar9 + 0x18) = *(short *)(iVar9 + 0x18) + 1U & 0x1f;
  if ((*(char *)(iVar9 + 10) == '\0') && (*(char *)(iVar9 + 0xb) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((uint)(int)*(char *)(iVar9 + 0x14) < 5) {
                    /* WARNING: Switch is manually overridden */
    switch((int)*(char *)(iVar9 + 0x14)) {
    case 0:
      if (bVar2) {
        *(undefined1 *)(iVar9 + 0x14) = 3;
        uVar7 = 0;
      }
      else {
        *(short *)(iVar9 + 0x16) = *(short *)(iVar9 + 0x16) + -1;
        if (*(short *)(iVar9 + 0x16) < 1) {
          *(undefined1 *)(iVar9 + 0x14) = 1;
          *(undefined2 *)(iVar9 + 0x16) = 0x78;
        }
        uVar7 = 100;
      }
      break;
    case 1:
      if (bVar2) {
        *(undefined1 *)(iVar9 + 0x14) = 3;
        uVar7 = 0;
      }
      else {
        *(short *)(iVar9 + 0x16) = *(short *)(iVar9 + 0x16) + -1;
        if (*(short *)(iVar9 + 0x16) < 1) {
          *(undefined1 *)(iVar9 + 0x14) = 2;
          *(undefined2 *)(iVar9 + 0x16) = 0;
        }
        uVar7 = 100;
      }
      break;
    case 2:
      goto switchD_021cc6ba_caseD_2;
    case 3:
      if (bVar2) {
        uVar7 = 0;
      }
      else {
        *(undefined1 *)(iVar9 + 0x14) = 4;
        *(undefined2 *)(iVar9 + 0x16) = 0x5a;
        uVar7 = 0;
      }
      break;
    case 4:
      if (bVar2) {
        *(undefined1 *)(iVar9 + 0x14) = 3;
        uVar7 = 0;
      }
      else {
        *(short *)(iVar9 + 0x16) = *(short *)(iVar9 + 0x16) + -1;
        if (*(short *)(iVar9 + 0x16) < 1) {
          *(undefined1 *)(iVar9 + 0x14) = 2;
          *(undefined2 *)(iVar9 + 0x16) = 0;
        }
        iVar11 = FUN_0200d12c(*(short *)(iVar9 + 0x16) * -100,0x5a);
        uVar7 = iVar11 + 100U & 0xff;
      }
    }
  }
  else {
switchD_021cc6ba_caseD_2:
    if (bVar2) {
      *(undefined1 *)(iVar9 + 0x14) = 3;
      uVar7 = 0;
    }
    else {
      uVar7 = 100;
    }
  }
  uVar3 = FUN_0200d12c(uVar7 * *(byte *)(iVar9 + 0xd),100);
  FUN_0207336c(uVar3);
  uVar3 = FUN_0200d12c(uVar7 * *(byte *)(iVar9 + 0xe),100);
  FUN_020733b8(uVar3);
  *(undefined1 *)(iVar9 + 0xc) = 1;
  *(char *)(iVar9 + 0xf) = (char)uVar7;
  uVar7 = (uint)*(byte *)(iVar9 + 0x12);
  if (*(char *)(iVar9 + 10) != '\0') {
    uVar6 = func_0x021766fc();
    uVar7 = uVar7 | 1 << (uVar6 & 0xff) & 0xffU;
  }
  if (*(byte *)(iVar9 + 0x13) != uVar7) {
    *(char *)(iVar9 + 0x13) = (char)uVar7;
    iVar11 = 0;
    for (uVar7 = 0; uVar7 < 8; uVar7 = uVar7 + 1) {
      if ((1 << (uVar7 & 0xff) & (uint)*(byte *)(iVar9 + 0x13)) != 0) {
        iVar11 = iVar11 + 1;
      }
    }
    iVar9 = FUN_021cdff0();
    if (iVar11 < 3) {
      if (iVar9 != 4) {
        FUN_021cdffc(4);
      }
    }
    else if (iVar9 != 3) {
      FUN_021cdffc(3);
    }
  }
  return;
}

