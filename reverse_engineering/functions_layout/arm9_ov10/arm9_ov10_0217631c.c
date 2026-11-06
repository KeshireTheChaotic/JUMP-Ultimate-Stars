
uint FUN_0217631c(uint param_1)

{
  int unaff_r4;
  int iVar1;
  undefined4 unaff_r5;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 5) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 1:
      unaff_r5 = 9;
      unaff_r4 = -1;
      break;
    case 2:
      unaff_r5 = 9;
      unaff_r4 = -2;
      break;
    case 3:
      unaff_r5 = 6;
      unaff_r4 = -10;
      break;
    case 4:
      unaff_r5 = 6;
      unaff_r4 = -0x14;
    }
  }
  if (*(uint *)(DAT_021a7410 + 0x24) < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(*(uint *)(DAT_021a7410 + 0x24)) {
    default:
      goto switchD_02176374_caseD_0;
    case 1:
      iVar1 = unaff_r4 + -61000;
      FUN_02177528(unaff_r5,iVar1);
      break;
    case 2:
      iVar1 = unaff_r4 + -61000;
      if (*(int *)(DAT_021a7410 + 0x9c) < 1) {
        FUN_02177528(unaff_r5,iVar1);
      }
      break;
    case 4:
      iVar1 = unaff_r4 + -71000;
      break;
    case 5:
      iVar1 = unaff_r4 + -81000;
      FUN_0217d118(unaff_r5,iVar1);
    }
  }
  else {
switchD_02176374_caseD_0:
    iVar1 = unaff_r4 + -91000;
  }
  FUN_0217806c(unaff_r5,iVar1);
  return param_1;
}

