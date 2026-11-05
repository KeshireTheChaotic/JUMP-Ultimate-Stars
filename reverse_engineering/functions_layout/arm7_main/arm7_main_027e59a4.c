
void FUN_027e59a4(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_210 [516];
  
  iVar1 = DAT_027f97f0;
  *(short *)(DAT_027f97f0 + 0x196) = (short)*(undefined4 *)(param_1 + 4);
  switch(*(undefined2 *)(iVar1 + 0x196)) {
  case 0:
    *(undefined4 *)(iVar1 + 0x198) = 0;
    goto LAB_027e5a04;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  default:
    *(undefined4 *)(iVar1 + 0x198) = 0;
    goto LAB_027e5a04;
  }
  *(undefined4 *)(iVar1 + 0x198) = 1;
LAB_027e5a04:
  FUN_037fe788(*(undefined4 *)(param_1 + 8),iVar1 + 0x19c,0x50);
  *(short *)(iVar1 + 0xc4) = (short)*(undefined4 *)(param_1 + 0xc);
  iVar1 = FUN_027e261c(auStack_210,*(undefined2 *)(iVar1 + 0xc4));
  if (*(short *)(iVar1 + 4) != 0) {
    FUN_027e5968(0x207);
  }
  puVar2 = (undefined2 *)FUN_03808074();
  *puVar2 = 0x27;
  puVar2[1] = 0;
  FUN_038080d0();
  return;
}

