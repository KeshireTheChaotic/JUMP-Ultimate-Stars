
void FUN_020654a4(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  DAT_020afba0 = ~(ushort)param_1 & (DAT_020afba0 | DAT_020afba6);
  if (param_1 < 9) {
    if (param_1 < 8) {
      if ((((param_1 < 5) && (-1 < param_1)) && (param_1 != 0)) && (param_1 == 4)) {
        DAT_04000242 = 0x82;
      }
    }
    else {
      DAT_04000243 = 0x82;
    }
  }
  else if (param_1 == 0xc) {
    DAT_04000243 = 0x8a;
    DAT_04000242 = 0x82;
  }
  DAT_020afba6 = (ushort)param_1;
  FUN_02065af4(DAT_020afba0);
                    /* WARNING: Could not recover jumptable at 0x020654fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

