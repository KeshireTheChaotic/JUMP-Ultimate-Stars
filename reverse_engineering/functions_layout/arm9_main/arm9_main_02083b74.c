
void FUN_02083b74(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x2c) & 0x100) == 0) {
    iVar1 = *(int *)(DAT_0214be14 + 0x84);
    FUN_02037c24(DAT_0214be14 + 0x84,iVar1,param_3,param_4,param_4);
    FUN_02037b98(DAT_0214be14 + 0x74 + param_3 * 8,iVar1);
    *(int *)(iVar1 + 8) = param_1;
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x100;
  }
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(char *)(param_1 + 0x38) = (char)param_3;
  return;
}

