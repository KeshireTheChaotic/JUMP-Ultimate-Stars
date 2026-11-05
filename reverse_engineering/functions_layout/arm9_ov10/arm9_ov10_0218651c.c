
int FUN_0218651c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  switch(*param_2) {
  case 0:
    iVar1 = FUN_02184258();
    break;
  case 1:
    iVar1 = FUN_021876b8();
    break;
  case 2:
    iVar1 = FUN_02185c30();
    break;
  default:
    FUN_02189470(param_1,s_gpiProcessOperation_was_passed_a_021a5c04,*param_2);
    FUN_02002068(&DAT_021a5c4c,s_gpiOperation_c_021a5c50,0,0x146);
    break;
  case 4:
    iVar1 = FUN_02189090();
  }
  if (iVar1 != 0) {
    param_2[7] = iVar1;
  }
  return iVar1;
}

