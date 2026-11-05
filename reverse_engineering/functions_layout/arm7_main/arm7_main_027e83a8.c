
void FUN_027e83a8(void)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_210 [516];
  
  psVar1 = DAT_027f97f0;
  if (*DAT_027f97f0 == 2) {
    iVar3 = FUN_027e2204(auStack_210);
    if (*(short *)(iVar3 + 4) == 0) {
      *psVar1 = 1;
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 6;
      puVar2[1] = 0;
      FUN_038080d0();
    }
    else {
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 6;
      puVar2[1] = 1;
      puVar2[2] = 0x301;
      puVar2[3] = *(undefined2 *)(iVar3 + 4);
      FUN_038080d0();
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 6;
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

