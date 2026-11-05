
void FUN_027e33c4(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_208 [512];
  
  iVar2 = DAT_027f97f0;
  FUN_037fe788(*(undefined4 *)(param_1 + 4),DAT_027f97f0 + 0xe8,0x40);
  if ((1 << (*(ushort *)(iVar2 + 0x11a) & 0xff) & (uint)*(ushort *)(iVar2 + 500)) == 0) {
    puVar1 = (undefined2 *)FUN_03808074();
    *puVar1 = 7;
    puVar1[1] = 6;
    FUN_038080d0();
  }
  else {
    iVar2 = FUN_027e2410(auStack_208,*(undefined2 *)(iVar2 + 0xf8));
    if (*(short *)(iVar2 + 4) == 0) {
      puVar1 = (undefined2 *)FUN_03808074();
      *puVar1 = 7;
      puVar1[1] = 0;
      FUN_038080d0();
    }
    else {
      FUN_027e3388(0x212);
    }
  }
  return;
}

