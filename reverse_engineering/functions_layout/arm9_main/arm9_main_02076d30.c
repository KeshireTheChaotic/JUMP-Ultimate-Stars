
uint FUN_02076d30(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (4 < param_3) {
    return 0;
  }
  if (3 < param_4) {
    return 0;
  }
  iVar1 = FUN_02076c98(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02076d00(iVar1);
  uVar2 = *(uint *)(iVar1 + 0x14);
  if (((uVar2 & 0x1f | uVar2 >> 5 & 0x1f | uVar2 >> 10 & 0x1f | uVar2 >> 0xf & 0x1f) <<
       (param_3 & 0xff) & 0xffffffe0) != 0) {
    return 0;
  }
  uVar2 = uVar2 << (param_3 + param_4 * 5 & 0xff);
  if ((uVar2 & 0xfff00000) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x568) & uVar2) != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

