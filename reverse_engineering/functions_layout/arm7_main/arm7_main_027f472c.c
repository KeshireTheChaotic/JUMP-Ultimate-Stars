
/* WARNING: Removing unreachable block (ram,0x027f4c04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f472c(int param_1)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  longlong lVar11;
  undefined2 uStack_66;
  undefined4 local_58;
  uint local_54;
  int local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  short local_48;
  ushort local_46;
  ushort local_44;
  undefined2 local_3e;
  undefined2 local_3a;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  
                    /* JUS-TAG hw={"WIRELESS":10}
                       io=["04808038","048080f0","048080f2","048080f4","048080f6","048080f8","048080fa","048080fc","048080fe","0480810c"]
                        */
  iVar3 = _DAT_0380fff4;
  psVar10 = (short *)(_DAT_0380fff4 + 0x404);
  *(int *)(_DAT_0380fff4 + 0x570) = *(int *)(_DAT_0380fff4 + 0x570) + 1;
  uVar7 = FUN_027ec78c(param_1 + 0x1e);
  *(short *)(param_1 + 2) = (short)uVar7;
  iVar8 = CONCAT22(_DAT_048080f6,_DAT_048080f4);
  if (uVar7 == 0xff) goto LAB_027f4da0;
  FUN_027ec548(uVar7 & 0xffff,*(undefined2 *)(param_1 + 0x12));
  uVar1 = *(ushort *)(param_1 + 6);
  iVar8 = CONCAT22(_DAT_048080f6,_DAT_048080f4);
  if (uVar1 < 0xd) goto LAB_027f4da0;
  MIi_CpuClear32(0,&local_50,0x2c);
  local_50 = param_1 + 0x38;
  local_48 = uVar1 - 0xc;
  local_46 = 2;
  if (*(short *)(iVar3 + 0x362) == 0) {
    local_46 = 3;
  }
  local_44 = 0x38;
  local_4c = *(undefined2 *)(param_1 + 8);
  local_4a = *(undefined2 *)(param_1 + 0x36);
  FUN_027f3248(&local_50);
  if ((local_30 != 0) && ((*(ushort *)(param_1 + 0x16) & 0x8000) != 0)) {
    sVar4 = FUN_027e93b0(local_30 + 6);
    sVar5 = FUN_027e93b0(local_30 + 7);
    _DAT_0480810c = sVar4 + sVar5 * 0x100;
  }
  sVar4 = *psVar10;
  if ((sVar4 == 0x13) && (*(short *)(*(int *)(iVar3 + 0x41c) + 0x38) == 1)) {
    _DAT_048080f4 = CONCAT22(_DAT_048080f6,_DAT_048080f4);
    if ((local_46 & 9) == 9) {
      FUN_027f3be0(param_1,&local_50);
    }
  }
  else if ((local_46 & 8) != 0) {
    if (sVar4 == 0x21) {
      FUN_027e9528();
      if ((local_46 & 0x30) == 0x30) {
        if (*(ushort *)(param_1 + 0x34) < 0x3e9) {
          *(undefined2 *)(iVar3 + 0x408) = 0;
          if (((local_44 & 2) != 0) && ((local_46 & 2) == 0)) {
            FUN_027ea66c(local_3e);
          }
          FUN_027ec450(uVar7,local_3a);
          uVar9 = local_28;
          if (*(short *)(iVar3 + 0x350) == 2) {
            if (local_28 == 0) {
              FUN_027eaff8(0xffff,1);
              _DAT_0380fff0 = 0;
            }
            else {
              sVar4 = FUN_027e93b0(local_28 + 6);
              sVar5 = FUN_027e93b0(uVar9 + 7);
              FUN_027eaff8(sVar4 + sVar5 * 0x100,1);
              sVar4 = FUN_027e93b0(local_28 + 8);
              sVar5 = FUN_027e93b0(local_28 + 9);
              _DAT_0380fff0 = sVar4 + sVar5 * 0x100;
            }
          }
          FUN_027e93b0(local_2c + 3);
          FUN_027eaa8c();
          uVar6 = FUN_027e93b0(local_2c + 2);
          *(undefined2 *)(iVar3 + 0x3ba) = uVar6;
          FUN_027eaad8(*(undefined2 *)(param_1 + 0x34));
          *(undefined2 *)(iVar3 + 0x356) = 1;
          *(undefined2 *)(iVar3 + 0x35e) = 1;
          if (*(short *)(iVar3 + 0x350) == 2) {
            _DAT_04808048 = 3;
          }
          _DAT_04808038 = _DAT_04808038 | 1;
        }
        else {
          *(undefined2 *)(iVar3 + 0x408) = 0xc;
          *(undefined2 *)(iVar3 + 0x40a) = 1;
        }
      }
      else {
        *(undefined2 *)(iVar3 + 0x408) = 0xc;
        *(undefined2 *)(iVar3 + 0x40a) = 10;
      }
      FUN_027ea0c8(*(int *)(iVar3 + 0x420) + 8,param_1 + 0x1e);
      *psVar10 = 0x25;
      FUN_037f85f8(2,1);
    }
    uVar9 = local_28;
    if (*(short *)(iVar3 + 0x350) == 2) {
      if (local_28 != 0) {
        sVar4 = FUN_027e93b0(local_28 + 6);
        sVar5 = FUN_027e93b0(uVar9 + 7);
        FUN_027eaff8(sVar4 + sVar5 * 0x100,0);
        sVar4 = FUN_027e93b0(local_28 + 8);
        sVar5 = FUN_027e93b0(local_28 + 9);
        _DAT_0380fff0 = sVar4 + sVar5 * 0x100;
        sVar4 = FUN_027e93b0(local_28 + 1);
        *(short *)(iVar3 + 0x3e4) = sVar4 + -8;
        uVar9 = (uint)*(ushort *)(iVar3 + 0x3e4);
        if (uVar9 != 0) {
          if ((local_28 & 1) == 0) {
            MIi_CpuCopy16(local_28 + 10,*(undefined4 *)(iVar3 + 0x3e0),uVar9 + 1);
            *(undefined2 *)(iVar3 + 0x3e6) = 0;
          }
          else {
            MIi_CpuCopy16(local_28 + 9,*(undefined4 *)(iVar3 + 0x3e0),uVar9 + 2);
            *(undefined2 *)(iVar3 + 0x3e6) = 1;
          }
        }
      }
LAB_027f4ac4:
      *(undefined2 *)(iVar3 + 0x3c4) = 0;
      FUN_027ec3fc(uVar7);
      uVar1 = *(ushort *)(iVar3 + 0x3b2);
      uVar7 = (uint)uVar1 * 0x400;
      lVar11 = FUN_038076b8(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),uVar7,0)
      ;
      lVar2 = (ulonglong)uVar1 * 0x400 * (lVar11 + 1U & 0xffffffff);
      _DAT_048080f4 = (int)(lVar11 + 1U >> 0x20) * uVar7 + (int)((ulonglong)lVar2 >> 0x20);
      uStack_66 = (undefined2)((ulonglong)lVar2 >> 0x10);
      _DAT_048080f2 = uStack_66;
      _DAT_048080f0 = (ushort)lVar2 | 1;
      if ((*(short *)(iVar3 + 0x350) == 2) && (*(short *)(iVar3 + 0x35e) != 0)) {
        uVar9 = (uint)lVar2 + (uint)uVar1 * -0x400;
        iVar8 = _DAT_048080f4 - (uint)((uint)lVar2 < uVar7);
        OS_DisableInterrupts();
        local_58 = CONCAT22(_DAT_048080fa,_DAT_048080f8);
        local_54 = (uint)_DAT_048080fc;
        OS_RestoreInterrupts();
        uVar7 = local_58 - uVar9 >> 10;
        if ((uVar7 | (local_54 - (iVar8 + (uint)(local_58 < uVar9))) * 0x400000) <
            (uint)*(ushort *)(iVar3 + 0x33c)) {
          _DAT_04808134 = *(ushort *)(iVar3 + 0x33c) - (short)uVar7;
        }
        else {
          _DAT_04808134 = 0;
        }
      }
      if (((*(short *)(iVar3 + 0x34c) == 0x40) && (local_2c != 0)) &&
         (*(short *)(iVar3 + 0x352) == 1)) {
        uVar7 = FUN_027e93b0(local_2c + 2);
        if (*(ushort *)(iVar3 + 0x3ba) != uVar7) {
          *(short *)(iVar3 + 0x3ba) = (short)uVar7;
        }
        *(undefined2 *)(iVar3 + 0x3d2) = 0;
        if (uVar7 == 0) {
          uVar7 = FUN_027e93b0(local_2c + 4);
          if ((uVar7 & 1) != 0) {
            *(ushort *)(iVar3 + 0x3d2) = *(ushort *)(iVar3 + 0x3d2) | 1;
          }
        }
        uVar7 = FUN_027e93b0(local_2c + 4);
        uVar7 = uVar7 & 0xfe;
        iVar8 = FUN_027e93b0(local_2c + 1);
        uVar9 = (uint)*(ushort *)(iVar3 + 0x3ae);
        if ((uVar7 * 8 <= uVar9) && (uVar9 <= (uVar7 + iVar8 + -3) * 8)) {
          uVar9 = uVar9 + uVar7 * -8;
          uVar7 = FUN_027e93b0(local_2c + 5 + (uVar9 >> 3));
          if ((1 << (uVar9 & 7) & uVar7) != 0) {
            *(ushort *)(iVar3 + 0x3d2) = *(ushort *)(iVar3 + 0x3d2) | 2;
            FUN_027f149c();
          }
        }
        if (((*(short *)(iVar3 + 0x19c) == 0) && (*(short *)(iVar3 + 0x1a8) == 0)) &&
           (*(short *)(iVar3 + 0x3d2) == 0)) {
          FUN_027ea4f0(1);
        }
      }
    }
    else if (*(short *)(iVar3 + 0x350) == 3) goto LAB_027f4ac4;
    if ((*(ushort *)(iVar3 + 0x33a) & 0x7f) >> 6 != 0) {
      FUN_027eca34(param_1);
    }
  }
  iVar8 = _DAT_048080f4;
  if (local_34 != 0) {
    FUN_027f55dc(local_3e,param_1);
    iVar8 = _DAT_048080f4;
  }
LAB_027f4da0:
  _DAT_048080f6 = (undefined2)((uint)iVar8 >> 0x10);
  _DAT_048080f4 = (undefined2)iVar8;
  return;
}

