
void FUN_0206550c(undefined4 param_1)

{
  ushort uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = (ushort)param_1;
  DAT_020afba0 = ~uVar1 & (DAT_020afba0 | DAT_020afbac);
  DAT_020afbac = uVar1;
  switch(param_1) {
  case 0:
    *puRam020655c4 = *puRam020655c4 & (ushort)uRam020655d4;
    break;
  case 1:
    *puRam020655bc = 0x9b;
    *puRam020655c4 = *puRam020655c4 | (ushort)uRam020655c8;
    break;
  case 3:
    *puRam020655bc = 0x93;
  case 2:
    *puRam020655c0 = 0x9b;
    *puRam020655c4 = *puRam020655c4 | (ushort)uRam020655c8;
    break;
  case 4:
    *puRam020655cc = 0x9b;
    *puRam020655c4 = *puRam020655c4 | (ushort)uRam020655c8;
    break;
  case 0xc:
    *puRam020655cc = 0x93;
  case 8:
    *puRam020655d0 = 0x9b;
    *puRam020655c4 = *puRam020655c4 | (ushort)uRam020655c8;
  }
  FUN_02065af4(DAT_020afba0);
                    /* WARNING: Could not recover jumptable at 0x020655b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

