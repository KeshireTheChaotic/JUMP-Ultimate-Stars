
int FUN_0216b910(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  FUN_0216b514();
  uVar2 = 0;
  *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 2;
  if ((char)param_3[7] != '\0') {
    *(short *)(param_1 + 0x48) = -*(short *)(param_1 + 0x48);
  }
  *(undefined2 *)(param_1 + 0x5c) = 0x1800;
  *(undefined1 *)(param_1 + 0x68) = 0;
  iVar1 = *param_3 + 0x27c4;
  do {
    if (3 < uVar2) {
LAB_0216b994:
      FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4),FUN_0216cfa4);
      return param_1;
    }
    if ((*(byte *)(iVar1 + 0x600) & 1) == 0) {
      *(int *)(param_1 + 100) = iVar1;
      *(byte *)(iVar1 + 0x600) = *(byte *)(iVar1 + 0x600) | 1;
      goto LAB_0216b994;
    }
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + 0x604;
  } while( true );
}

