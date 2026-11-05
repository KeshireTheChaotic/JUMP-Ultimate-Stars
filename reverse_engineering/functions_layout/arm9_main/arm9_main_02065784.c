
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02065784(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbb0);
  if (param_1 == 0) {
    _DAT_04000000 = _DAT_04000000 & 0x7fffffff;
  }
  else if (param_1 == 0x20) {
    _DAT_04000000 = _DAT_04000000 | 0x80000000;
    DAT_04000245 = 0x85;
  }
  else if (param_1 == 0x40) {
    _DAT_04000000 = _DAT_04000000 | 0x80000000;
    DAT_04000246 = 0x85;
  }
  DAT_020afbb0 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
                    /* WARNING: Could not recover jumptable at 0x020657de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

