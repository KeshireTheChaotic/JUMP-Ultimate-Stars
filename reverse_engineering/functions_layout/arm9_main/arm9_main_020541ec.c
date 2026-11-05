
/* WARNING: Removing unreachable block (ram,0x020542b0) */
/* WARNING: Removing unreachable block (ram,0x020542c0) */
/* WARNING: Removing unreachable block (ram,0x020542b4) */
/* WARNING: Removing unreachable block (ram,0x020542c4) */

undefined4 FUN_020541ec(undefined4 param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
    return 0x23e0000;
  case 1:
    return 0;
  case 2:
    break;
  case 3:
    return 0x2000000;
  case 4:
    return 0x27c1060;
  case 5:
    return 0x27ff680;
  case 6:
    return 0x37f8000;
  default:
    return 0;
  }
  if ((DAT_020aadd0 == 0) || (uVar1 = FUN_02053a80(), (uVar1 & 3) == 1)) {
    return 0;
  }
  return 0x2700000;
}

