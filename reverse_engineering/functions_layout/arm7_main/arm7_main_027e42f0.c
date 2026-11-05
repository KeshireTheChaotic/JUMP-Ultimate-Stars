
void FUN_027e42f0(void)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_210 [516];
  
  psVar1 = DAT_027f97f0;
  if (*DAT_027f97f0 == 5) {
    iVar3 = FUN_027e21ec(auStack_210);
    if (*(short *)(iVar3 + 4) == 0) {
      *psVar1 = 2;
      if (psVar1[0xf7] == 0) {
        iVar3 = FUN_027e24dc(auStack_210,1);
        if (*(short *)(iVar3 + 4) != 0) {
          FUN_027e42b4(0x20e);
          return;
        }
        psVar1[0xf7] = 1;
      }
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 0xb;
      puVar2[1] = 0;
      FUN_038080d0();
    }
    else {
      FUN_027e42b4(0x302);
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0xb;
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

