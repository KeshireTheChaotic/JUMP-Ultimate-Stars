
int FUN_0217631c(int param_1)

{
  int unaff_r4;
  int iVar1;
  undefined4 unaff_r5;
  
  if (param_1 == 0) {
    return 0;
  }
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
  switch(*(undefined4 *)(DAT_021a7410 + 0x24)) {
  default:
    iVar1 = unaff_r4 + -91000;
    break;
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
  FUN_0217806c(unaff_r5,iVar1);
  return param_1;
}

