
void FUN_027e1744(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar1 = (undefined4 *)FUN_027e0134();
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    *puVar1 = 0x2b;
    puVar1[1] = param_1;
    iVar2 = FUN_037fcc6c(&DAT_027f8328,puVar1,0);
  }
  if ((iVar2 == 0) && (DAT_027f97ec != 0)) {
    puVar3 = (undefined2 *)FUN_03808074();
    *puVar3 = 0x80;
    puVar3[1] = 8;
    puVar3[2] = 0x16;
    puVar3[3] = 0x2b;
    FUN_038080d0();
  }
  return;
}

