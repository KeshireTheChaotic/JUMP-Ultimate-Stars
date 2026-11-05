
int FUN_0214dc8c(undefined4 param_1,int param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  int unaff_r4;
  int unaff_r5;
  
  for (; unaff_r4 < param_2; unaff_r4 = unaff_r4 + 1) {
    bVar1 = *param_4;
    param_4 = param_4 + -1;
    unaff_r5 = unaff_r5 * 0x100 + (uint)bVar1;
  }
  return unaff_r5;
}

