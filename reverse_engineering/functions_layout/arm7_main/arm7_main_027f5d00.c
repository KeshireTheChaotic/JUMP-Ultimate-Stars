
void FUN_027f5d00(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint in_r12;
  
  if ((param_1 & 0x2000000) != 0) {
    iVar3 = 0;
    do {
      (&DAT_027f9830)[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
  }
  (&DAT_027f9830)[(param_1 & 0xf0000) >> 0x10] = (short)param_1;
  if ((param_1 & 0x1000000) == 0) {
    return;
  }
  uVar2 = (uint)DAT_027f9830;
  uVar1 = DAT_027f9830 >> 8;
  switch(uVar1) {
  case 0x22:
    goto LAB_027f5d98;
  case 0x23:
    goto LAB_027f5dd4;
  case 0x24:
LAB_027f5dd4:
    in_r12 = CONCAT22(DAT_027f9838,DAT_027f983a);
    if ((in_r12 < 0x2000000) || (0x27fffff < in_r12)) {
      FUN_038046d4(uVar1,2);
      return;
    }
    param_4 = (uint)DAT_027f9832 | (uVar2 & 0xff) << 0x10;
    param_3 = CONCAT22(DAT_027f9834,DAT_027f9836);
    break;
  case 0x25:
    goto LAB_027f5e1c;
  case 0x26:
LAB_027f5e1c:
    in_r12 = CONCAT22(DAT_027f9836,DAT_027f9838);
    if ((in_r12 < 0x2000000) || (0x27fffff < in_r12)) {
      FUN_038046d4(uVar1,2);
      return;
    }
    param_4 = (uint)DAT_027f9832 | (uVar2 & 0xff) << 0x10;
    param_3 = (uint)DAT_027f9834;
    break;
  case 0x27:
    goto LAB_027f5e5c;
  case 0x28:
LAB_027f5e5c:
    param_4 = (uint)DAT_027f9832 | (uVar2 & 0xff) << 0x10;
    break;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
LAB_027f5d98:
    in_r12 = uVar2 << 0x18 | (uint)DAT_027f9832 << 8 | (uint)(DAT_027f9834 >> 8);
    if ((in_r12 < 0x2000000) || (0x27fffff < in_r12)) {
      FUN_038046d4(uVar1,2);
      return;
    }
  }
  iVar3 = FUN_03804588(1,uVar1,3,param_4,param_3,in_r12);
  if (iVar3 == 0) {
    FUN_038046d4(uVar1,4);
  }
  return;
}

