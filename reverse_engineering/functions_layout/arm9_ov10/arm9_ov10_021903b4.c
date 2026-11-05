
void FUN_021903b4(int param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02191160(((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                       (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                       (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                       (*(ushort *)(param_1 + 0xe) & 0xff) << 8);
  if (iVar1 != 0) {
    iVar2 = FUN_02190d70();
    if (iVar2 == 0) {
      FUN_02190ccc(iVar1);
      return;
    }
    *param_2 = 0;
    *(undefined2 *)(param_2 + 2) = 0;
    iVar1 = FUN_02191208(param_2,param_3);
    *(ushort *)(param_2 + 2) = (ushort)((uint)iVar1 >> 8) | (ushort)(iVar1 << 8);
    FUN_021908ac(param_2,param_3,0,0,
                 ((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                 (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                 (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                 (*(ushort *)(param_1 + 0xe) & 0xff) << 8,1);
  }
  return;
}

