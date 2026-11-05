
void FUN_021a0c08(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 0x8cd) = 0xff;
  *(undefined1 *)(param_1 + 4) = 0;
  if ('\0' < *(char *)(param_1 + 0x36)) {
    iVar3 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 < *(char *)(param_1 + 0x36)) {
      return;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar3 = thunk_FUN_02176714();
  if (iVar3 < 2) {
    FUN_0219c024();
  }
  else {
    while( true ) {
      uVar5 = *(uint *)(param_1 + 0xc);
      uVar1 = FUN_021766fc();
      if ((uVar5 != uVar1) && (iVar3 = FUN_02176654(uVar5 & 0xff), iVar3 != 0)) break;
      iVar2 = *(int *)(param_1 + 0xc) + 1;
      iVar3 = iVar2 >> 0x1f;
      *(uint *)(param_1 + 0xc) = ((uint)(iVar2 * 0x40000000 + iVar3) >> 0x1e | iVar3 << 2) - iVar3;
      iVar3 = FUN_021766fc();
      if (*(int *)(param_1 + 0xc) == iVar3) {
        *(ushort *)(param_1 + 0x8d0) = *(short *)(param_1 + 0x8d0) + 1U & 0x7fff;
        *(undefined1 *)(param_1 + 4) = 1;
      }
    }
    if (*(char *)(param_1 + 0x8cc) == '\0') {
      uVar5 = *(uint *)(param_1 + 0xc);
      iVar3 = FUN_02199e24(uVar5 & 0xff);
      iVar2 = FUN_021a1a18(*(undefined4 *)(param_1 + 0x3c));
      iVar4 = *(int *)(iVar3 * 0x20c + param_1 + 0x44);
      uVar1 = *(uint *)(param_1 + 0x14) & 0x7fff;
      if (-1 < iVar4) {
        *(short *)(param_1 + iVar3 * 2 + 0x8c4) = (short)iVar4;
        if ((int)uVar1 < iVar4) {
          iVar3 = (uVar1 + 0x8000) - iVar4;
        }
        else {
          iVar3 = uVar1 - iVar4;
        }
        if (iVar3 < iVar2) {
          iVar2 = iVar3 + 1;
        }
        else if (iVar3 < 0x3fff) {
          uVar1 = (iVar4 + iVar2) - 1U & 0x7fff;
        }
        else {
          iVar2 = 1;
        }
      }
      FUN_021a0aa8(param_1,uVar5,uVar1,iVar2,0);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0xc);
      iVar3 = FUN_02199e24(uVar5 & 0xff);
      iVar2 = FUN_021a1a18(*(undefined4 *)(param_1 + 0x3c));
      iVar4 = (int)*(short *)(param_1 + iVar3 * 2 + 0x8c4);
      uVar1 = *(uint *)(param_1 + 0x14) & 0x7fff;
      if (-1 < iVar4) {
        if ((int)uVar1 < iVar4) {
          iVar4 = (uVar1 + 0x8000) - iVar4;
        }
        else {
          iVar4 = uVar1 - iVar4;
        }
        if (iVar4 < 0x3fff) {
          iVar2 = iVar4 + 1;
        }
        else {
          iVar2 = 1;
        }
      }
      iVar2 = FUN_021a0aa8(param_1,uVar5,uVar1,iVar2,1);
      if (iVar2 != 0) {
        *(short *)(param_1 + iVar3 * 2 + 0x8c4) = (short)uVar1;
      }
    }
    iVar2 = *(int *)(param_1 + 0xc) + 1;
    iVar3 = iVar2 >> 0x1f;
    *(uint *)(param_1 + 0xc) = ((uint)(iVar2 * 0x40000000 + iVar3) >> 0x1e | iVar3 << 2) - iVar3;
    iVar3 = FUN_021766fc();
    if (*(int *)(param_1 + 0xc) == iVar3) {
      *(ushort *)(param_1 + 0x8d0) = *(short *)(param_1 + 0x8d0) + 1U & 0x7fff;
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

