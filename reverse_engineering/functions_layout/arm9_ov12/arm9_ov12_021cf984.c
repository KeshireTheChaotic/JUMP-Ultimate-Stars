
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021cf984(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  DAT_021d50e8 = param_2 >> 8;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (char)(param_2 >> 8);
  }
  if (DAT_021d50e4 != 0) {
    piVar2 = &DAT_021d6740;
    (&DAT_021d6740)[DAT_021d6738] = param_1;
    DAT_021d6738 = DAT_021d6738 + 1 & 3;
    uVar3 = 0;
    iVar4 = 0;
    do {
      uVar3 = uVar3 + *piVar2;
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    _DAT_040002b0 = 0;
    _DAT_040002b8 = uVar3 >> 2;
    if (DAT_021d6734 < _DAT_040002b4) {
      DAT_021d673c = 0;
    }
    else {
      DAT_021d673c = DAT_021d673c + 1;
      if (DAT_021d50ec < DAT_021d673c) {
        DAT_021d50e4 = 0;
        DAT_021d673c = 0;
        DAT_021d6738 = 0;
        return 3;
      }
    }
    return 2;
  }
  _DAT_040002b8 = 0;
  iVar4 = 0;
  piVar2 = &DAT_021d6740;
  do {
    _DAT_040002b8 = _DAT_040002b8 + *piVar2;
    piVar2 = piVar2 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  if ((param_2 == 0) || (param_2 < _DAT_040002b4 << 1)) {
    uVar1 = 0;
  }
  else {
    _DAT_040002b8 = 0;
    uVar3 = 0;
    piVar2 = &DAT_021d6740;
    do {
      _DAT_040002b8 = _DAT_040002b8 + *piVar2;
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    DAT_021d6734 = _DAT_040002b4 * 3 >> 1;
    DAT_021d6738 = 0;
    uVar1 = 1;
    DAT_021d50e4 = 1;
  }
  _DAT_040002b8 = _DAT_040002b8 >> 2;
  _DAT_040002b0 = 0;
  (&DAT_021d6740)[DAT_021d6738] = param_1;
  DAT_021d6738 = DAT_021d6738 + 1 & 3;
  return uVar1;
}

