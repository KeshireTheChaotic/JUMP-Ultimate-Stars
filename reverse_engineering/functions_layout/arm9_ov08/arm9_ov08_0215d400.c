
undefined4 FUN_0215d400(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_021622d4();
  uVar2 = 1;
  if (param_1 < 0xb) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
    case 1:
      if ((byte)(*(char *)(iVar1 + 0xe7) - 1U) < 2) {
        uVar2 = 0;
      }
      break;
    case 4:
    case 5:
    case 6:
      if (*(char *)(iVar1 + 0xf5) != '\0') {
        uVar2 = 0;
      }
      break;
    case 7:
      if (*(char *)(iVar1 + 0xf5) == '\0') {
        uVar2 = 0;
      }
      break;
    case 9:
      if (*(char *)(iVar1 + 0xf6) != '\0') {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

