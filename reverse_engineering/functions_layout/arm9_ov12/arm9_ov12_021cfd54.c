
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021cfd54(short *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_14;
  
  DAT_021d6760 = *param_1 * 0xe9f + DAT_021d675c + DAT_021d6760 * 0xd3e >> 0xc;
  _DAT_04000290 = DAT_021d6760 * DAT_021d6760;
  _DAT_04000294 = (int)_DAT_04000290 >> 0x1f;
  DAT_021d675c = *param_1 * -0xe9f;
  uVar4 = 1;
  _DAT_04000298 = param_2 >> 1;
  local_14 = DAT_021d6760;
  if (1 < _DAT_04000298) {
    psVar1 = param_1;
    do {
      iVar3 = (int)psVar1[1];
      *psVar1 = (short)DAT_021d6760;
      DAT_021d6760 = iVar3 * 0xe9f + DAT_021d675c + DAT_021d6760 * 0xd3e >> 0xc;
      uVar2 = DAT_021d6760 * DAT_021d6760;
      bVar5 = CARRY4(_DAT_04000290,uVar2);
      _DAT_04000290 = _DAT_04000290 + uVar2;
      _DAT_04000294 = _DAT_04000294 + ((int)uVar2 >> 0x1f) + (uint)bVar5;
      DAT_021d675c = iVar3 * -0xe9f;
      uVar4 = uVar4 + 1;
      psVar1 = psVar1 + 1;
      local_14 = DAT_021d6760;
    } while (uVar4 < _DAT_04000298);
  }
  DAT_021d6760 = local_14;
  *(short *)((int)param_1 + ((param_2 & 0xfffffffe) - 2)) = (short)local_14;
  _DAT_04000280 = 1;
  _DAT_0400029c = 0;
  return _DAT_040002a0;
}

