
undefined4 FUN_02069cc4(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  if ((param_2 & ~param_4) == 0) {
    *param_1 = *param_1 & ~(param_4 << (param_3 & 0xff)) | param_2 << (param_3 & 0xff);
    return 1;
  }
  return 0;
}

