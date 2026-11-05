
void FUN_027e32f0(void)

{
  short *psVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_208 [512];
  
  psVar1 = DAT_027f97f0;
  if (*DAT_027f97f0 == 2) {
    iVar3 = FUN_027e2204(auStack_208);
    if (*(short *)(iVar3 + 4) == 0) {
      *psVar1 = 1;
      FUN_03805edc();
      *psVar1 = 0;
      puVar2 = (undefined2 *)FUN_03808074();
      *puVar2 = 2;
      puVar2[1] = 0;
      FUN_038080d0();
    }
    else {
      FUN_027e32b4(0x301);
    }
  }
  else {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 2;
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

