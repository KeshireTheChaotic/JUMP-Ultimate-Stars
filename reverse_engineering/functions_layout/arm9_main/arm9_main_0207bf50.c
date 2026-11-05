
int FUN_0207bf50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,short param_6,
                undefined2 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0214be0c + 0x18);
  if (iVar3 == 0) {
    return 0;
  }
  *(char *)(iVar3 + 0x1c) = (char)param_3;
  *(int *)(iVar3 + 8) = param_1;
  *(int *)(iVar3 + 0xc) = param_2;
  *(int *)(iVar3 + 0x10) = param_4;
  *(undefined4 *)(iVar3 + 0x14) = param_5;
  *(undefined2 *)(iVar3 + 0x1a) = param_7;
  if (*(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4) + 100) + 0x48) == '\0') {
    param_6 = -param_6;
  }
  *(short *)(iVar3 + 0x18) = param_6;
  iVar2 = *(int *)(param_2 + 0x5c);
  uVar1 = *(uint *)(iVar2 + 0x34) | 0x400;
  *(uint *)(iVar2 + 0x34) = uVar1;
  FUN_02037c24(DAT_0214be0c + 0x18,iVar3,uVar1,iVar2,param_4);
  FUN_02037b98(DAT_0214be0c + param_3 * 8,iVar3);
  if (param_3 == 2) {
    FUN_0207b3c0(*(undefined4 *)(param_2 + 0x60),1);
  }
  iVar2 = *(int *)(param_2 + 0x5c);
  *(undefined2 *)(iVar2 + 0x24) = 0;
  *(undefined2 *)(iVar2 + 0x26) = 0;
  iVar2 = *(int *)(param_4 + 0x1c);
  if ((*(uint *)(iVar2 + 0x18) & 0x2000) != 0) {
    *(byte *)(iVar3 + 0x1d) = *(byte *)(iVar3 + 0x1d) | 2;
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x80;
  }
  if ((*(uint *)(iVar2 + 0x18) & 0x10000) != 0) {
    *(byte *)(iVar3 + 0x1d) = *(byte *)(iVar3 + 0x1d) | 4;
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | 2;
  }
  return iVar3;
}

