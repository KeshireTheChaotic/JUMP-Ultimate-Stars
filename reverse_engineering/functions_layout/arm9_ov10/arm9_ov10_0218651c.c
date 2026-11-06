
uint FUN_0218651c(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *param_2;
  if (uVar1 < 5) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar1) {
    case 0:
      uVar2 = FUN_02184258();
      break;
    case 1:
      uVar2 = FUN_021876b8();
      break;
    case 2:
      uVar2 = FUN_02185c30();
      break;
    case 3:
      goto switchD_02186532_caseD_3;
    case 4:
      uVar2 = FUN_02189090();
    }
  }
  else {
switchD_02186532_caseD_3:
    FUN_02189470(param_1,s_gpiProcessOperation_was_passed_a_021a5c04,uVar1);
    FUN_02002068(&DAT_021a5c4c,s_gpiOperation_c_021a5c50,0,0x146);
  }
  if (uVar2 != 0) {
    param_2[7] = uVar2;
  }
  return uVar2;
}

