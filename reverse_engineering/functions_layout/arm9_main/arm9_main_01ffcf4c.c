
void FUN_01ffcf4c(void)

{
  int *piVar1;
  undefined4 unaff_r6;
  
  FUN_01ff940c();
                    /* WARNING: Switch is manually overridden */
  switch(unaff_r6) {
  case 0:
    piVar1 = (int *)FUN_01ffdd90();
    *piVar1 = *piVar1 + 2;
    piVar1[1] = piVar1[1] + 2;
    piVar1 = (int *)FUN_01ffdd90();
    *piVar1 = *piVar1 + -2;
    piVar1[1] = piVar1[1] + -2;
    return;
  case 1:
    break;
  case 2:
    piVar1 = (int *)FUN_01ffd1f8();
    *piVar1 = *piVar1 + 0x800;
    piVar1[1] = piVar1[1] + 0x400;
    piVar1 = (int *)FUN_01ffd1f8();
    *piVar1 = *piVar1 + -0x800;
    piVar1[1] = piVar1[1] + -0x400;
    return;
  case 3:
    FUN_01ffcad4();
    return;
  case 4:
    goto LAB_01ffce70;
  case 5:
    goto LAB_01ffce70;
  case 6:
LAB_01ffce70:
    FUN_01ffc8dc();
    return;
  case 7:
    FUN_01ffcdcc();
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
  FUN_01ffc8b0();
  return;
}

