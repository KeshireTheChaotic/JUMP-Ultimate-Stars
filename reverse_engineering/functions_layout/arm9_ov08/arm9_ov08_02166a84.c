
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02166a84(int param_1,uint param_2)

{
  if (param_1 == 1) {
    _DAT_04001000 = _DAT_04001000 & 0xffffe0ff | (~param_2 & (_DAT_04001000 & 0x1f00) >> 8) << 8;
    return;
  }
  _DAT_04000000 = _DAT_04000000 & 0xffffe0ff | (~param_2 & (_DAT_04000000 & 0x1f00) >> 8) << 8;
  return;
}

