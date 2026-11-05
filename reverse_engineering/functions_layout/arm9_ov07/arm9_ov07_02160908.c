
bool FUN_02160908(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  bool bVar10;
  ushort uStack_30;
  ushort uStack_2e;
  ushort uStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  
  bVar10 = false;
  iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  uVar8 = 0;
  uVar9 = 0;
  if (*(ushort *)(param_2 + 1) < 6) {
    return false;
  }
  FUN_02051890(*param_2,&uStack_30,6);
  if ((uStack_30 & 1) == 0) {
    *(uint *)(iVar7 + 0x18) = (uStack_30 & 0xff) >> 3;
    uVar6 = (uint)uStack_2e;
    uVar5 = (uint)uStack_2c;
    uVar9 = uStack_30 >> 8;
    uVar8 = (uStack_30 & 3) >> 1;
    uVar3 = (uStack_30 & 7) >> 2;
  }
  else {
    FUN_02051890(*param_2,&uStack_2a,4);
    uVar6 = (uint)(uStack_2a >> 1);
    uVar5 = (uint)(uStack_28 >> 1);
    uVar3 = uStack_28 & 1;
    bVar1 = false;
    if ((uVar6 == 0x7fff) && (uVar5 == 0x7fff)) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = 4;
    }
    else {
      uVar2 = 3;
    }
    *(undefined4 *)(iVar7 + 0x18) = uVar2;
  }
  if (uVar3 != *(uint *)(iVar7 + 0x14)) {
    bVar10 = *(int *)(iVar7 + 0x10) == 4;
    goto switchD_02160a18_default;
  }
  switch(*(undefined4 *)(iVar7 + 0x18)) {
  case 0:
    break;
  case 1:
    *(undefined4 *)(iVar7 + 0x10) = 1;
    if (uVar8 != 0) {
      *(undefined4 *)(iVar7 + 0xc) = 0;
    }
    break;
  case 2:
    if (*(int *)(iVar7 + 0x10) != 2) break;
    *(uint *)(param_1 + 8) = uVar6;
    *(ushort *)(param_1 + 0x1c) = uVar9;
    *(uint *)(param_1 + 0x14) = uVar5;
    if ((*(uint *)(param_1 + 8) < *(uint *)(param_1 + 4)) ||
       (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x14))) {
      *(undefined4 *)(iVar7 + 0x10) = 1;
    }
    else if (uVar8 == 0) break;
    goto LAB_02160a80;
  case 3:
LAB_02160a80:
    if (*(int *)(iVar7 + 0x10) == 2) {
      *(undefined4 *)(iVar7 + 0x10) = 3;
      if ((uint)*(ushort *)(param_2 + 1) == *(uint *)(iVar7 + 8)) {
        *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar7 + 4);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar7 + 8);
      }
      else {
        *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar7 + 4);
      }
      *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + -4;
      *(int *)(iVar7 + 0x20) = *(int *)(iVar7 + 0x20) + -4;
      *(undefined4 *)(iVar7 + 0x24) = 0;
      *(undefined4 *)(iVar7 + 0x28) = 0;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      uVar2 = FUN_0200d338(*(int *)(param_1 + 0x14) + *(int *)(iVar7 + 0x20) + -1);
      *(undefined4 *)(iVar7 + 0x30) = uVar2;
      MIi_CpuClear32(0,iVar7 + 0x34,0x1004);
    }
    if ((*(int *)(iVar7 + 0x18) == 3) && (*(int *)(iVar7 + 0x10) == 3)) {
      *(uint *)(iVar7 + 0x28) = uVar6;
      if (uVar5 != 0x7fff) {
        uVar8 = uVar5 >> 5;
        if ((1 << (uVar5 & 0x1f) & *(uint *)(iVar7 + uVar8 * 4 + 0x34)) == 0) {
          uVar4 = *(uint *)(iVar7 + 0x20);
          uVar3 = *(int *)(param_1 + 0x14) - uVar4 * uVar5;
          uVar6 = uVar4;
          if (uVar3 < uVar4) {
            uVar6 = uVar3;
          }
          FUN_02051890(*param_2 + 4,*(int *)(param_1 + 0x10) + uVar4 * uVar5,uVar6);
          *(uint *)(iVar7 + 0x34 + uVar8 * 4) =
               *(uint *)(iVar7 + 0x34 + uVar8 * 4) | 1 << (uVar5 & 0x1f);
          *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
        }
      }
      if (*(uint *)(iVar7 + 0x2c) < *(uint *)(iVar7 + 0x30)) {
        uVar8 = *(uint *)(iVar7 + 0x24) >> 5;
        uVar6 = *(uint *)(iVar7 + 0x24) & 0x1f;
        do {
          uVar6 = uVar6 + 1;
          if (0x1f < uVar6) {
            do {
              uVar8 = uVar8 + 1;
            } while (*(int *)(iVar7 + uVar8 * 4 + 0x34) == -1);
            uVar6 = *(uint *)(iVar7 + uVar8 * 4 + 0x34);
            uVar6 = 0x20 - LZCOUNT(uVar6 & ~uVar6 - 1);
          }
          if (*(uint *)(iVar7 + 0x30) <= uVar6 + uVar8 * 0x20) {
            uVar8 = 0;
            uVar6 = 0;
          }
        } while ((1 << (uVar6 & 0xff) & *(uint *)(iVar7 + uVar8 * 4 + 0x34)) != 0);
        *(uint *)(iVar7 + 0x24) = uVar6 + uVar8 * 0x20;
      }
      else {
        *(undefined4 *)(iVar7 + 0x24) = 0x7fff;
        if (*(int *)(iVar7 + 0x28) == 0x7fff) {
          *(undefined4 *)(iVar7 + 0x10) = 4;
        }
      }
    }
    break;
  case 4:
    if (((*(int *)(iVar7 + 0x10) == 3) &&
        (*(uint *)(iVar7 + 0x28) = uVar6, *(int *)(iVar7 + 0x28) == 0x7fff)) &&
       (*(int *)(iVar7 + 0x24) == 0x7fff)) {
      *(undefined4 *)(iVar7 + 0x10) = 4;
    }
    bVar10 = *(int *)(iVar7 + 0x10) == 4;
  }
switchD_02160a18_default:
  if (bVar10 != false) {
    *(uint *)(iVar7 + 0x14) = (uint)(*(int *)(iVar7 + 0x14) == 0);
    *(undefined4 *)(iVar7 + 0x10) = 1;
  }
  return bVar10;
}

