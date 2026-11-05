
void FUN_027e12e0(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = FUN_037fd480(DAT_027f97e4,DAT_027f97e8,0x40);
  *(undefined2 *)(iVar1 + 0xc) = 0x185;
  *(undefined2 *)(iVar1 + 0xe) = 0;
  iVar2 = FUN_037fcc6c(&DAT_027f82c8,iVar1);
  if (iVar2 == 0) {
    FUN_027e1dc8(iVar1);
    if (DAT_027f97ec != 0) {
      puVar3 = (undefined2 *)FUN_03808074();
      *puVar3 = 0x80;
      puVar3[1] = 8;
      puVar3[2] = 0x16;
      puVar3[3] = 0x80;
      FUN_038080d0();
    }
  }
  return;
}

