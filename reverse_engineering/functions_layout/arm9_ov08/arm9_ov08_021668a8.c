
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021668a8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  
  uVar1 = (ushort)param_3;
  switch(param_2) {
  case 0:
    break;
  case 1:
    if (param_1 == 1) {
      _DAT_04001048 = _DAT_04001048 & 0xc0ff | (ushort)(param_3 << 8);
      if (param_4 != 0) {
        _DAT_04001048 = _DAT_04001048 | 0x2000;
      }
      return;
    }
    _DAT_04000048 = _DAT_04000048 & 0xc0ff | (ushort)(param_3 << 8);
    if (param_4 != 0) {
      _DAT_04000048 = _DAT_04000048 | 0x2000;
    }
    return;
  case 2:
    if (param_1 == 1) {
      _DAT_0400104a = _DAT_0400104a & 0xc0ff | (ushort)(param_3 << 8);
      if (param_4 != 0) {
        _DAT_0400104a = _DAT_0400104a | 0x2000;
      }
      return;
    }
    _DAT_0400004a = _DAT_0400004a & 0xc0ff | (ushort)(param_3 << 8);
    if (param_4 != 0) {
      _DAT_0400004a = _DAT_0400004a | 0x2000;
    }
    return;
  case 3:
    if (param_1 == 1) {
      _DAT_0400104a = _DAT_0400104a & 0xffc0 | uVar1;
      if (param_4 != 0) {
        _DAT_0400104a = _DAT_0400104a | 0x20;
      }
      return;
    }
    _DAT_0400004a = _DAT_0400004a & 0xffc0 | uVar1;
    if (param_4 != 0) {
      _DAT_0400004a = _DAT_0400004a | 0x20;
    }
  default:
    return;
  }
  if (param_1 == 1) {
    _DAT_04001048 = _DAT_04001048 & 0xffc0 | uVar1;
    if (param_4 != 0) {
      _DAT_04001048 = _DAT_04001048 | 0x20;
    }
    return;
  }
  _DAT_04000048 = _DAT_04000048 & 0xffc0 | uVar1;
  if (param_4 != 0) {
    _DAT_04000048 = _DAT_04000048 | 0x20;
  }
  return;
}

