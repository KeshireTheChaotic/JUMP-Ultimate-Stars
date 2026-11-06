
void FUN_01ffdd90(void)

{
  int *piVar1;
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 1:
    break;
  case 2:
    piVar1 = (int *)FUN_01ffe064();
    *piVar1 = *piVar1 + 0x800;
    piVar1[1] = piVar1[1] + 0x400;
    piVar1 = (int *)FUN_01ffe064();
    *piVar1 = *piVar1 + -0x800;
    piVar1[1] = piVar1[1] + -0x400;
    return;
  case 3:
    FUN_01ffd85c();
    return;
  case 4:
    goto LAB_01ffdcf8;
  case 5:
    goto LAB_01ffdcf8;
  case 6:
LAB_01ffdcf8:
    FUN_01ffd73c();
    return;
  case 7:
    FUN_01ffd9f8();
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

