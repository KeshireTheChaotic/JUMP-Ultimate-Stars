
void FUN_027e7d84(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_288 [512];
  undefined1 auStack_88 [128];
  
  iVar1 = DAT_027f97f0;
  *(short *)(DAT_027f97f0 + 0xf6) = (short)*(undefined4 *)(param_1 + 4);
  FUN_027e04c4(auStack_88,iVar1 + 0xe8);
  iVar1 = FUN_027e2260(auStack_288,*(short *)(iVar1 + 0xec) + 0x10,auStack_88);
  puVar2 = (undefined2 *)FUN_03808074();
  *puVar2 = 0x21;
  if (*(short *)(iVar1 + 4) == 0) {
    puVar2[1] = 0;
  }
  else {
    puVar2[1] = 1;
    puVar2[2] = 0x245;
    puVar2[3] = *(undefined2 *)(iVar1 + 4);
  }
  FUN_038080d0();
  return;
}

