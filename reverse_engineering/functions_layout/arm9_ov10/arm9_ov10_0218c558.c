
void FUN_0218c558(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(char *)(param_2 + 7) == '\x01') {
    if ((((*(byte *)(param_2 + 0xc) < 3) &&
         (param_1[*(byte *)(param_2 + 0xc) + 5] = 1, param_1[4] == 0)) && (param_1[6] != 0)) &&
       ((param_1[7] != 0 && ((param_1[1] == -1 || (param_1[5] != 0)))))) {
      param_1[4] = 1;
      iVar1 = FUN_02001ed8();
      param_1[10] = iVar1 + 10000;
      (*(code *)param_1[0xd])(param_1[4],param_1[0xf]);
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 7) != '\x02') {
      return;
    }
    *(undefined1 *)(param_2 + 7) = 3;
    FUN_0218cce0(*param_1,*(undefined4 *)(param_3 + 4),
                 (int)(uint)*(ushort *)(param_3 + 2) >> 8 | (*(ushort *)(param_3 + 2) & 0xff) << 8,
                 param_2,0x15);
  }
  return;
}

