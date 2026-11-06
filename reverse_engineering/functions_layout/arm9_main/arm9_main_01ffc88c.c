
void FUN_01ffc88c(void)

{
  int *piVar1;
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 0:
    piVar1 = (int *)FUN_01ffd700();
    *piVar1 = *piVar1 + 4;
    piVar1[1] = piVar1[1] + 4;
    piVar1 = (int *)FUN_01ffd700();
    *piVar1 = *piVar1 + -4;
    piVar1[1] = piVar1[1] + -4;
    return;
  case 1:
    break;
  case 3:
    FUN_01ffb8ac();
    return;
  case 4:
    goto LAB_01ffc7f4;
  case 5:
    goto LAB_01ffc7f4;
  case 6:
LAB_01ffc7f4:
    FUN_01ffb658();
    return;
  case 7:
    FUN_01ffc750();
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
  FUN_01ffb62c();
  return;
}

