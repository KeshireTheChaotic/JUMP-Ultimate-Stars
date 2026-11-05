
void FUN_02199cd8(uint param_1)

{
  char extraout_r1;
  int extraout_r1_00;
  uint uVar1;
  char cVar2;
  
  if ((param_1 & 2) == 0) {
    cVar2 = (char)((int)param_1 >> 2) + '\x19';
  }
  else {
    cVar2 = (char)((param_1 & 0x3ff) >> 2);
  }
  uVar1 = (uint)DAT_021aa0c4;
  FUN_0200d12c(uVar1,0x10);
  (&DAT_021aa0c8)[extraout_r1_00] = cVar2;
  if (uVar1 < 0x10) {
    DAT_021aa0c4 = DAT_021aa0c4 + 1;
    return;
  }
  FUN_0200d12c(uVar1 + 1,0x10);
  DAT_021aa0c4 = extraout_r1 + '\x10';
  return;
}

