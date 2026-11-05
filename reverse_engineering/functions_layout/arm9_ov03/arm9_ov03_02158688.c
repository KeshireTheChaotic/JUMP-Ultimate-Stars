
void FUN_02158688(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  *puVar1 = 0x10;
  (&DAT_020b4daf)[(uint)(byte)puVar1[2] * 0xca4] = (char)*(undefined4 *)(puVar1 + 0xd8);
  FUN_02073114((uint)(byte)puVar1[2] * 0xca4 + 0x4af7,1);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02073ebc(3,1);
  FUN_02028384(*(undefined4 *)(*(int *)(puVar1 + 4) + 4),FUN_02155b4c);
  return;
}

