
undefined4 FUN_02054100(undefined4 param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
    return 0x21d7c00;
  case 1:
    return 0;
  case 2:
    break;
  case 3:
    return 0x1fffb40;
  case 4:
    return 0x27c1060;
  case 5:
    return 0x27ff000;
  case 6:
    return 0x37f8000;
  default:
    return 0;
  }
  if ((DAT_020aadd0 == 0) || (uVar1 = FUN_02053a80(), (uVar1 & 3) == 1)) {
    return 0;
  }
  return 0x23e0000;
}

