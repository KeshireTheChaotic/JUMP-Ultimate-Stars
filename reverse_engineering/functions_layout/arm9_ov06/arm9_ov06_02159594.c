
undefined4 FUN_02159594(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0215986c();
  if (iVar1 != 0) {
    return 0;
  }
  if (*(short *)(param_2 + 0xe) == 0) {
    if ((int)*(short *)(param_2 + 0x12) != 0xffffffff) {
      *(ushort *)(param_1 + 0x108) =
           *(ushort *)(param_1 + 0x108) | (ushort)(1 << ((int)*(short *)(param_2 + 0x12) & 0xffU));
    }
    *(undefined2 *)(param_2 + 0x12) = 0xffff;
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0x56c) + 0x18) = 0;
    FUN_0215c690(param_1);
  }
  return 1;
}

