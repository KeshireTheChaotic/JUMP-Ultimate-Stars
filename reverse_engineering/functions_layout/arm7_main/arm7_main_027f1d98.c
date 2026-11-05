
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1d98(short *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  
  iVar1 = _DAT_0380fff4;
  psVar9 = (short *)(_DAT_0380fff4 + 0x404);
  iVar8 = _DAT_0380fff4 + 0x1a0;
  uVar7 = (uint)(ushort)param_1[1];
  if ((param_1[4] & 2U) == 0) {
    *(int *)(_DAT_0380fff4 + 0x53c) = *(int *)(_DAT_0380fff4 + 0x53c) + 1;
    if ((param_1[0xc] & 1U) == 0) {
      *(int *)(iVar1 + 0x54c) = *(int *)(iVar1 + 0x54c) + 1;
    }
    else {
      *(int *)(iVar1 + 0x550) = *(int *)(iVar1 + 0x550) + 1;
    }
    iVar2 = FUN_027ec27c(uVar7);
    if ((iVar2 != 0) && ((param_1[10] & 0x2000U) == 0)) {
      FUN_027ec4a4(uVar7);
    }
  }
  else {
    *(int *)(_DAT_0380fff4 + 0x540) = *(int *)(_DAT_0380fff4 + 0x540) + 1;
  }
  if (((ushort)param_1[10] & 0x7fff) >> 0xe != 0) {
    *(int *)(iVar1 + 0x554) = *(int *)(iVar1 + 0x554) + 1;
  }
  *(uint *)(iVar1 + 0x544) = *(int *)(iVar1 + 0x544) + ((ushort)param_1[6] & 0xff);
  uVar6 = param_1[10] & 0xfc;
  if (uVar6 < 0xa1) {
    if (uVar6 < 0xa0) {
      if (uVar6 < 0x11) {
        if (uVar6 != 0x10) goto LAB_027f222c;
      }
      else if (uVar6 != 0x30) goto LAB_027f222c;
      if (uVar7 != 0) {
        if ((param_1[4] & 2U) == 0) {
          if (param_1[0x17] == 0) {
            FUN_027ec560(uVar7,0x40);
            if (uVar6 == 0x10) {
              FUN_027ecdb0(param_1 + 0xc,param_1[0x18],(int)param_1 + (ushort)param_1[9] + 0x14);
            }
            else {
              FUN_027eccc0(param_1 + 0xc,param_1[0x18],(int)param_1 + (ushort)param_1[9] + 0x14);
            }
          }
        }
        else {
          FUN_027ec2d8(uVar7);
          puVar3 = (undefined2 *)FUN_027f084c(param_1 + 0xc,1);
          if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 2;
            if (param_2 == 0) {
              FUN_027f1538();
            }
            else {
              FUN_027f15ac();
            }
          }
        }
      }
    }
    else {
      if (*(short *)(iVar1 + 0x350) == 1) {
        if (uVar7 == 0) {
          if ((param_1[0xc] & 1U) != 0) {
            for (uVar7 = 1; uVar7 < *(ushort *)(_DAT_0380fff4 + 0x322); uVar7 = uVar7 + 1) {
              uVar4 = FUN_027ec2bc(uVar7);
              if (0x30 < uVar4) {
                FUN_027ec560(uVar7 & 0xffff,0x30);
              }
            }
          }
        }
        else {
          uVar4 = FUN_027ec2bc(uVar7);
          if (0x30 < uVar4) {
            FUN_027ec560(uVar7,0x30);
          }
        }
      }
      else if (0x30 < *(ushort *)(iVar1 + 0x34c)) {
        FUN_037f9468(0x30);
        FUN_027ea144();
      }
      if (*psVar9 == 0x71) {
        if ((param_1[4] & 2U) == 0) {
          *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0;
        }
        else {
          *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0xc;
        }
        *psVar9 = 0;
        FUN_027ecfa4();
      }
    }
  }
  else if (uVar6 < 0xb1) {
    if (((uVar6 == 0xb0) && (uVar7 != 0)) && ((param_1[4] & 2U) == 0)) {
      if (((param_1[0x16] == 0) && (param_1[0x17] == 2)) && (param_1[0x18] == 0)) {
        FUN_027ec560(uVar7,0x30);
        FUN_027ecf28(param_1 + 0xc,param_1[0x16]);
      }
      else if (((param_1[0x16] == 1) && (param_1[0x17] == 4)) && (param_1[0x18] == 0)) {
        FUN_027ec560(uVar7,0x30);
        FUN_027ecf28(param_1 + 0xc,param_1[0x16]);
      }
    }
  }
  else if (uVar6 == 0xc0) {
    if (*(short *)(iVar1 + 0x350) == 1) {
      if (uVar7 == 0) {
        if ((param_1[0xc] & 1U) != 0) {
          for (uVar4 = 1; uVar4 < *(ushort *)(_DAT_0380fff4 + 0x322); uVar4 = uVar4 + 1) {
            uVar5 = FUN_027ec2bc(uVar4);
            if (0x20 < uVar5) {
              FUN_027ec560(uVar4 & 0xffff,0x20);
            }
          }
        }
      }
      else {
        uVar4 = FUN_027ec2bc(uVar7);
        if (0x20 < uVar4) {
          FUN_027ec560(uVar7,0x20);
        }
      }
    }
    else if (0x20 < *(ushort *)(iVar1 + 0x34c)) {
      FUN_037f9468(0x20);
      FUN_027ea144();
    }
    if (*psVar9 == 0x41) {
      if ((param_1[4] & 2U) == 0) {
        *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0;
      }
      else {
        *(undefined2 *)(*(int *)(iVar1 + 0x420) + 4) = 0xc;
      }
      *psVar9 = 0;
      FUN_027ecfa4();
    }
    if (*param_1 == 1) {
      if (uVar7 != 0) {
        *(ushort *)(_DAT_0380fff4 + 0x534) =
             *(ushort *)(_DAT_0380fff4 + 0x534) & ~(ushort)(1 << (uVar7 & 0xff));
        FUN_027ebe20(uVar7);
      }
      FUN_027eceac(param_1 + 0xc,1);
    }
    else if (*param_1 == 2) {
      FUN_027eceac(param_1 + 0xc,1);
    }
  }
LAB_027f222c:
  FUN_027ec62c(param_1);
  FUN_037f89b8(iVar8,param_1 + -8);
  *(undefined2 *)(_DAT_0380fff4 + 0x440) = 0;
  if ((param_2 != 0) && (*(short *)(iVar1 + 0x1a8) != 0)) {
    FUN_027f258c(1);
  }
  return;
}

