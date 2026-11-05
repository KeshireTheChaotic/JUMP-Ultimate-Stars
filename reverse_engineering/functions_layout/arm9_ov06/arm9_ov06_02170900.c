
undefined4 FUN_02170900(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  iVar3 = iVar2 + 0x1e7c;
  uVar1 = 0;
  do {
    if (8 < uVar1) {
LAB_02170950:
      if (*(int *)(param_1 + 0x30) == 0) {
        *(byte *)(iVar3 + 0x100) = *(byte *)(iVar3 + 0x100) | 2;
        return 0;
      }
      FUN_02166a1c(param_1 + 0x34,param_3 + 1,iVar2,param_4,param_4);
      *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)((int)param_3 + 0x25);
      *(char *)(param_1 + 0x52) = (char)param_3[7];
      *(int *)(param_1 + 0x40) = param_3[5];
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x10);
      *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)((int)param_3 + 0x1e);
      *(int *)(param_1 + 0x2c) = param_2;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x34);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x3c);
      *(undefined1 *)(param_1 + 0x54) = 0;
      FUN_0216e898((char)param_3[9],(char)param_3[7],param_1 + 0x3c,param_1 + 0x3e);
      FUN_02170b84(iVar3,param_1 + 0x2c,param_1);
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 2;
      return 0;
    }
    if ((*(byte *)(iVar3 + 0x100) & 1) == 0) {
      *(int *)(param_1 + 0x30) = iVar3;
      *(byte *)(iVar3 + 0x100) = *(byte *)(iVar3 + 0x100) | 1;
      goto LAB_02170950;
    }
    uVar1 = uVar1 + 1;
    iVar3 = iVar3 + 0x108;
  } while( true );
}

