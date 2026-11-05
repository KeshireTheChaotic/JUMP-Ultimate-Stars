
int FUN_02179040(int param_1)

{
  int iVar1;
  int unaff_r4;
  undefined4 unaff_r5;
  
  if (param_1 == 0) {
    return 0;
  }
  switch(param_1) {
  case 1:
    unaff_r5 = 6;
    unaff_r4 = -0x32;
    break;
  case 2:
    unaff_r5 = 6;
    unaff_r4 = -0x3c;
    break;
  case 3:
    unaff_r5 = 6;
    unaff_r4 = -0x1e;
    break;
  case 4:
    unaff_r5 = 6;
    unaff_r4 = -0x50;
    break;
  case 5:
    unaff_r5 = 6;
    unaff_r4 = -0x14;
  }
  iVar1 = FUN_02176640();
  if (iVar1 == 2) {
    FUN_02177528(unaff_r5,unaff_r4 + -64000);
  }
  else if (iVar1 == 4) {
    FUN_0217806c(unaff_r5,unaff_r4 + -74000);
  }
  else if (iVar1 == 5) {
    FUN_0217d118(unaff_r5,unaff_r4 + -84000);
  }
  else {
    FUN_02175744(unaff_r5,unaff_r4 + -94000);
  }
  return param_1;
}

