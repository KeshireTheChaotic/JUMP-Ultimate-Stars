
uint FUN_02001958(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 >> 0x10) * 0x41a7;
  uVar1 = (param_1 & 0xffff) * 0x41a7 + (uVar2 & 0x7fff) * 0x10000;
  if (0x7fffffff < uVar1) {
    uVar1 = (uVar1 & 0x7fffffff) + 1;
  }
  uVar1 = uVar1 + (uVar2 >> 0xf);
  if (0x7fffffff < uVar1) {
    uVar1 = (uVar1 & 0x7fffffff) + 1;
  }
  return uVar1;
}

