
void FUN_027e87fc(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_208 [520];
  
  iVar1 = FUN_027e22f0(auStack_208,*(uint *)(param_1 + 4) & 0xffff);
  if (*(short *)(iVar1 + 4) == 0) {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0x24;
    puVar2[1] = 0;
    FUN_038080d0();
  }
  else {
    FUN_027e87c0(0x242);
  }
  return;
}

