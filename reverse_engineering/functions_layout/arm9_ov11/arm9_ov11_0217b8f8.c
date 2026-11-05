
void FUN_0217b8f8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = FUN_0217335c(param_1,1);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x1ec) != '\0') {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xd4);
  bVar6 = (uVar2 & 2) != 0;
  if (bVar6) {
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x20) + 0xdb);
  }
  if (bVar6 && uVar2 != 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x3e) == 0) {
    if (*(char *)(param_1 + 0x3a) == '\0') {
      *(undefined1 *)(param_1 + 0x39) = 4;
    }
    else {
      FUN_0217d8d0(param_1);
    }
  }
  else if (3 < *(byte *)(param_1 + 0x3e)) {
    uVar5 = (uint)*(byte *)(param_1 + 0x3a);
    uVar2 = 0;
    if ((1 << uVar5 & 0x7f9980U) == 0) {
      for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
        uVar5 = (uint)*(byte *)(param_1 + 0x3a);
        uVar4 = FUN_0217bfc8(*(undefined4 *)(param_1 + 0x24),iVar1);
        if ((uVar4 & 1 << uVar5) != 0) {
          uVar2 = 1;
          break;
        }
      }
      bVar6 = uVar2 != 0;
      uVar2 = 0;
      if (bVar6) {
        bVar6 = uVar5 == 1;
        if (bVar6) {
          *(undefined1 *)(param_1 + 0x41) = 0;
        }
        uVar5 = (uint)bVar6;
        uVar2 = uVar5;
        if (!bVar6) {
          iVar1 = 2;
          while ((-1 < iVar1 && (uVar2 == 0))) {
            uVar4 = uVar5;
            while( true ) {
              if ((4 < (int)uVar4) || ((char)(&DAT_021813e4)[uVar4 * 2 + iVar1 * 10] < 0))
              goto LAB_0217ba08;
              if ((uint)*(byte *)(param_1 + 0x3a) ==
                  (int)(char)(&DAT_021813e4)[uVar4 * 2 + iVar1 * 10]) break;
              uVar4 = uVar4 + 1;
            }
            uVar2 = 1;
            *(char *)(param_1 + 0x41) = (char)iVar1 + '\x01';
LAB_0217ba08:
            iVar1 = iVar1 + -1;
          }
        }
        if (uVar2 == 0) {
          uVar2 = 0;
        }
      }
    }
    if ((uVar2 == 0) || ((*(uint *)(param_1 + 0xd4) & 0x400) != 0)) {
      if (*(char *)(param_1 + 0x3a) == '\f') {
        iVar1 = 0;
        for (puVar3 = (undefined4 *)(*(int **)(param_1 + 0x24))[5]; puVar3 != (undefined4 *)0x0;
            puVar3 = (undefined4 *)*puVar3) {
          if (**(int **)(param_1 + 0x24) == puVar3[2]) {
            *(char *)(param_1 + 0x51) = (char)iVar1;
            break;
          }
          iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
        }
        *(undefined1 *)(param_1 + 0x39) = 8;
      }
      else {
        *(undefined1 *)(param_1 + 0x39) = 4;
      }
      *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) & 0xfffffbff;
    }
    else {
      iVar1 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),7);
      if ((iVar1 == 0) && (*(char *)(*(int *)(param_1 + 0x2c) + 0xe) != '\0')) {
        *(undefined1 *)(param_1 + 0x39) = 5;
        FUN_0217bb30(*(undefined4 *)(param_1 + 0x24),1);
        *(undefined1 *)(param_1 + 0x50) = 0xff;
      }
      else {
        *(undefined1 *)(param_1 + 0x39) = 4;
      }
    }
    *(undefined1 *)(param_1 + 0x3e) = 0;
    return;
  }
  *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
  return;
}

