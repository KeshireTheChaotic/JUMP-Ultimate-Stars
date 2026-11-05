
void FUN_0215b228(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = 0;
  if (param_2 == 0) {
    local_1c = 0x180000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x134),&local_1c);
    func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x134) + 4));
    piVar1 = *(int **)(*(int *)(param_1 + 0x134) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    local_20 = 0;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x144),&local_20);
    piVar1 = *(int **)(*(int *)(param_1 + 0x148) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    do {
      piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x14c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x148) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x134) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    local_14 = 0x100000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x134),&local_14);
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x134) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x134) + 4),1);
    local_18 = 0xfff00000;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x144),&local_18);
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x138) + 4),1);
    do {
      piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x14c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return;
}

