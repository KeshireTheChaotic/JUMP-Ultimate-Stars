
void FUN_02051ff8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)&DAT_027fffb0;
  if (param_1 + -0x60 < 0) {
    uVar1 = param_1 - 0x40;
  }
  else {
    puVar2 = (uint *)&DAT_027fffb4;
    uVar1 = param_1 - 0x60;
  }
  *puVar2 = *puVar2 | 0x80000000U >> (uVar1 & 0xff);
  return;
}

