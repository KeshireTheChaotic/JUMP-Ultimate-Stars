
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02173c54(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_20 [4];
  int local_1c;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar8 = *(int *)(*(int *)(iVar7 + 0x20) + 0x1a8);
  if (**(int **)(iVar7 + 0x24) != 0) {
    iVar6 = *(int *)(*(int *)(iVar8 + 0x10) + 0x5c);
    uVar3 = FUN_020837e0(*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10),iVar7 + 0xb0);
    *(short *)(iVar7 + 0xc0) = (short)uVar3;
    *(char *)(iVar7 + 0xc4) = (char)((uint)uVar3 >> 0x10);
    if (*(short *)(iVar7 + 0xc0) != *(short *)(iVar7 + 0xc2)) {
      *(short *)(iVar7 + 0xc2) = *(short *)(iVar7 + 0xc0);
    }
    iVar4 = FUN_02083acc((int)*(char *)(iVar7 + 0xc4));
    if (iVar4 == 0) {
      bVar2 = *(byte *)(iVar7 + 0xc5) | 1;
    }
    else {
      bVar2 = *(byte *)(iVar7 + 0xc5) & 0xfe;
    }
    *(byte *)(iVar7 + 0xc5) = bVar2;
    *(uint *)(iVar7 + 0xd4) = *(uint *)(iVar7 + 0xd4) & 0xf0ffffff;
    if ((*(char *)(*(int *)(iVar8 + 0x10) + 0x9c) == '\v') && ((*(uint *)(iVar7 + 0xd4) & 2) == 0))
    {
      *(uint *)(iVar7 + 0xd4) = *(uint *)(iVar7 + 0xd4) | 0x1000000;
    }
    if (*(char *)(iVar7 + 0xc4) == '\a') {
      *(uint *)(iVar7 + 0xd4) = *(uint *)(iVar7 + 0xd4) | 0x2000000;
      if ((1 << (*(uint *)(_DAT_02172960 + 0x154) & 0xff) & 0x380U) != 0) {
        *(uint *)(iVar7 + 0xd4) = *(uint *)(iVar7 + 0xd4) | 0x1000000;
      }
      if (*(int *)(iVar7 + 0xb4) - *(int *)(iVar6 + 0x10) < 0x6000) {
        *(uint *)(iVar7 + 0xd4) = *(uint *)(iVar7 + 0xd4) | 0x4000000;
      }
    }
    if (((((*(uint *)(iVar7 + 0xd4) & 2) != 0) && (*(char *)(iVar7 + 0xc4) == '\f')) &&
        (uVar5 = FUN_020837e0(*(undefined4 *)(iVar6 + 0xc),*(int *)(iVar6 + 0x10) + 0x1000,
                              auStack_20), uVar5 >> 0x10 == 7)) &&
       (local_1c - *(int *)(iVar7 + 0xb4) < 0x6000)) {
      *(uint *)(iVar7 + 0xd4) = *(uint *)(iVar7 + 0xd4) | 0x4000000;
    }
    if (*(char *)(*(int *)(*(int *)(*(int *)(iVar8 + 8) + 4) + 100) + 0x48) == '\0') {
      uVar5 = *(uint *)(iVar7 + 0xd4) & 0xffffff7f;
    }
    else {
      uVar5 = *(uint *)(iVar7 + 0xd4) | 0x80;
    }
    *(uint *)(iVar7 + 0xd4) = uVar5;
    iVar8 = FUN_02173c40(*(undefined4 *)(iVar7 + 0x24));
    if (**(int **)(iVar7 + 0x24) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = *(int *)(**(int **)(iVar7 + 0x24) + 0x60);
    }
    if (iVar8 * 2 < iVar6) {
      *(undefined1 *)(iVar7 + 0x10a) = *(undefined1 *)(*(int *)(iVar7 + 0x2c) + 0x15);
    }
    else if (*(char *)(iVar7 + 0x106) == '\0') {
      *(undefined1 *)(iVar7 + 0x10a) = *(undefined1 *)(*(int *)(iVar7 + 0x2c) + 0x16);
    }
    else {
      *(undefined1 *)(iVar7 + 0x10a) = *(undefined1 *)(*(int *)(iVar7 + 0x2c) + 0x14);
    }
    if ((*(uint *)(iVar7 + 0xd4) & 1) == 0) {
      FUN_0217fbcc(iVar7,1);
    }
    else {
      FUN_02180924(iVar7);
      iVar8 = FUN_02173318(iVar7);
      cVar1 = '\0';
      if (iVar8 != 0) {
        cVar1 = *(char *)(iVar7 + 0x105);
      }
      if (iVar8 != 0 && cVar1 != '\n') {
        FUN_0217325c(*(undefined4 *)(iVar7 + 0x24));
        FUN_02176d14();
        FUN_0217aa58(iVar7);
        FUN_0217e3a0(iVar7);
        FUN_0217f890(iVar7);
        FUN_0217fe30(iVar7);
        FUN_02180be4(iVar7);
        FUN_02180680(iVar7);
        *(undefined1 *)(iVar7 + 0x105) = 1;
      }
      if ((*(uint *)(*(int *)(iVar7 + 0x24) + 0x24) & 2) != 0) {
        uVar5 = *(uint *)(*(int *)(iVar7 + 0x20) + 0x128);
        iVar8 = FUN_0217325c();
        if ((uVar5 & 2) == 0) {
          *(uint *)(iVar8 + 0x180) = *(uint *)(iVar8 + 0x180) & 0xfffffffd;
        }
        else {
          *(uint *)(iVar8 + 0x180) = *(uint *)(iVar8 + 0x180) | 2;
        }
      }
      if (*(char *)(iVar7 + 0x108) == '\x01') {
        FUN_0217f5b8(iVar7);
      }
      iVar8 = FUN_0217fbcc(iVar7,0);
      if (iVar8 == 0) {
        (**(code **)((uint)*(byte *)(iVar7 + 0x105) * 4 + 0x21816c8))(iVar7);
        *(short *)(iVar7 + 0x3c) = *(short *)(iVar7 + 0x3c) + 1;
        if (*(char *)(iVar7 + 0x52) != '\0') {
          *(char *)(iVar7 + 0x52) = *(char *)(iVar7 + 0x52) + -1;
        }
        FUN_0217e2a4(iVar7);
      }
    }
  }
  return;
}

