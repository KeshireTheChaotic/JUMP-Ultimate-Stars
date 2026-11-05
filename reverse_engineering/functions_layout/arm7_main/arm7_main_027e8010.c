
void FUN_027e8010(int param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  DAT_027f97f0 = *(undefined4 *)(param_1 + 8);
  DAT_027f97ec = puVar2;
  *puVar2 = DAT_027f97f0;
  puVar2[2] = *(undefined4 *)(param_1 + 0xc);
  FUN_027e7ec8();
  FUN_03805edc(0xf);
  *(undefined2 *)*puVar2 = 1;
  puVar1 = (undefined2 *)FUN_03808074();
  *puVar1 = 3;
  puVar1[1] = 0;
  FUN_038080d0();
  return;
}

