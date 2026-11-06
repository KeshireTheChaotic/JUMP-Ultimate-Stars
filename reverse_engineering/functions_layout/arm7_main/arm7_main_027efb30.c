
void FUN_027efb30(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + (uint)*(ushort *)(param_2 + 0xe) * 2;
  *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(iVar1 + 0x10);
  *(undefined2 *)(iVar1 + 0x12) = 2;
  *(undefined2 *)(iVar1 + 0x14) = 0;
  *(undefined2 *)(iVar1 + 0x16) = *(undefined2 *)(param_2 + 0x18);
  FUN_037f8e64();
  return;
}

