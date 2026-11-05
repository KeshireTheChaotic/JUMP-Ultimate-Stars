
void FUN_027e17e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  
  iVar1 = DAT_027f97f0;
  puVar2 = (undefined4 *)FUN_027e0134();
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    *puVar2 = 0x2d;
    puVar2[1] = (uint)*(ushort *)(iVar1 + 0x68);
    iVar3 = FUN_037fcc6c(&DAT_027f8328,puVar2,0);
  }
  if (iVar3 == 0) {
    puVar4 = (undefined2 *)FUN_03808074();
    *puVar4 = 0x80;
    puVar4[1] = 8;
    puVar4[2] = 0x16;
    puVar4[3] = 0x2d;
    FUN_038080d0();
  }
  else {
    *(undefined2 *)(iVar1 + 0x66) = 1;
  }
  return;
}

