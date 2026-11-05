
void FUN_0217b0f0(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 local_38 [4];
  uint local_34 [4];
  
  iVar5 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  iVar12 = *(int *)(*(int *)(iVar5 + 4) + 0x10);
  iVar5 = *(char *)(param_1 + 0x38) * 0x10c + iVar12 + 0xa8;
  if ((*(char *)(param_1 + 0x3a) == '\b') && (*(char *)(*(int *)(iVar5 + 0x20) + 0x18) != '\x03')) {
    *(undefined1 *)(param_1 + 0x39) = 0;
    *(undefined1 *)(param_1 + 0x3e) = 0;
    return;
  }
  uVar11 = 0;
  if ((*(uint *)(param_1 + 0xd4) & 2) == 0) {
    FUN_0217c01c(param_1);
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      iVar7 = FUN_0217ab28(*(undefined4 *)(param_1 + 0x2c),iVar13 + 2);
      if ((iVar7 == 0) &&
         (((iVar13 == 0 ||
           (((*(uint *)(param_1 + 0xd4) & 0x2000000) == 0 &&
            (-1 < *(short *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10) +
                                     0x5c) + 0x26))))) &&
          (uVar8 = FUN_0217b504(*(undefined4 *)(param_1 + 0x24),iVar13),
          (uVar8 & 1 << (uint)*(byte *)(param_1 + 0x38)) != 0)))) {
        uVar11 = 1;
        *(char *)(param_1 + 0x3a) = (char)iVar13 + '\t';
        break;
      }
    }
    if (uVar11 != 0) {
      FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
      FUN_02176d14();
      *(undefined1 *)(param_1 + 0x39) = 3;
      *(undefined1 *)(param_1 + 0x3e) = 0;
      iVar13 = 1;
      goto LAB_0217b328;
    }
  }
  else {
    bVar1 = false;
    bVar2 = false;
    iVar13 = 0;
    do {
      uVar6 = FUN_0217b504(*(undefined4 *)(param_1 + 0x24),iVar13);
      local_34[iVar13] = uVar6;
      uVar11 = uVar11 | uVar6;
      uVar8 = 1 << (uint)*(byte *)(param_1 + 0x38);
      if ((uVar6 & (uVar8 | uVar8 << 4)) == 0) {
        local_38[iVar13] = 0xff;
      }
      else {
        bVar1 = true;
        uVar3 = FUN_0217b51c(*(undefined4 *)(param_1 + 0x24),iVar13);
        local_38[iVar13] = uVar3;
      }
      if ((local_34[iVar13] & 0xff) == 0) {
        local_38[iVar13 + 2] = 0xff;
      }
      else {
        bVar2 = true;
        uVar3 = FUN_0217b51c(*(undefined4 *)(param_1 + 0x24),iVar13);
        local_38[iVar13 + 2] = uVar3;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    if (uVar11 == 0) {
      iVar13 = -1;
      goto LAB_0217b328;
    }
    iVar13 = -1;
    if (bVar1) {
      iVar13 = FUN_0217b534(param_1,local_38,local_34);
    }
    else if (bVar2) {
      iVar13 = FUN_0217b534(param_1,local_38 + 2,local_34);
    }
    if (-1 < iVar13) {
      FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
      FUN_02176d14();
      *(char *)(param_1 + 0x3a) = (char)iVar13;
      *(undefined1 *)(param_1 + 0x3e) = 0;
      iVar13 = 1;
      *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + '\x01';
      goto LAB_0217b328;
    }
  }
  iVar13 = 0;
LAB_0217b328:
  if (iVar13 != 1) {
    iVar13 = FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
    if (iVar13 == 0) {
      bVar1 = true;
    }
    else if ((*(uint *)(iVar13 + 0x180) & 4) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = FUN_0217c01c(param_1);
      if (iVar5 != 0) {
        if ((*(uint *)(param_1 + 0xd4) & 2) != 0) {
          for (iVar5 = 0; iVar5 < 2; iVar5 = iVar5 + 1) {
            uVar11 = FUN_0217b504(*(undefined4 *)(param_1 + 0x24),iVar5);
            if ((uVar11 & 1 << (uint)*(byte *)(param_1 + 0x38)) != 0) {
              if (*(char *)(param_1 + 0x3a) == '\0') {
                cVar4 = '\a';
              }
              else {
                cVar4 = *(char *)(param_1 + 0x39) + '\x01';
              }
              *(char *)(param_1 + 0x39) = cVar4;
              *(undefined1 *)(param_1 + 0x3e) = 0;
              iVar5 = FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
              if (iVar5 == 0) {
                return;
              }
              *(uint *)(iVar5 + 0x180) = *(uint *)(iVar5 + 0x180) & 0xfffffffb;
              return;
            }
          }
        }
        iVar5 = FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
        if (iVar5 != 0) {
          *(uint *)(iVar5 + 0x180) = *(uint *)(iVar5 + 0x180) & 0xfffffffb;
        }
        FUN_0217aa58(param_1);
        *(undefined1 *)(param_1 + 0x105) = 1;
      }
    }
    else if (*(char *)(*(int *)(iVar5 + 0x20) + 0x18) != '\x17') {
      puVar10 = *(undefined4 **)(iVar12 + *(char *)(param_1 + 0x38) * 4 + 0x98);
      if (((*(int *)(param_1 + *(char *)(param_1 + 0x38) * 4 + 0xdc) < 0x2800) &&
          (*(short *)(param_1 + 0xc0) == *(short *)(iVar5 + 0xc0))) &&
         (2 < *(byte *)(param_1 + 0x3e))) {
        *(undefined1 *)(param_1 + 0x39) = 0;
        *(undefined1 *)(param_1 + 0x3e) = 0;
        FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
        FUN_02176d14();
      }
      else {
        if (*(char *)(param_1 + 0x3e) != -1) {
          *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
        }
        if ((*(uint *)(iVar5 + 0xd4) & 2) == 0) {
          iVar12 = FUN_02083acc((int)*(char *)(iVar5 + 0xc4));
          if (iVar12 == 0) {
            *(undefined1 *)(param_1 + 0x39) = 0;
            *(undefined1 *)(param_1 + 0x3e) = 0;
          }
          else {
            local_34[2] = *puVar10;
            local_34[3] = *(undefined4 *)(iVar5 + 0xb4);
            uVar9 = FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
            FUN_02176d64(uVar9,local_34 + 2,(int)*(short *)(iVar5 + 0xc0));
          }
        }
        else {
          uVar9 = FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
          FUN_02176d64(uVar9,puVar10,0xffffffff);
        }
      }
    }
  }
  return;
}

