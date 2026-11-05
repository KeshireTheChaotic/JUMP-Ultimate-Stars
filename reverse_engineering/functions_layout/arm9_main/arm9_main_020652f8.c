
ushort FUN_020652f8(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  DAT_020afba0 = DAT_020afba0 | uVar1;
  FUN_02065af4(uVar1);
  return uVar1;
}

