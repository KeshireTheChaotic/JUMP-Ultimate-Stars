
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f36b0(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 unaff_r4;
  short *psVar7;
  short *psVar8;
  bool bVar9;
  
                    /* JUS-TAG hw={"WIRELESS":3} io=["04808032","048080b0","0480819c"] */
  iVar6 = _DAT_0380fff4;
  psVar8 = (short *)(_DAT_0380fff4 + 0x404);
  psVar7 = (short *)(param_1 + 0x2c);
  if (((((*(ushort *)(_DAT_0380fff4 + 0x690) & 8) != 0) &&
       (((_DAT_048080b0 & 1) == 0 || (*(short *)(_DAT_0380fff4 + 0x42c) == 0)))) &&
      (((_DAT_048080b0 & 4) == 0 || (*(short *)(_DAT_0380fff4 + 0x440) == 0)))) &&
     ((((_DAT_048080b0 & 8) == 0 || (*(short *)(_DAT_0380fff4 + 0x454) == 0)) &&
      ((_DAT_0480819c & 1) == 0)))) {
    _DAT_04808032 = 0x8000;
    *(undefined2 *)(_DAT_0380fff4 + 0x4de) = 0;
  }
  iVar3 = FUN_027f0730(param_1 + 0x1e,0xb0);
  if (iVar3 != 0) {
    return;
  }
  sVar2 = *(short *)(param_1 + 0x2e) + 1;
  sVar1 = *(short *)(param_1 + 2);
  bVar9 = sVar1 == 0;
  if (bVar9) {
    unaff_r4 = 0x13;
  }
  else {
    if (*(short *)(iVar6 + 0x350) == 1) {
      uVar4 = FUN_027ec2bc(sVar1);
      if (0x20 < uVar4) {
        FUN_027ec560(sVar1,0x20);
        FUN_027eceac(param_1 + 0x1e,1);
      }
      if (((*(ushort *)(param_1 + 8) & 0x400) != 0) && (iVar3 = FUN_027ec244(sVar1), iVar3 != 0)) {
        bVar9 = true;
        *psVar7 = 1;
        unaff_r4 = 0xf;
        sVar2 = 4;
        FUN_027ec420(sVar1,0);
        goto LAB_027f3b8c;
      }
    }
    if (*psVar7 == 0) {
      sVar1 = *(short *)(iVar6 + 0x350);
      if ((sVar1 == 1) && (bVar9 = *(short *)(_DAT_0380fff4 + 0x332) == 1, bVar9)) {
        unaff_r4 = 0xd;
      }
      else if (sVar1 == 1) {
        if (*(short *)(param_1 + 0x2e) == 1) {
          unaff_r4 = 0;
        }
        else {
          unaff_r4 = 0xe;
          sVar2 = 2;
        }
        bVar9 = true;
      }
      else if ((((sVar1 != 1) && (*(short *)(param_1 + 0x2e) == 2)) &&
               (*(short *)(*(int *)(iVar6 + 0x41c) + 0x16) == 0)) &&
              ((iVar3 = FUN_027e9cfc(*(int *)(iVar6 + 0x41c) + 0x10,param_1 + 0x1e), iVar3 != 0 &&
               (*psVar8 == 0x31)))) {
        FUN_027e9528();
        if (*(short *)(param_1 + 0x30) == 0) {
          FUN_037f9468(0x30);
          *(undefined2 *)(*(int *)(iVar6 + 0x420) + 4) = 0;
          *(undefined2 *)(*(int *)(iVar6 + 0x420) + 6) = 0;
        }
        else {
          *(undefined2 *)(*(int *)(iVar6 + 0x420) + 4) = 0xc;
          *(undefined2 *)(*(int *)(iVar6 + 0x420) + 6) = *(undefined2 *)(param_1 + 0x30);
        }
        *psVar8 = 0x35;
        FUN_037f85f8(2,2);
      }
    }
    else if (*psVar7 == 1) {
      if (*(short *)(iVar6 + 0x350) == 1) {
        FUN_027ec560(sVar1,0x20);
        if (*(short *)(param_1 + 0x2e) == 1) {
          iVar6 = FUN_027f08d0(param_1 + 0x1e,0x80);
          if (iVar6 != 0) {
            *(short *)(iVar6 + 0x2c) = *psVar7;
            *(short *)(iVar6 + 0x2e) = sVar2;
            *(undefined2 *)(iVar6 + 0x30) = 0;
            FUN_027f2e88(sVar1,iVar6);
            FUN_027f15ac(iVar6);
          }
        }
        else if (*(short *)(param_1 + 0x2e) == 3) {
          iVar6 = FUN_027ec2bc(sVar1);
          if ((iVar6 == 0x20) && (iVar6 = FUN_027ec244(sVar1), iVar6 != 0)) {
            iVar6 = FUN_027f2e00(param_1);
            if (iVar6 == 0) {
              unaff_r4 = 0xf;
              bVar9 = true;
              FUN_027ec420(sVar1,0);
            }
            else {
              FUN_027ec420(sVar1,0);
              unaff_r4 = 0;
              bVar9 = true;
            }
          }
          else {
            unaff_r4 = 1;
            bVar9 = true;
          }
        }
        else {
          FUN_027ec420(sVar1,0);
          unaff_r4 = 0xe;
          sVar2 = 2;
          bVar9 = true;
        }
      }
      else if ((*(short *)(*(int *)(iVar6 + 0x41c) + 0x16) == 1) &&
              (iVar3 = FUN_027e9cfc(*(int *)(iVar6 + 0x41c) + 0x10,param_1 + 0x1e), iVar3 != 0)) {
        if (*(short *)(param_1 + 0x2e) == 2) {
          if (*psVar8 == 0x31) {
            if (*(short *)(param_1 + 0x30) == 0) {
              *psVar8 = 0x33;
              uVar5 = FUN_027e93b0(param_1 + 0x33);
              iVar6 = FUN_027f08d0(param_1 + 0x1e,uVar5);
              if (iVar6 != 0) {
                *(ushort *)(iVar6 + 0x14) = *(ushort *)(iVar6 + 0x14) | 0x4000;
                MIi_CpuCopy16(param_1 + 0x2c,iVar6 + 0x2c,*(ushort *)(param_1 + 6) + 1);
                *(short *)(iVar6 + 0x2c) = *psVar7;
                *(undefined2 *)(iVar6 + 0x2e) = 3;
                *(undefined2 *)(iVar6 + 0x30) = 0;
                FUN_027f15ac(iVar6);
              }
            }
            else {
              FUN_027e9528();
              *psVar8 = 0x35;
              *(undefined2 *)(*(int *)(iVar6 + 0x420) + 4) = 0xc;
              *(undefined2 *)(*(int *)(iVar6 + 0x420) + 6) = *(undefined2 *)(param_1 + 0x30);
              FUN_037f85f8(2,2);
              FUN_037f9468(0x20);
            }
          }
        }
        else if ((*(short *)(param_1 + 0x2e) == 4) && (*psVar8 == 0x33)) {
          FUN_027e9528();
          if (*(short *)(param_1 + 0x30) == 0) {
            FUN_037f9468(0x30);
            *(undefined2 *)(*(int *)(iVar6 + 0x420) + 4) = 0;
            *(undefined2 *)(*(int *)(iVar6 + 0x420) + 6) = 0;
          }
          else {
            *(undefined2 *)(*(int *)(iVar6 + 0x420) + 4) = 0xc;
            *(undefined2 *)(*(int *)(iVar6 + 0x420) + 6) = *(undefined2 *)(param_1 + 0x30);
          }
          *psVar8 = 0x35;
          FUN_037f85f8(2,2);
        }
      }
    }
    else if (*(short *)(iVar6 + 0x350) == 1) {
      unaff_r4 = 0xd;
      bVar9 = true;
    }
  }
LAB_027f3b8c:
  if ((bVar9) && (iVar6 = FUN_027f08d0(param_1 + 0x1e,0), iVar6 != 0)) {
    *(short *)(iVar6 + 0x2c) = *psVar7;
    *(short *)(iVar6 + 0x2e) = sVar2;
    *(undefined2 *)(iVar6 + 0x30) = unaff_r4;
    FUN_027f15ac();
  }
  return;
}

