
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0206531c(dword param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afbb8);
  if (param_1 == 0) {
    _DAT_04001000 = _DAT_04001000 & 0x7fffffff;
  }
  else if (param_1 == 0x100) {
    _DAT_04001000 = _DAT_04001000 | 0x80000000;
    DAT_04000249 = 0x83;
  }
  DAT_020afbb8 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
                    /* WARNING: Could not recover jumptable at 0x02065360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

