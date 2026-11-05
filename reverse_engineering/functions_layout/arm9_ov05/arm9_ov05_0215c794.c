
void FUN_0215c794(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int local_20 [4];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x198) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_02079b18(*(undefined4 *)(param_1 + 4),1);
  }
  else {
    local_20[3] = (int)*(short *)(&DAT_0216d674 + *(char *)(param_1 + 0x4e4) * 4) << 0xc;
    FUN_02150070(*(undefined4 *)(param_1 + 0x48),local_20 + 3);
    local_20[2] = 0x100000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x48),local_20 + 2);
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    FUN_02155654(*(undefined4 *)(param_1 + 0x198));
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x198) + 4) + 100);
    (**(code **)(*piVar1 + 0xa8))(piVar1,0);
    local_20[1] = 0x18000;
    local_20[0] = (int)*(short *)(&DAT_0216d676 + *(char *)(param_1 + 0x4e4) * 4) << 0xc;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x198),local_20 + 1,local_20);
    piVar1 = *(int **)(*(int *)(param_1 + 0x198) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x198) + 4) + 100);
    (**(code **)(*piVar1 + 0x68))(piVar1,*(undefined4 *)(&DAT_0216fc5c + param_3 * 4));
    FUN_02079b18(*(undefined4 *)(param_1 + 4),0);
  }
  return;
}

