
void FUN_02088c48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02088904(*(short *)(param_1 + 2),s_CommLib_cpp_020a0338,0x1cc);
    return;
  }
  switch(*(undefined2 *)(param_1 + 4)) {
  case 10:
    break;
  case 0xb:
    return;
  default:
    if (DAT_0214be8c == (code *)0x0) {
      return;
    }
    (*DAT_0214be8c)(s_unknown_indicate__state____d_020a03e8,*(undefined2 *)(param_1 + 4),
                    DAT_0214be8c,param_4,param_4);
    return;
  }
  iVar1 = FUN_0205a7fc(&DAT_0214c200,0xd,0xff,8,1);
  if (iVar1 == 0) {
    DAT_0214bea4 = 6;
    return;
  }
  FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x1e1);
  return;
}

