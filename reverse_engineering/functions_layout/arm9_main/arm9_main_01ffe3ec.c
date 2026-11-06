
void FUN_01ffe3ec(void)

{
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 1:
    break;
  case 3:
    FUN_01ffd85c();
    return;
  case 4:
    goto LAB_01ffe380;
  case 5:
    goto LAB_01ffe380;
  case 6:
LAB_01ffe380:
    FUN_01ffd73c();
    return;
  case 7:
    FUN_01ffe2b0();
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

