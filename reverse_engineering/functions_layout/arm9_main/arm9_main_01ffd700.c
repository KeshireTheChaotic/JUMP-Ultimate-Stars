
void FUN_01ffd700(void)

{
  int *piVar1;
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 0:
    piVar1 = (int *)FUN_01ffe3ec();
    *piVar1 = *piVar1 + 2;
    piVar1[1] = piVar1[1] + 2;
    piVar1 = (int *)FUN_01ffe3ec();
    *piVar1 = *piVar1 + -2;
    piVar1[1] = piVar1[1] + -2;
    return;
  case 1:
    break;
  case 3:
    FUN_01ffcad4();
    return;
  case 4:
    goto LAB_01ffd668;
  case 5:
    goto LAB_01ffd668;
  case 6:
LAB_01ffd668:
    FUN_01ffc8dc();
    return;
  case 7:
    FUN_01ffd5c4();
    return;
  case 9:
    break;
  case 0xb:
    return;
  case 0xe:
    break;
  case 0xf:
    return;
  }
  FUN_01ffc8b0();
  return;
}

