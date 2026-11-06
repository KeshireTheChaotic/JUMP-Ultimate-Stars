
void FUN_01ffb608(void)

{
  int *piVar1;
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 0:
    piVar1 = (int *)FUN_01ffc88c();
    *piVar1 = *piVar1 + 8;
    piVar1[1] = piVar1[1] + 8;
    piVar1 = (int *)FUN_01ffc88c();
    *piVar1 = *piVar1 + -8;
    piVar1[1] = piVar1[1] + -8;
    return;
  case 1:
    break;
  case 3:
    FUN_01ffa454();
    return;
  case 4:
    goto LAB_01ffb570;
  case 5:
    goto LAB_01ffb570;
  case 6:
LAB_01ffb570:
    FUN_01ffa1a4();
    return;
  case 7:
    FUN_01ffb270();
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
  FUN_01ffa178();
  return;
}

