
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f4ed0(int param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  
  iVar6 = _DAT_0380fff4;
  iVar3 = *(int *)(_DAT_0380fff4 + 0x4bc);
  if (((*(short *)(_DAT_0380fff4 + 0x468) != 0) &&
      (iVar4 = FUN_027e9cfc(param_1 + 0x18,_DAT_0380fff4 + 0x3a8), iVar4 != 0)) &&
     ((int)(*(ushort *)(param_1 + 0x10) - 0x18) <= (int)(*(ushort *)(iVar3 + 0x16) - 8))) {
    uVar5 = FUN_027ec8d4(param_1 + 0x1e);
    if ((uVar5 == 0xff) || ((uVar5 != 0 && (iVar4 = FUN_027ec2bc(), iVar4 != 0x40)))) {
      iVar6 = FUN_027f0730(param_1 + 0x1e,0xc0);
      if ((iVar6 == 0) && (iVar6 = FUN_027f084c(param_1 + 0x1e,7), iVar6 != 0)) {
        FUN_027f15ac();
      }
    }
    else if (uVar5 != 0) {
      iVar4 = FUN_027ec2bc(uVar5);
      if (iVar4 == 0x40) {
        FUN_027ec4e4(uVar5 & 0xffff,(*(ushort *)(param_1 + 0x14) & 0x1fff) >> 0xc);
        FUN_027ec3fc(uVar5);
        uVar5 = FUN_027ec1e4(uVar5);
        uVar1 = 1 << (uVar5 & 0xff);
        uVar5 = uVar1 & 0xffff;
        if (((uVar5 & *(ushort *)(iVar6 + 0x4c6)) == 0) &&
           ((uVar5 & *(ushort *)(iVar6 + 0x4c4)) != 0)) {
          uVar2 = (ushort)uVar1;
          *(ushort *)(iVar6 + 0x4c6) = *(ushort *)(iVar6 + 0x4c6) | uVar2;
          *(ushort *)(iVar3 + 0x10) = *(ushort *)(iVar3 + 0x10) & ~uVar2;
          puVar7 = (ushort *)(iVar3 + 0x1a);
          while (uVar5 = uVar5 >> 1, uVar5 != 1) {
            if ((uVar5 & *(ushort *)(iVar6 + 0x4c4)) != 0) {
              puVar7 = (ushort *)((int)puVar7 + (uint)*(ushort *)(iVar3 + 0x16));
            }
          }
          *puVar7 = *(short *)(param_1 + 0x10) - 0x18;
          FUN_027e93d0((int)puVar7 + 3,*(ushort *)(param_1 + 0x12) & 0xff);
          FUN_027e93d0(puVar7 + 1,*(ushort *)(param_1 + 0xe) & 0xff);
          if (*puVar7 != 0) {
            MIi_CpuCopy16(param_1 + 0x2c,puVar7 + 4,*puVar7 + 1);
          }
        }
      }
      else {
        iVar6 = FUN_027f0730(param_1 + 0x1e,0xc0);
        if ((iVar6 == 0) && (iVar6 = FUN_027f084c(param_1 + 0x1e,7), iVar6 != 0)) {
          FUN_027f15ac();
        }
      }
    }
  }
  return;
}

