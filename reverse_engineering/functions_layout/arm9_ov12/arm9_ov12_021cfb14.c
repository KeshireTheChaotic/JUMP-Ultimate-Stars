
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021cfb14(short *param_1,short *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_4c;
  uint local_48;
  int local_44;
  short *local_14;
  
  local_48 = 0;
  local_44 = 0;
  local_4c = 0;
  param_3 = param_3 >> 1;
  if (param_3 != 0) {
    local_14 = param_1;
    do {
      (&DAT_021d6bd4)[DAT_021d6754] = *param_2;
      DAT_021d677c = (int)(short)(&DAT_021d6bd4)[DAT_021d6758];
      iVar6 = DAT_021d6778 * DAT_021d6790;
      iVar1 = DAT_021d6774 * DAT_021d678c;
      DAT_021d6790 = DAT_021d678c;
      iVar2 = DAT_021d6770 * DAT_021d6788;
      DAT_021d678c = DAT_021d6788;
      iVar3 = DAT_021d676c * DAT_021d6784;
      DAT_021d6788 = DAT_021d6784;
      DAT_021d6784 = DAT_021d6780;
      iVar1 = iVar6 + iVar1 + iVar2 + iVar3 + DAT_021d6768 * DAT_021d6780 +
              DAT_021d6764 * DAT_021d677c;
      if (iVar1 < 0x3fff8001) {
        if (iVar1 < -0x40000000) {
          iVar1 = -0x40000000;
        }
      }
      else {
        iVar1 = 0x3fff8000;
      }
      DAT_021d6754 = DAT_021d6754 + 1 & 0x7ff;
      DAT_021d6758 = DAT_021d6758 + 1 & 0x7ff;
      DAT_021d6780 = DAT_021d677c;
      *param_2 = (short)(iVar1 >> 0xf);
      uVar5 = (int)*param_2 * (int)*param_2;
      bVar7 = CARRY4(local_48,uVar5);
      local_48 = local_48 + uVar5;
      local_44 = local_44 + ((int)uVar5 >> 0x1f) + (uint)bVar7;
      *param_2 = *local_14;
      param_2 = param_2 + 1;
      local_14 = local_14 + 1;
      local_4c = local_4c + 1;
    } while (local_4c < param_3);
  }
  _DAT_04000280 = 1;
  _DAT_04000290 = local_48;
  _DAT_04000294 = local_44;
  _DAT_04000298 = param_3;
  _DAT_0400029c = 0;
  _DAT_040002b0 = 0;
  _DAT_040002b8 = _DAT_040002a0;
  if (_DAT_040002b4 * 3 < param_4 * 2) {
    DAT_021d6750 = 0;
    return;
  }
  if (param_4 < _DAT_040002b4) {
    DAT_021d6750 = 4;
  }
  if (DAT_021d6750 < 4) {
    DAT_021d6750 = DAT_021d6750 + 1;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    uVar4 = (uint)DAT_021d6750;
    do {
      *param_1 = (short)((int)*param_1 >> (uVar4 & 0xff));
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  return;
}

