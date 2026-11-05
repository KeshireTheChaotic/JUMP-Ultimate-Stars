
ulonglong FUN_02009a5c(int param_1,uint param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = CONCAT44(param_2,param_1);
  uVar1 = param_2 & 0x7fffffff;
  *param_3 = 0;
  if ((0x7fefffff < uVar1) || (uVar1 == 0 && param_1 == 0)) {
    return CONCAT44(param_2,param_1);
  }
  if (uVar1 < 0x100000) {
    uVar2 = FUN_0200b8cc(param_1,param_2,0,0x43500000,param_4);
    uVar1 = (uint)(uVar2 >> 0x20) & 0x7fffffff;
    *param_3 = -0x36;
  }
  *param_3 = *param_3 + ((int)uVar1 >> 0x14) + -0x3fe;
  return uVar2 & 0x800fffffffffffff | 0x3fe0000000000000;
}

