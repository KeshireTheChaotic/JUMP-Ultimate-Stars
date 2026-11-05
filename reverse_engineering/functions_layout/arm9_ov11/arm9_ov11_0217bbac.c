
void FUN_0217bbac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int extraout_r1;
  uint extraout_r1_00;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_50;
  byte local_4c [10];
  char local_42 [26];
  undefined4 uStack_28;
  
  bVar10 = false;
  uStack_28 = param_4;
  switch(*(undefined1 *)(param_1 + 0x3e)) {
  case 0:
    uVar5 = *(uint *)(*(int *)(param_1 + 0x20) + 0xc4);
    uVar9 = 1;
    iVar4 = 0;
    do {
      if (((uVar5 | 0x7f9980) & 1 << (uVar9 & 0xff)) == 0) {
        local_42[iVar4] = (char)uVar9;
        iVar4 = iVar4 + 1;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 0x18);
    if (iVar4 == 0) {
      bVar10 = true;
    }
    else {
      uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar3,iVar4);
      iVar4 = FUN_02174ebc(**(undefined4 **)(param_1 + 0x24),(int)local_42[extraout_r1],0);
      bVar10 = iVar4 == 0;
      if (!bVar10) {
        *(undefined2 *)(param_1 + 0x44) = 0;
        *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
        if (*(char *)(param_1 + 0x41) != '\0') {
          *(undefined1 *)(param_1 + 0x40) = 1;
        }
      }
    }
    break;
  case 1:
    if ((*(uint *)(param_1 + 0xd4) & 2) == 0) {
      cVar2 = *(char *)(*(int *)(param_1 + 0x20) + 0xf4);
    }
    else {
      cVar2 = *(char *)(*(int *)(param_1 + 0x20) + 0xf3);
    }
    if ((cVar2 == '\0') || (iVar4 = FUN_0217d068(param_1), iVar4 != 0)) {
      iVar4 = FUN_0217bfe0(param_1);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0x39) = 4;
        *(undefined1 *)(param_1 + 0x3e) = 0;
      }
      break;
    }
    FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
    uVar9 = 0;
    iVar4 = 0;
    do {
      uVar5 = FUN_0217b504(*(undefined4 *)(param_1 + 0x24),iVar4);
      if (((uVar5 & 1 << (uint)*(byte *)(param_1 + 0x38)) != 0) &&
         ((((uVar5 = FUN_0217b51c(*(undefined4 *)(param_1 + 0x24),iVar4),
            1 < ((int)((uVar5 - 9) * 0x1000000) >> 0x18 & 0xffU) ||
            ((*(uint *)(param_1 + 0xd4) & 2) == 0)) &&
           (uVar9 = uVar9 | 1 << (uVar5 & 0xff), 0xc < (int)uVar5)) &&
          (uVar5 != 0xd && uVar5 != 0xe)))) {
        iVar6 = FUN_02174f4c(**(undefined4 **)(param_1 + 0x24));
        uVar9 = uVar9 | 1 << ((int)((uVar5 + (iVar6 + -3) * -2) * 0x1000000) >> 0x18 & 0xffU);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    if (uVar9 == 0) {
      bVar10 = false;
    }
    else {
      FUN_02051890(&DAT_021813e4 + (uint)*(byte *)(param_1 + 0x41) * 10,local_4c);
      iVar4 = -1;
      uVar5 = 0;
      FUN_0200d338(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x38),100);
      iVar6 = 0;
      do {
        bVar10 = false;
        uVar7 = FUN_0217bfc8(*(undefined4 *)(param_1 + 0x24),iVar6);
        for (iVar8 = 0; iVar8 < 5; iVar8 = iVar8 + 1) {
          bVar1 = local_4c[iVar8 * 2];
          if (((-1 < (char)bVar1) && (('\f' < (char)bVar1 || ((uVar7 & 1 << (uint)bVar1) != 0)))) &&
             ((uVar9 & 1 << (uint)bVar1) != 0)) {
            bVar10 = true;
            local_50 = iVar8;
            break;
          }
        }
        if (bVar10) {
          if (**(int **)(param_1 + 0x24) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (uint)*(ushort *)(**(int **)(param_1 + 0x24) + iVar6 * 2 + 0xb4);
          }
          uVar5 = uVar5 + uVar7 & 0xffff;
          if ((extraout_r1_00 & 0xffff) < uVar5) {
            *(char *)(param_1 + 0x50) = (char)iVar6;
            iVar4 = local_50;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      if (iVar4 < 0) {
        bVar10 = false;
      }
      else {
        bVar1 = local_4c[iVar4 * 2];
        *(byte *)(param_1 + 0x3b) = bVar1;
        if ((char)bVar1 < '\r') {
LAB_0217bec0:
          bVar10 = true;
        }
        else if (*(char *)(*(int *)(param_1 + 0x24) + 0x36) == '\0') {
          bVar10 = false;
        }
        else {
          iVar4 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x1c);
          if (iVar4 != 0) {
            if (**(int **)(param_1 + 0x24) == 0) {
              cVar2 = '\0';
            }
            else {
              cVar2 = FUN_02174f4c();
            }
            *(char *)(param_1 + 0x3b) = *(char *)(param_1 + 0x3b) + (cVar2 + -3) * '\x02';
            goto LAB_0217bec0;
          }
          bVar10 = false;
        }
      }
    }
    bVar10 = !bVar10;
    if (!bVar10) {
      FUN_02174f24(**(undefined4 **)(param_1 + 0x24));
      *(undefined1 *)(param_1 + 0x3f) = 0;
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case 2:
    FUN_0217d8d0(param_1,(int)*(char *)(param_1 + 0x3b));
    *(char *)(param_1 + 0x41) = *(char *)(param_1 + 0x41) + '\x01';
    *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_1 + 0x3b);
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    break;
  case 3:
    if (*(byte *)(param_1 + 0x41) < *(byte *)(*(int *)(param_1 + 0x2c) + 0xe) &&
        *(byte *)(param_1 + 0x41) < 4) {
      *(undefined1 *)(param_1 + 0x3e) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x39) = 4;
      *(undefined1 *)(param_1 + 0x3e) = 0;
    }
  }
  *(ushort *)(param_1 + 0x44) =
       *(ushort *)(param_1 + 0x44) |
       (ushort)*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10) + 0x158);
  if ((bVar10) ||
     ((*(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0x1a8) + 0x10) + 0x40) & 0x100000) !=
      0)) {
    *(undefined1 *)(param_1 + 0x39) = 4;
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  return;
}

