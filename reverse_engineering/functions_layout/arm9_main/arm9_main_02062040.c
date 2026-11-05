
void FUN_02062040(uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_020aeca0;
  FUN_020517fc(DAT_020aeca0 + 6,0,0x48);
  puVar1[1] = param_1;
  puVar1[0x13] = 0x3f;
  if (param_1 == 0) {
    return;
  }
  uVar2 = 1 << ((int)param_1 >> 8 & 0xffU);
  param_1 = param_1 & 0xff;
  puVar1[6] = uVar2;
  *(undefined1 *)(puVar1 + 0x12) = 0xff;
  if (param_1 == 1) {
    if (uVar2 == 0x200) {
      puVar1[8] = 0x10;
      puVar1[9] = 1;
      puVar1[10] = 5;
      *(undefined1 *)(puVar1 + 0x12) = 0xf0;
    }
    else if (uVar2 == 0x2000) {
      puVar1[8] = 0x20;
      puVar1[9] = 2;
      puVar1[10] = 5;
      *(undefined1 *)(puVar1 + 0x12) = 0;
    }
    else {
      if (uVar2 != 0x10000) goto LAB_020621f0;
      puVar1[8] = 0x80;
      puVar1[9] = 2;
      puVar1[10] = 10;
      *(undefined1 *)(puVar1 + 0x12) = 0;
    }
    puVar1[7] = puVar1[8];
    puVar1[0x13] = puVar1[0x13] | 0x40;
    puVar1[0x13] = puVar1[0x13] | 0x100;
    puVar1[0x13] = puVar1[0x13] | 0x200;
    return;
  }
  if (param_1 != 2) {
    if ((param_1 == 3) && ((uVar2 == 0x2000 || (uVar2 == 0x8000)))) {
      puVar1[8] = uVar2;
      puVar1[7] = uVar2;
      puVar1[9] = 2;
      *(undefined1 *)(puVar1 + 0x12) = 0;
      puVar1[0x13] = puVar1[0x13] | 0x40;
      puVar1[0x13] = puVar1[0x13] | 0x100;
      puVar1[0x13] = puVar1[0x13] | 0x200;
      return;
    }
    goto LAB_020621f0;
  }
  if (0x100000 < uVar2) {
    if (uVar2 < 0x200001) {
      if (uVar2 == 0x200000) {
        puVar1[0xf] = 1000;
        puVar1[0x10] = 3000;
        puVar1[0xd] = 17000;
        puVar1[0xe] = 40000;
        puVar1[0x13] = puVar1[0x13] | 0x1000;
        goto LAB_0206217a;
      }
    }
    else if (uVar2 == 0x800000) {
      puVar1[0xf] = 1000;
      puVar1[0x10] = 3000;
      puVar1[0xd] = 68000;
      puVar1[0xe] = 160000;
      puVar1[0x13] = puVar1[0x13] | 0x1000;
      goto LAB_0206217a;
    }
LAB_020621f0:
    puVar1[1] = 0;
    puVar1[6] = 0;
    *DAT_020aeca0 = 3;
    return;
  }
  if (uVar2 < 0x100000) {
    if (uVar2 < 0x40001) {
      if (uVar2 != 0x40000) goto LAB_020621f0;
    }
    else if (uVar2 != 0x80000) goto LAB_020621f0;
  }
  puVar1[0xb] = 0x19;
  puVar1[0xc] = 300;
  puVar1[0x11] = 300;
  puVar1[0xf] = 5000;
  puVar1[0x13] = puVar1[0x13] | 0x80;
  puVar1[0x13] = puVar1[0x13] | 0x400;
LAB_0206217a:
  puVar1[7] = 0x10000;
  puVar1[8] = 0x100;
  puVar1[9] = 3;
  puVar1[10] = 5;
  puVar1[0x13] = puVar1[0x13] | 0x40;
  puVar1[0x13] = puVar1[0x13] | 0x100;
  puVar1[0x13] = puVar1[0x13] | 0x200;
  puVar1[0x13] = puVar1[0x13] | 0x800;
  return;
}

