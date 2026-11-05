
void FUN_037fbe74(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)&DAT_027fffb8;
  if (param_1 + -0xa0 < 0) {
    uVar1 = param_1 - 0x80;
  }
  else {
    puVar2 = (uint *)&DAT_027fffbc;
    uVar1 = param_1 - 0xa0;
  }
  *puVar2 = *puVar2 | 0x80000000U >> (uVar1 & 0xff);
  return;
}

