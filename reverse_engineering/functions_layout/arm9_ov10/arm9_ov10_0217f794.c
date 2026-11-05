
undefined4 FUN_0217f794(char *param_1)

{
  char cVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  cVar1 = *param_1;
  while (uVar3 = (uint)cVar1, uVar3 != 0) {
    if ((-1 < (int)uVar3) && ((int)uVar3 < 0x80)) {
      uVar3 = (uint)(byte)(&DAT_0208d420)[uVar3];
    }
    iVar2 = iVar2 * -0x63306ce7 + uVar3;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  FUN_0200d338(iVar2);
  return extraout_r1;
}

