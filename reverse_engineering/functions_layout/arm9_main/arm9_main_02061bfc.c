
void FUN_02061bfc(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 != 0) {
    FUN_02061d0c(2);
    return;
  }
  uVar1 = (param_2 & 0x7f00) >> 8;
  param_2 = param_2 & 0xff;
  if ((uVar1 < 0x70) || (0x74 < uVar1)) {
    if (uVar1 == 0x60) {
      DAT_020aebbc = 1;
    }
    else if (uVar1 == 0x62) {
      DAT_020aebc0 = 1;
    }
    else if (uVar1 == 0x67) {
      if (DAT_020aebdc != (uint *)0x0) {
        *DAT_020aebdc = param_2;
      }
      param_2 = 0;
    }
  }
  else {
    if (*(undefined2 **)(&DAT_020aebfc + (uVar1 - 0x70) * 8) != (undefined2 *)0x0) {
      **(undefined2 **)(&DAT_020aebfc + (uVar1 - 0x70) * 8) = (short)param_2;
    }
    (&DAT_020aebf8)[(uVar1 - 0x70) * 4] = 1;
    param_2 = 0;
  }
  FUN_02061d0c(param_2);
  return;
}

