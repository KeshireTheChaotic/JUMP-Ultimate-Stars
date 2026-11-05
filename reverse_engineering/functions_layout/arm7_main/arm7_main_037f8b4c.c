
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f8b4c(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  int *piVar9;
  undefined *in_r12;
  
  iVar1 = _DAT_0380fff4;
  piVar9 = (int *)(_DAT_0380fff4 + 0x424);
  uVar5 = 0;
  uVar8 = 0;
  if (*(short *)(_DAT_0380fff4 + 0x428) != 0) {
    return;
  }
  *piVar9 = *(int *)(_DAT_0380fff4 + 0x200);
  iVar3 = *piVar9;
  if (iVar3 == -1) {
    return;
  }
  iVar6 = iVar3 + (uint)*(ushort *)(iVar3 + 0xe) * 2;
  if (*(short *)(_DAT_0380fff4 + 0x33e) == 0) {
    uVar7 = (uint)*(ushort *)(iVar3 + 0xc);
    if (uVar7 == *(ushort *)(iVar6 + 0x10)) {
      uVar4 = uVar7 & 0xff00;
      if (uVar4 < 0x101) {
        if (uVar4 < 0x100) {
          if ((*(ushort *)(iVar3 + 0xc) & 0xff00) != 0) goto LAB_037f8d4c;
          uVar8 = 1;
          in_r12 = &DAT_027f8070;
          uVar7 = uVar7 & 0xff;
          uVar4 = 0xb;
          if ((*(ushort *)(iVar1 + 0x428) & 1) == 0) {
            uVar5 = (ushort)(*(ushort *)(_DAT_0380fff4 + 0x34c) < 0x20);
          }
          else {
            uVar5 = 2;
          }
        }
        else {
          uVar8 = 2;
          in_r12 = &DAT_027f7fe8;
          uVar7 = uVar7 & 0xff;
          uVar4 = 5;
          uVar5 = (ushort)(*(short *)(_DAT_0380fff4 + 0x34c) != 0x40);
        }
      }
      else if (uVar4 < 0x201) {
        if (uVar4 == 0x200) {
          uVar7 = uVar7 & 0xff;
          if (uVar7 < 0x40) {
            uVar5 = (ushort)(*(ushort *)(_DAT_0380fff4 + 0x34c) < 0x10);
            uVar8 = 4;
            in_r12 = &DAT_027f81d8;
            uVar4 = 0x17;
          }
          else if (uVar7 < 0x80) {
            uVar5 = (ushort)(*(short *)(_DAT_0380fff4 + 0x34c) != 0x40);
            uVar8 = 8;
            in_r12 = &DAT_027f8040;
            uVar7 = uVar7 - 0x40 & 0xffff;
            uVar4 = 6;
          }
          else if (uVar7 < 0xc0) {
            uVar5 = (ushort)(*(ushort *)(_DAT_0380fff4 + 0x34c) < 0x10);
            uVar8 = 0x10;
            in_r12 = &DAT_027f8120;
            uVar7 = uVar7 - 0x80 & 0xffff;
            uVar4 = 0x17;
          }
          else {
            uVar5 = (ushort)(*(ushort *)(_DAT_0380fff4 + 0x34c) < 0x10);
            uVar8 = 0x20;
            in_r12 = &DAT_027f8010;
            uVar7 = uVar7 - 0xc0 & 0xffff;
            uVar4 = 6;
          }
        }
        else {
LAB_037f8d4c:
          uVar7 = 1;
          uVar4 = 0;
          uVar8 = 0;
        }
      }
      else {
        if (uVar4 != 0x300) goto LAB_037f8d4c;
        uVar8 = 0x40;
        in_r12 = &DAT_027f80c8;
        uVar7 = uVar7 & 0xff;
        uVar4 = 0xb;
      }
      if (uVar4 < uVar7) {
        uVar5 = 3;
      }
      else if ((*(ushort *)(iVar3 + 0xe) < *(ushort *)(in_r12 + uVar7 * 8)) ||
              (*(ushort *)(iVar6 + 0x12) < *(ushort *)(in_r12 + uVar7 * 8 + 2))) {
        uVar5 = 4;
      }
      if (uVar5 == 0) {
        *(ushort *)(iVar1 + 0x428) = *(ushort *)(iVar1 + 0x428) | uVar8;
        uVar2 = (**(code **)(in_r12 + uVar7 * 8 + 4))(iVar3,(ushort *)(iVar6 + 0x10));
        *(undefined2 *)(iVar6 + 0x14) = uVar2;
        if (*(short *)(iVar6 + 0x14) == 0x80) {
          return;
        }
        if (*(short *)(iVar6 + 0x14) == 0x81) {
          *(ushort *)(iVar1 + 0x428) = *(ushort *)(iVar1 + 0x428) & ~uVar8;
          goto LAB_037f8e10;
        }
      }
      else {
        *(undefined2 *)(iVar6 + 0x12) = 1;
        *(ushort *)(iVar6 + 0x14) = uVar5;
      }
    }
    else {
      *(undefined2 *)(iVar6 + 0x14) = 0xd;
    }
  }
  else {
    *(undefined2 *)(iVar6 + 0x12) = 1;
    *(undefined2 *)(iVar6 + 0x14) = 6;
  }
  *(ushort *)(iVar1 + 0x428) = *(ushort *)(iVar1 + 0x428) & ~uVar8;
  FUN_037f8e64(_DAT_0380fff4 + 0x200,*piVar9);
LAB_037f8e10:
  if (*(short *)(_DAT_0380fff4 + 0x208) != 0) {
    FUN_037f85f8(2,0xb);
  }
  return;
}

