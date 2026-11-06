
void FUN_01ffb1b8(void)

{
  int *piVar1;
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 0:
    piVar1 = (int *)FUN_01ffc5b8();
    *piVar1 = *piVar1 + 8;
    piVar1[1] = piVar1[1] + 8;
    piVar1 = (int *)FUN_01ffc5b8();
    *piVar1 = *piVar1 + -8;
    piVar1[1] = piVar1[1] + -8;
    return;
  case 1:
    break;
  case 2:
    piVar1 = (int *)FUN_01ffb608();
    *piVar1 = *piVar1 + 0x200;
    piVar1[1] = piVar1[1] + 0x100;
    piVar1 = (int *)FUN_01ffb608();
    *piVar1 = *piVar1 + -0x200;
    piVar1[1] = piVar1[1] + -0x100;
    return;
  case 3:
    FUN_01ffa454();
    return;
  case 4:
    goto LAB_01ffb0dc;
  case 5:
    goto LAB_01ffb0dc;
  case 6:
LAB_01ffb0dc:
    FUN_01ffa1a4();
    return;
  case 7:
    FUN_01ffb038();
    return;
  case 9:
    break;
  case 0xb:
    FUN_01ff94ac();
    return;
  case 0xe:
    break;
  case 0xf:
    FUN_01ff9508();
    return;
  }
  FUN_01ffa178();
  return;
}

