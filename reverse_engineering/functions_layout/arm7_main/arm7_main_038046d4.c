
void FUN_038046d4(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_r4;
  
  uVar2 = param_1 & 0x70;
  if (0x30 < uVar2) {
    if (uVar2 < 0x51) {
      if ((0x4f < uVar2) || (uVar2 == 0x40)) {
        unaff_r4 = 9;
      }
    }
    else {
      if (uVar2 < 0x61) {
        if (uVar2 != 0x60) goto LAB_0380476c;
      }
      else if (uVar2 != 0x70) goto LAB_0380476c;
      unaff_r4 = 8;
    }
    goto LAB_0380476c;
  }
  if (uVar2 < 0x30) {
    if (uVar2 < 0x11) {
      if ((0xf < uVar2) || (uVar2 == 0)) {
        unaff_r4 = 6;
      }
      goto LAB_0380476c;
    }
    if (uVar2 != 0x20) goto LAB_0380476c;
  }
  unaff_r4 = 4;
LAB_0380476c:
  do {
    iVar1 = FUN_037fe9ec(unaff_r4,(param_1 & 0xff | 0x80) << 8 | 0x3000000 | param_2 & 0xff,0);
  } while (iVar1 < 0);
  return;
}

