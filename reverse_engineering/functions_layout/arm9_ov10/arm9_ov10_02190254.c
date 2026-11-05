
void FUN_02190254(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_02191208(param_2,param_3);
  if ((iVar1 == 0xffff) &&
     (iVar1 = FUN_021902e8(((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                           (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                           (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                           (*(ushort *)(param_1 + 0xe) & 0xff) << 8,
                           ((int)(uint)*(ushort *)(param_1 + 0x10) >> 8 |
                           (*(ushort *)(param_1 + 0x10) & 0xff) << 8) << 0x10 |
                           (int)(uint)*(ushort *)(param_1 + 0x12) >> 8 |
                           (*(ushort *)(param_1 + 0x12) & 0xff) << 8), iVar1 != 0)) {
    if (*param_2 == '\0') {
      FUN_02190304(param_1,param_2,param_3);
      return;
    }
    if (*param_2 != '\b') {
      return;
    }
    FUN_021903b4(param_1,param_2,param_3);
  }
  return;
}

