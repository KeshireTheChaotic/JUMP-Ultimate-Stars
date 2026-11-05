
void FUN_027e8070(void)

{
  short *psVar1;
  undefined2 *puVar2;
  
  psVar1 = DAT_027f97f0;
  if (*DAT_027f97f0 == 1) {
    FUN_03805edc(1);
    *psVar1 = 0;
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 4;
    puVar2[1] = 0;
    FUN_038080d0();
  }
  else {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 4;
    puVar2[1] = 3;
    FUN_038080d0();
  }
  return;
}

