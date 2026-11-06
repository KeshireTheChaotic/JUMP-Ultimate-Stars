
void FUN_01ffe274(void)

{
  int *piVar1;
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 1:
    break;
  case 2:
    piVar1 = (int *)FUN_01ffe3ec();
    *piVar1 = *piVar1 + 0x200;
    piVar1[1] = piVar1[1] + 0x100;
    piVar1 = (int *)FUN_01ffe3ec();
    *piVar1 = *piVar1 + -0x200;
    piVar1[1] = piVar1[1] + -0x100;
    return;
  case 3:
    FUN_01ffd85c();
    return;
  case 4:
    goto LAB_01ffe1dc;
  case 5:
    goto LAB_01ffe1dc;
  case 6:
LAB_01ffe1dc:
    FUN_01ffd73c();
    return;
  case 7:
    FUN_01ffe138();
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
  FUN_01ffd714();
  return;
}

