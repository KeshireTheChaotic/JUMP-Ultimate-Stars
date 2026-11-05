
void FUN_027e0fd4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)FUN_027e0134();
  iVar1 = DAT_027f97f0;
  iVar4 = 0;
  *(undefined2 *)(DAT_027f97f0 + 0x5e) = 0;
  *(undefined2 *)(iVar1 + 0x60) = 0;
  *(undefined2 *)(iVar1 + 0x88) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x2c;
    iVar4 = FUN_037fcc6c(&DAT_027f8328);
  }
  if ((iVar4 == 0) && (DAT_027f97ec != 0)) {
    puVar3 = (undefined2 *)FUN_03808074();
    *puVar3 = 0x80;
    puVar3[1] = 8;
    puVar3[2] = 0x16;
    puVar3[3] = 0x2c;
    FUN_038080d0();
  }
  return;
}

